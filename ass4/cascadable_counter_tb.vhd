
-- Self-contained (no ports) testbench for the "cascadable counter" design unit
--
-- This testbench:
--
-- 1) Instantiate three cascadable counters, with different values for the max_count generic parameter (5, 3 and 15)
--    Two of the counters are in parallel (first with max_count = 5, second with max_count = 15) 
--    and the third (with max_count = 3) has the cascade_in chained to the cascade_out of the first.
--    This structure is depicted below
--  
--    rst--------+--------------------------------------+
--               |                                      |
--    clk-----+--------------------------------------+  |
--            |  |                                   |  |
--    ena--+--------------------------------------+  |  |
--         |  |  |                                |  |  |
--         |  |  |         +--------------+       |  |  |         +--------------+
--         |  |  |         |max_count = 5 |       |  |  |         |max_count = 3 |
--         |  |  |         +--------------+       |  |  |         +--------------+
--         |  |  +-------->|rst           |       |  |  +-------->|rst           |
--         |  +----------->|clk           |       |  +----------->|clk           |
--         +-------------->|ena           |       +-------------->|ena           |
--         |  |  |   open->|cascade_in    |                +----->|cascade_in    |
--         |  |  |         |         count|-->count_0to4   |      |         count|-->count_0to2
--         |  |  |         |   cascade_out|-->c_out_5------+      |   cascade_out|-->c_out_5x3
--         |  |  |         |              |                       |              |
--         |  |  |         +--------------+                       +--------------+
--         |  |  |
--         |  |  |          +--------------+
--         |  |  |          |max_count = 15|
--         |  |  |          +--------------+
--         |  |  +--------->|rst           |
--         |  +------------>|clk           |
--         +--------------->|ena           |
--                    open->|cascade_in    |
--                          |         count|-->count_0to14
--                          |   cascade_out|-->c_out_15
--                          |              |
--                          +--------------+
-- 
--
-- 2) Provide the stimuli to all counters (clock, rst, ena, cascade_in)
--
--    2.1) First some (RST_ASSERTED_CYCLES constant) clock cycles with the reset input asserted,
--         then some others (RST_DEASSERTED_CYCLES constant) with the reset input deasserted.
--         Counters are expected to remain at zero while reset is asserted, and to count only when reset is deasserted
--
--         After these clock cycles have elapsed, the simulation finishes.
--         To stop the simulation a failed assertion is raised, producing the following message on the simulator transcript:
--         "Failure: Simulation finished! (*not* a failure actually)
--         Time: XXX ns, Iteration: X Instance: XXX"
--         This message is expected, not actually a failure!
--
--    2.2) In parallel to the above, a sequence of some (ENA_ASSERTED_CYCLES constant) clock cycles with the ena input asserted,
--         then some others (ENA_DEASSERTED_CYCLES) with the ena input deasserted.
--         Counters are expected to remain frozen while ena is deasserted, and to count only when the ena is asserted
--         (provided the reset input is simultaneously deasserted!)
--
--         With the current values for the above constants some ena assertions overlap with reset assertions, 
--         so we can verify whether the reset input has the highest priority (as it should be!)
--
-- 3) At each clock edge, determines what should be the correct output of the counters 
--    using a high-level implementation of the counters behaviour. 
--    This highly abstract implementation makes heavy use of procedures and non-synthesizable VHDL code.
--
-- 4) Check if the outputs of the instantiated counters match the values of the highly-abstract description.
--    This comparison is carried out using procedures and non-synthesizable VHDL code.
--
--    4.1) If outputs match nothing happens
--
--    4.2) In case of mismatch, an assertion message appears on the simulator transcript.
--         The pattern of the message is: 
--         "Note: output-name for counter-instance-name is wrong (expected some-value, actual is some-other-value)
--          Time: XXX ns, Iteration: X Instance: XXX"
--         Each mismatch will also be reflected on the wave window as a triangle
--
library ieee;
use ieee.std_logic_1164.all;
entity cascadable_counter_tb is
end entity cascadable_counter_tb;

use std.textio.all;
architecture sim of cascadable_counter_tb is

    -- Max count of each counter.
    -- Counters 1 (5 cycles) and 2 (3 cycles) are cascaded, 
    -- so cascade outputs of counter2 (15 cycles total) and counter3 (15 cycles) must match
    constant max_count1: positive := 5;
    constant max_count2: positive := 3;
    constant max_count3: positive := 15;

    -- The actual value of this clock period has no importance in functional simulation
    constant CLK_PERIOD: time := 20 ns;

    -- RST signal is asserted at simulation start for RST_ASSERTED_CYCLES clcock cycles,
    -- then deasserted for 
    -- then the simulation finishes
    constant RST_ASSERTED_CYCLES:   integer := 5;
    constant RST_DEASSERTED_CYCLES: integer := 110;

    -- ENA signal is asserted at simulation start for ENA_ASSERTED_CYCLES clock cycles
    -- (some overlapping the RST asserted period),
    -- then for the rest of the simulation the ENA signal is asserted the last
    -- clock cycle of every ENA_DEASSERTED_CYCLES+1 cycles
    constant ENA_ASSERTED_CYCLES:   integer := 20;
    constant ENA_DEASSERTED_CYCLES: integer := 3;

    -- This is the declaration of the component we want to verify
    component cascadable_counter is
    generic (max_count: positive := 10 );
    port (
        rst, clk, ena: in std_logic;
        cascade_in : in  STD_LOGIC := '1';
        cascade_out:   out std_logic;
        count:         out integer range 0 to max_count - 1 );
    end component cascadable_counter;

    -- A permanent one signal for those mapped input ports requiring a one
    signal logic_one: std_logic := '1';

    -- Signals to stimulate the system-under-test
    signal clk: std_logic := '0';
    signal rst: std_logic := '0';
    signal ena: std_logic;

    -- Outputs from the system-under-test
    signal c_out_5: std_logic;
    signal count_0to4: integer range 0 to max_count1 - 1;
    signal c_out_5x3: std_logic;
    signal count_0to2: integer range 0 to max_count2 - 1;
    signal c_out_15: std_logic;
    signal count_0to14: integer range 0 to max_count3 - 1;

-- ************************************************************************************
-- SUBPROGRAMS
-- ************************************************************************************


    -- ------------------------------------------------------------------------------------
    -- Subprograms (declarations) used to help verify the module functionality
    -- ------------------------------------------------------------------------------------

    -- Increase the counters expected values, taking into account counter 2
    -- is chained with the first, so not always incremented
    procedure increase_expected_values (
        variable expected1: inout integer;
        variable expected2: inout integer;
        variable expected3: inout integer);

    -- Sample actual values from the counters and check these against the expected ones.
    -- Cascade_out signals are checked against '0' or '1' depending on the counter output,
    -- as the output is expected to be asserted only when the counter reaches its maximum count.
    -- Cascade_out from counter2 requires special consideration, as it has not to be
    -- asserted all clock cycles the counter has its maximum count, only if (at the same time)
    -- the first counter has also asserted its cascade_out
    procedure sample_and_check (
        signal count1: in integer range 0 to max_count1 - 1; variable expected1: integer; signal c_out1: in std_logic;
        signal count2: in integer range 0 to max_count2 - 1; variable expected2: integer; signal c_out2: in std_logic;
        signal count3: in integer range 0 to max_count3 - 1; variable expected3: integer; signal c_out3: in std_logic );

    -- Actual values checked against expected ones 
    procedure check_counter_outputs ( 
        constant counter_name:                 string; 
        constant max_count:                    positive;
        variable count:                     in integer; 
        variable expected_count:            in integer;
        signal c_out:                       in std_logic; 
        constant c_out_should_be_asserted:     boolean := true );



-- ------------------------------------------------------------------------------------
-- Subprograms (implementations) used to help verify the module functionality
-- ------------------------------------------------------------------------------------

    -- Increase the counters expected values, taking into account counter 2
    -- is chained with the first, so not always incremented
    procedure increase_expected_values (
        variable expected1: inout integer;
        variable expected2: inout integer;
        variable expected3: inout integer) is
    begin
        expected1 := expected1 + 1;
        if (expected1 = max_count1) then
            expected1 := 0;
            expected2 := expected2 + 1;
            if (expected2 = max_count2) then
                expected2 := 0;
            end if;
        end if;

        expected3 := expected3 + 1;
        if (expected3 = max_count3) then
            expected3 := 0;
        end if;
    end procedure increase_expected_values;


    -- Sample actual values from the counters and check these against the expected ones.
    -- Cascade_out signals are checked against '0' or '1' depending on the counter output,
    -- as the output is expected to be asserted only when the counter reaches its maximum count.
    -- Cascade_out from counter2 requires special consideration, as it has not to be
    -- asserted all clock cycles the counter has its maximum count, only if (at the same time)
    -- the first counter has also asserted its cascade_out
    procedure sample_and_check (
        signal count1: in integer range 0 to max_count1 - 1; variable expected1: integer; signal c_out1: in std_logic;
        signal count2: in integer range 0 to max_count2 - 1; variable expected2: integer; signal c_out2: in std_logic;
        signal count3: in integer range 0 to max_count3 - 1; variable expected3: integer; signal c_out3: in std_logic ) is
        variable actual1, actual2, actual3: integer;
    begin
        actual1 := count1;
        actual2 := count2;
        actual3 := count3;
        check_counter_outputs ("first counter", max_count1, actual1, expected1, c_out1);
        if (c_out1 = '1') then
            check_counter_outputs ("second counter", max_count2, actual2, expected2, c_out2);
        else
            check_counter_outputs ("second counter", max_count2, actual2, expected2, c_out2, false);
        end if;
        check_counter_outputs ("third counter", max_count3, actual3, expected3, c_out3);
    end procedure sample_and_check;  

    -- Actual values checked against expected ones 
    procedure check_counter_outputs ( 
        constant counter_name:                string; 
        constant max_count:                   positive;
        variable count:                    in integer; 
        variable expected_count:           in integer;
        signal c_out:                      in std_logic; 
        constant c_out_should_be_asserted:    boolean := true ) is
    begin
        -- check the count output
        assert count = expected_count 
            report "count for " & counter_name & " is wrong " & 
                    "( expected " & integer'image(expected_count) & 
                    ", actual is " & integer'image(count) & " )"
            severity note;    

        -- check the cascade_out output, taking into account that the cascade_out output
        -- should be asserted if BOTH conditions hold: the count value is the last possible (max_count - 1)
        -- and the inputs for the counter state the counter should be zero on the next clock edge
        -- (all these input values are summed up in the c_out_should_be_asserted boolean parameter)
        if ( (count = max_count - 1) and c_out_should_be_asserted ) then
            assert c_out = '1'
                report "cascade out for " & counter_name & " is wrong " & 
                    "( expected '1', actual is " & std_logic'image(c_out) & " )"
                severity note;    
        else
            assert c_out = '0'
                report "cascade out for " & counter_name & " is wrong " & 
                    "( expected '0', actual is " & std_logic'image(c_out) & " )"
                severity note;    
        end if;
    end procedure check_counter_outputs;
-- ************************************************************************************

begin

    -- ************************************************************************************
    -- SYSTEM UNDER TEST
    -- ************************************************************************************

	---
	-- PUT YOUR CODE HERE TO INSTANTIATE THE THREE COUNTERS (INSTANCE names c1, c2 and c3)
	---

	c1: cascadable_counter
    generic map (max_count => 5)
    port map (rst,clk,ena,open,c_out_5, count_0to4);
	c2: cascadable_counter
    generic map (max_count => 3)
    port map (rst,clk,ena,c_out_5,c_out_5x3,count_0to2);
	c3: cascadable_counter
    generic map (max_count => 15)
    port map (rst,clk,ena,open, c_out_15,count_0to14);
	
    -- ************************************************************************************
    -- STIMULI
    -- ************************************************************************************

    -- Generate the clock signal
    stim_clk: process (clk) is
    begin
        clk <= not(clk) after CLK_PERIOD / 2;
    end process stim_clk;

    -- Generate the rst signal
    stim_rst: process is
    begin
        rst <= '0';
        wait for RST_ASSERTED_CYCLES*CLK_PERIOD;
        rst <= '1';
        wait for RST_DEASSERTED_CYCLES*CLK_PERIOD;
        assert false report "Simulation finished! (*not* a failure actually)" severity failure;
    end process stim_rst;

    -- Generate the ena signal
    stim_ena: process is
    begin
        ena <= '1';
        wait for ENA_ASSERTED_CYCLES*CLK_PERIOD;
        while true loop
            ena <= '0';
            wait for ENA_DEASSERTED_CYCLES*CLK_PERIOD;
            ena <= '1';
            wait for CLK_PERIOD;
        end loop;
    end process stim_ena;

    -- ************************************************************************************
    -- FUNCTIONAL VERIFICATION USING ASSERTIONS
    -- ************************************************************************************

    -- Verify the functionality of the system-under-test 
    -- with the help of the subprograms implemented above
    verify_functionality: process is
        variable i, j: integer := 0;
        variable expected_count_0to4:  integer;
        variable expected_count_0to2:  integer;
        variable expected_count_0to14: integer;
        variable actual_count_0to4:    integer;
        variable actual_count_0to2:    integer;
        variable actual_count_0to14:   integer;
    begin

        -- Initialize expected counter outputs
        expected_count_0to4 := 0;
        expected_count_0to2 := 0;
        expected_count_0to14 := 0;

        -- Start checking outputs sometime after the clock edge
        wait for 5 ns;

        -- FIRST CHECK BLOCK: cycles with RST asserted
        i := 0;
        while i < RST_ASSERTED_CYCLES loop       

            -- Sample actual counter outputs and check if values match the expected ones
            sample_and_check (count_0to4, expected_count_0to4, c_out_5, count_0to2, expected_count_0to2, c_out_5x3, count_0to14, expected_count_0to14, c_out_15);

            wait for CLK_PERIOD;
            i := i + 1;
        end loop;

        -- SECOND CHECK BLOCK: cycles with RST deasserted, ENA asserted every cycle
        while i < ENA_ASSERTED_CYCLES loop

            -- Sample actual counter outputs and check if values match the expected ones
            sample_and_check (count_0to4, expected_count_0to4, c_out_5, count_0to2, expected_count_0to2, c_out_5x3, count_0to14, expected_count_0to14, c_out_15);

            -- Increase expected values from counters (once unit per clock cycle)
            increase_expected_values (expected_count_0to4, expected_count_0to2, expected_count_0to14);

            -- Wait for the next clock cycle
            wait for CLK_PERIOD;
            i := i + 1;
        end loop;

        -- THIRD CHECK BLOCK: cycles with RST deasserted, 
        -- ENA asserted once every ENA_DEASSERTED_CYCLES+1 cycles
        j := 0;
        while i <= RST_ASSERTED_CYCLES + RST_DEASSERTED_CYCLES loop

            -- Sample actual counter outputs and check if values match the expected ones
            sample_and_check (count_0to4, expected_count_0to4, c_out_5, count_0to2, expected_count_0to2, c_out_5x3, count_0to14, expected_count_0to14, c_out_15);

            j := j + 1;
            if (j = ENA_DEASSERTED_CYCLES + 1) then
                j := 0;        
                -- Increase expected values from counters 
                -- (once unit per every ENA_DEASSERTED_CYCLES+1 clock cycles)
                increase_expected_values (expected_count_0to4, expected_count_0to2, expected_count_0to14);
            end if;

            -- Wait for the next clock cycle
            wait for CLK_PERIOD;
            i := i + 1;
        end loop;
    end process verify_functionality;

end architecture sim;


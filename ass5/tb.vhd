--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:44:35 04/03/2014
-- Design Name:   
-- Module Name:   Z:/msee/ise/ass5/tb.vhd
-- Project Name:  ass5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fsm
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb IS
END tb;
 
ARCHITECTURE behavior OF tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fsm
      PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         ena : IN  std_logic;
         pulse_in : IN  std_logic;
         start_stop : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '1';
   signal clk : std_logic := '0';
   signal ena : std_logic := '0';
   signal pulse_in : std_logic := '0';

 	--Outputs
   signal start_stop : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fsm PORT MAP (
          rst => rst,
          clk => clk,
          ena => ena,
          pulse_in => pulse_in,
          start_stop => start_stop
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

    -- Generate the rst signal
    stim_rst: process is
    begin
        rst <= '0';
        wait for 100*CLK_PERIOD;
        rst <= '1';
        wait for 100*CLK_PERIOD;
        --rst <= '1';
        --wait for 60100*CLK_PERIOD; 
        assert false report "Simulation finished! (*not* a failure actually)" severity failure;
    end process stim_rst;

    -- Generate the ena signal
    stim_ena: process is
    begin
            ena <= '0';
            wait for 50*CLK_PERIOD;
        --while true loop
            ena <= '1';
            wait for 50*CLK_PERIOD;
            ena <= '0';
            wait for 50*CLK_PERIOD;
            ena <= '1';
            wait for 60100*CLK_PERIOD;
        --end loop;
    end process stim_ena;
    
     -- Generate the pulse_in signal
    stim_pulse_in: process is
    begin
           pulse_in <='1';    
           wait for 2*CLK_PERIOD;
           pulse_in <='0';    
           wait for 3*CLK_PERIOD;
           pulse_in <='1';    
           wait for 3*CLK_PERIOD;
           pulse_in <='0';    
           wait for 2*CLK_PERIOD;
    end process stim_pulse_in;  


END;

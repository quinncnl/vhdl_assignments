--------------------------------------------------------------------------------
-- Company: 
-- Engineer: CAI Qing, LV Ying
--
-- Create Date:   09:02:37 02/19/2014
-- Design Name:   
-- Module Name:   C:/Users/y.lv.13/ass3/cascadable_counter_tb.vhd
-- Project Name:  ass3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cascadable_counter
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
 
ENTITY cascadable_counter_tb IS
END cascadable_counter_tb;
 
ARCHITECTURE behavior OF cascadable_counter_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cascadable_counter
	 generic (max_count : positive := 10);
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         ena : IN  std_logic;
         cascade_in : IN  std_logic;
         cascade_out : OUT  std_logic;
         count : OUT  integer range 0 to  max_count-1 );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal ena : std_logic := '0';
   signal cascade_in : std_logic := '0';

 	--Outputs
   signal count : integer:=0;
   signal cascade_out : std_logic;

   -- Clock period definitions
   constant clk_period : time := 50 ns;
 
BEGIN
 
	uut: cascadable_counter PORT MAP (
          rst => rst,
          clk => clk,
          ena => ena,
          cascade_in => cascade_in,
          count => count,
          cascade_out => cascade_out
        );
		  
   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      --wait for 100 ns;	
      -- insert stimulus here 

		ena <= '1';
		cascade_in <= '1';
		rst <= '0'; 
		wait for 175ns;
				
		ena <= '0';
		cascade_in <= '0';
		rst <= '1';	
		wait for 150ns;
		
		rst <= '1';
		ena <= '1';
		cascade_in <= '1';
		wait for 350ns;
		
		
		rst <= '1';
		ena <= '1';
		cascade_in <= '0';
		wait for 350ns;
		
		rst <= '1';
		ena <= '0';
		cascade_in <= '1';
		wait for 350ns;
		
		for i in 1 to 10 loop
			wait until rising_edge(clk);
			wait for 25ns;
			if i mod 2 = 0 then
				cascade_in  <= '1';
			else
				cascade_in  <= '0';
			end if;	
		end loop;	
		
		rst <= '1';
		cascade_in <= '0';
		for i in 1 to 10 loop
			wait until rising_edge(clk);
			wait for 25ns;
			if i mod 2 = 0 then
				ena  <= '1';
			else
				ena  <= '0';
			end if;	
		end loop;	
		
			
		rst <= '1';
		cascade_in <= '0';
		for i in 1 to 10 loop
			wait until rising_edge(clk);
			wait for 25ns;
			if i mod 2 = 0 then
				ena  <= '1';
				cascade_in <= '1';
			else
				ena  <= '0';
				cascade_in <= '0';
			end if;	
		end loop;
		
   end process;

END;

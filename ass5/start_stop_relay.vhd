----------------------------------------------------------------------------------
-- Company: 
-- Engineer: CAIQing, LVYing
-- 
-- Create Date:    11:19:28 04/02/2014 
-- Design Name: 
-- Module Name:    fsm - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fsm is
  generic (make_level : std_logic := '0');
  port ( rst : in  STD_LOGIC;
         clk : in  STD_LOGIC;
         ena : in  STD_LOGIC;
         pulse_in : in  STD_LOGIC;
         start_stop : out  STD_LOGIC);
end fsm;

architecture Behavioral of fsm is

  type fsm_state is (stStart, stMakeA, stMakeB, stBreakA, stBreakB);
  signal state: fsm_state;

begin

  stateactions: process (state) is
  begin
    case state is
      when stStart =>
        start_stop <= '0';
      when stMakeA =>
        start_stop <= '0';
      when stMakeB =>
        start_stop <= '1';
      when stBreakA =>
        start_stop <= '0';
      when stBreakB =>
        start_stop <= '1';
    end case; 
  end process stateactions;


  storage: process (rst, clk) is
  begin

    if (rst = '0') then
      state <= stStart;
    elsif rising_edge(clk) then
      case state is
        when stStart =>
          if (pulse_in = make_level) then
            state <= stMakeA;
          elsif (make_level = not(pulse_in)) then
            state <= stBreakA;
          end if;
          
        when stMakeA =>
          if (make_level = not(pulse_in)) then
            state <= stBreakA;
          end if;
          
        when stMakeB =>
          if (make_level = not(pulse_in)) then
            state <= stBreakB;
          end if;

        when stBreakA =>
          if (make_level = pulse_in) then
            state <= stBreakB;
          end if;

        when stBreakB =>
          if (make_level = pulse_in) then
            state <= stMakeA;
          end if;
          
      end case;
    end if;
  end process storage;
  
end Behavioral;


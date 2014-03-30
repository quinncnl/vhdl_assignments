library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cascadable_counter is
  generic (max_count : positive := 10);
  Port ( rst : in STD_LOGIC;
         clk : in STD_LOGIC;
         ena : in STD_LOGIC;
         cascade_in : in STD_LOGIC;
         cascade_out : out STD_LOGIC := '0';
         count : out integer range 0 to  max_count-1);
end cascadable_counter;

architecture Behavioral of cascadable_counter is
  signal internal_cnt : integer range 0 to  max_count-1 := 0;
--  signal initial : boolean := true;

begin

  tr: process (rst, clk) is
  begin

--    if rising_edge(rst) then
--      initial <= true;
--    end if;
    
	if rst = '0' then
      internal_cnt <= 0;
	elsif rising_edge(clk) and ena='1' and cascade_in='1' then
--      if initial = true then
--        initial <= false;
--      else
        if internal_cnt = max_count-1 then
          internal_cnt <= 0;
        else
          internal_cnt <= internal_cnt+1;
        end if;
--      end if;
    end if;
  end process;

  count <= internal_cnt;

  ot: process (internal_cnt, cascade_in) is
  begin
    if (internal_cnt = max_count-1 and cascade_in = '1') then
      cascade_out <= '1';
    else
      cascade_out <= '0';
    end if;
    
  end process;
  
end Behavioral;

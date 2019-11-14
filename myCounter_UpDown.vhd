----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:49:02 10/10/2019 
-- Design Name: 
-- Module Name:    myCounter - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity myCounter_UpDown is
Port ( mclk : in STD_LOGIC;
	Switch : in STD_LOGIC_VECTOR (7 downto 0); -- 3-bit input
	Seven_Segment : out STD_LOGIC_VECTOR (6 to 0);
	Led : out STD_LOGIC_VECTOR (7 downto 0) -- 8-bit output
); -- enable input
end myCounter_UpDown;


architecture Behavioral of myCounter_UpDown is
	signal sign_Count_Out : STD_LOGIC_VECTOR(3 downto 0);
	signal CE,reset,UpDown : STD_LOGIC;
	signal cntDiv: std_logic_vector(23 downto 0); -- general clock div/cnt
	
begin
Led <= Switch;
reset <= Switch(6);
UpDown <= Switch(5);

-- clock divider, untuk menurunkan frkuensi dari clock input (eksternal)
ckDivider: process(mclk)
begin
if mclk'event and mclk='1' then
		cntDiv <= cntDiv + '1';
	if cntDiv = X"00000A" then
		CE <= '1';
		cntDiv <= X"000000";
	else
		CE <= '0';
	end if;
end if;
end process;

--Counter
process(mclk,CE,Reset,UpDown)
begin
	if Reset='1' then
		sign_Count_Out <= "0000";
	elsif(rising_edge(mclk)) then
		if CE='1' then
				if UpDown='1' then
					if sign_Count_Out="1111" then
						sign_Count_Out<="0000";
					else
						sign_Count_Out <= sign_Count_Out + 1;
					end if;
				else
					if sign_Count_Out="0000" then
						sign_Count_Out<="1111";
					else
						sign_Count_Out <= sign_Count_Out - 1;
					end if;
			end if;
		end if;
	end if;
end process;

-- Seven Segment Decoder
process (sign_Count_Out)
begin
case sign_Count_Out is
	when "0000" => Seven_Segment <= "0000001"; ---0
	when "0001" => Seven_Segment <= "1001111"; ---1
	when "0010" => Seven_Segment <= "0010010"; ---2
	when "0011" => Seven_Segment <= "0000110"; ---3
	when "0100" => Seven_Segment <= "1001100"; ---4
	when "0101" => Seven_Segment <= "0100100"; ---5
	when "0110" => Seven_Segment <= "0100000"; ---6
	when "0111" => Seven_Segment <= "0001111"; ---7
	when "1000" => Seven_Segment <= "0000000"; ---8
	when "1001" => Seven_Segment <= "0000100"; ---9
	when "1010" => Seven_Segment <= "0001000"; ---A
	when "1011" => Seven_Segment <= "1100000"; ---b
	when "1100" => Seven_Segment <= "0110001"; ---C
	when "1101" => Seven_Segment <= "1000010"; ---d
	when "1110" => Seven_Segment <= "0110000"; ---E
	when "1111" => Seven_Segment <= "0111000"; ---F
	when others => Seven_Segment <= "1111111"; ---null
end case;
end process;

end Behavioral;


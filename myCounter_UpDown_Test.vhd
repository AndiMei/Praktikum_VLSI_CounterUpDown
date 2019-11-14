--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:23:00 10/24/2019
-- Design Name:   
-- Module Name:   E:/Documents/Kuliah/Semester_5/Prak. VLSI/Pertemuan_06/Percobaan_02/myCounter_UpDown_Test.vhd
-- Project Name:  Percobaan_02
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: myCounter_UpDown
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
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY myCounter_UpDown_Test IS
END myCounter_UpDown_Test;
 
ARCHITECTURE behavior OF myCounter_UpDown_Test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT myCounter_UpDown
    PORT(
         mclk : IN  std_logic;
         Switch : IN  std_logic_vector(7 downto 0);
         Seven_Segment : OUT  std_logic_vector(6 to 0);
         Led : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal mclk : std_logic := '0';
   signal Switch : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal Seven_Segment : std_logic_vector(0 to 6);
   signal Led : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant mclk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: myCounter_UpDown PORT MAP (
          mclk => mclk,
          Switch => Switch,
          --Seven_Segment => Seven_Segment,
          Led => Led
        );

   -- Clock process definitions
   mclk_process :process
   begin
		mclk <= '0';
		wait for mclk_period/2;
		mclk <= '1';
		wait for mclk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		Switch(6) <= '1';
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		Switch(6) <= '0';
      wait for mclk_period*10;
		
		
      -- insert stimulus here 
		Switch(5) <= '1';
      wait;
   end process;

END;

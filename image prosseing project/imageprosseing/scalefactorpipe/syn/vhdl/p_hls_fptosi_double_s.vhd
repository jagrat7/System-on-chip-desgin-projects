-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity p_hls_fptosi_double_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (63 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0);
    ap_ce : IN STD_LOGIC );
end;


architecture behav of p_hls_fptosi_double_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";
    constant ap_const_lv32_34 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110100";
    constant ap_const_lv32_3E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111110";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv12_C01 : STD_LOGIC_VECTOR (11 downto 0) := "110000000001";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv11_3FF : STD_LOGIC_VECTOR (10 downto 0) := "01111111111";
    constant ap_const_lv32_35 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110101";
    constant ap_const_lv32_54 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001010100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";

    signal p_Result_s_reg_185 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal p_Val2_5_fu_166_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal p_Val2_5_reg_190 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal p_Val2_s_fu_44_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_V_1_fu_66_p1 : STD_LOGIC_VECTOR (51 downto 0);
    signal mantissa_V_fu_70_p4 : STD_LOGIC_VECTOR (53 downto 0);
    signal tmp_V_fu_56_p4 : STD_LOGIC_VECTOR (10 downto 0);
    signal zext_ln502_fu_84_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln502_fu_88_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal sub_ln1311_fu_102_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal isNeg_fu_94_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal sext_ln1311_fu_108_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal ush_fu_112_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal sext_ln1311_1_fu_120_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln1285_fu_128_p1 : STD_LOGIC_VECTOR (53 downto 0);
    signal zext_ln682_fu_80_p1 : STD_LOGIC_VECTOR (136 downto 0);
    signal zext_ln1287_fu_124_p1 : STD_LOGIC_VECTOR (136 downto 0);
    signal r_V_fu_132_p2 : STD_LOGIC_VECTOR (53 downto 0);
    signal tmp_fu_144_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal r_V_1_fu_138_p2 : STD_LOGIC_VECTOR (136 downto 0);
    signal zext_ln662_fu_152_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_1_fu_156_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal result_V_1_fu_174_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal p_Val2_6_fu_179_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_ce_reg : STD_LOGIC;
    signal ap_return_int_reg : STD_LOGIC_VECTOR (31 downto 0);


begin




    ap_ce_reg_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            ap_ce_reg <= ap_ce;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_ce_reg)) then
                ap_return_int_reg <= p_Val2_6_fu_179_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_const_logic_1))) then
                p_Result_s_reg_185 <= p_Val2_s_fu_44_p1(63 downto 63);
                p_Val2_5_reg_190 <= p_Val2_5_fu_166_p3;
            end if;
        end if;
    end process;
    add_ln502_fu_88_p2 <= std_logic_vector(signed(ap_const_lv12_C01) + signed(zext_ln502_fu_84_p1));
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state1_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_return_assign_proc : process(p_Val2_6_fu_179_p3, ap_ce_reg, ap_return_int_reg)
    begin
        if ((ap_const_logic_0 = ap_ce_reg)) then 
            ap_return <= ap_return_int_reg;
        elsif ((ap_const_logic_1 = ap_ce_reg)) then 
            ap_return <= p_Val2_6_fu_179_p3;
        end if; 
    end process;

    isNeg_fu_94_p3 <= add_ln502_fu_88_p2(11 downto 11);
    mantissa_V_fu_70_p4 <= ((ap_const_lv1_1 & tmp_V_1_fu_66_p1) & ap_const_lv1_0);
    p_Val2_5_fu_166_p3 <= 
        zext_ln662_fu_152_p1 when (isNeg_fu_94_p3(0) = '1') else 
        tmp_1_fu_156_p4;
    p_Val2_6_fu_179_p3 <= 
        result_V_1_fu_174_p2 when (p_Result_s_reg_185(0) = '1') else 
        p_Val2_5_reg_190;
    p_Val2_s_fu_44_p1 <= x;
    r_V_1_fu_138_p2 <= std_logic_vector(shift_left(unsigned(zext_ln682_fu_80_p1),to_integer(unsigned('0' & zext_ln1287_fu_124_p1(31-1 downto 0)))));
    r_V_fu_132_p2 <= std_logic_vector(shift_right(unsigned(mantissa_V_fu_70_p4),to_integer(unsigned('0' & zext_ln1285_fu_128_p1(31-1 downto 0)))));
    result_V_1_fu_174_p2 <= std_logic_vector(unsigned(ap_const_lv32_0) - unsigned(p_Val2_5_reg_190));
        sext_ln1311_1_fu_120_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(ush_fu_112_p3),32));

        sext_ln1311_fu_108_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(sub_ln1311_fu_102_p2),12));

    sub_ln1311_fu_102_p2 <= std_logic_vector(unsigned(ap_const_lv11_3FF) - unsigned(tmp_V_fu_56_p4));
    tmp_1_fu_156_p4 <= r_V_1_fu_138_p2(84 downto 53);
    tmp_V_1_fu_66_p1 <= p_Val2_s_fu_44_p1(52 - 1 downto 0);
    tmp_V_fu_56_p4 <= p_Val2_s_fu_44_p1(62 downto 52);
    tmp_fu_144_p3 <= r_V_fu_132_p2(53 downto 53);
    ush_fu_112_p3 <= 
        sext_ln1311_fu_108_p1 when (isNeg_fu_94_p3(0) = '1') else 
        add_ln502_fu_88_p2;
    zext_ln1285_fu_128_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sext_ln1311_1_fu_120_p1),54));
    zext_ln1287_fu_124_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sext_ln1311_1_fu_120_p1),137));
    zext_ln502_fu_84_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_V_fu_56_p4),12));
    zext_ln662_fu_152_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_144_p3),32));
    zext_ln682_fu_80_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(mantissa_V_fu_70_p4),137));
end behav;

-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity decompressf is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    c_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    c_ce0 : OUT STD_LOGIC;
    c_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    c_address1 : OUT STD_LOGIC_VECTOR (9 downto 0);
    c_ce1 : OUT STD_LOGIC;
    c_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    dc_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    dc_ce0 : OUT STD_LOGIC;
    dc_we0 : OUT STD_LOGIC;
    dc_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of decompressf is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "decompressf,hls_ip_2019_1,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.279000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=2,HLS_SYN_DSP=0,HLS_SYN_FF=333,HLS_SYN_LUT=587,HLS_VERSION=2019_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (6 downto 0) := "0000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (6 downto 0) := "0000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (6 downto 0) := "0001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (6 downto 0) := "0010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (6 downto 0) := "0100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (6 downto 0) := "1000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv31_0 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000000";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_271 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000001001110001";
    constant ap_const_lv31_1 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000001";
    constant ap_const_lv10_19 : STD_LOGIC_VECTOR (9 downto 0) := "0000011001";
    constant ap_const_lv5_19 : STD_LOGIC_VECTOR (4 downto 0) := "11001";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv5_18 : STD_LOGIC_VECTOR (4 downto 0) := "11000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal icmp_ln283_fu_221_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal c_load_reg_406 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal c_load_1_reg_411 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_3_fu_265_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_3_reg_416 : STD_LOGIC_VECTOR (31 downto 0);
    signal k_fu_280_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal add_ln291_fu_291_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln286_fu_275_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal h_fu_297_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal add_ln303_2_fu_303_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal add_ln303_2_reg_439 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal add_ln303_3_fu_309_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal add_ln303_3_reg_444 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_fu_321_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_reg_452 : STD_LOGIC_VECTOR (4 downto 0);
    signal icmp_ln303_fu_327_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln303_reg_457 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln298_fu_315_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_fu_343_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal j_reg_465 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal icmp_ln300_fu_337_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln303_1_fu_377_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal add_ln303_1_reg_475 : STD_LOGIC_VECTOR (9 downto 0);
    signal x_fu_383_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal unr1d_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal unr1d_ce0 : STD_LOGIC;
    signal unr1d_we0 : STD_LOGIC;
    signal unr1d_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_0_reg_118 : STD_LOGIC_VECTOR (31 downto 0);
    signal h_0_reg_130 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_1_reg_142 : STD_LOGIC_VECTOR (31 downto 0);
    signal k_0_reg_152 : STD_LOGIC_VECTOR (30 downto 0);
    signal x_0_reg_163 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_0_reg_175 : STD_LOGIC_VECTOR (4 downto 0);
    signal phi_mul_reg_186 : STD_LOGIC_VECTOR (9 downto 0);
    signal phi_mul1_reg_198 : STD_LOGIC_VECTOR (9 downto 0);
    signal j_2_reg_210 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal sext_ln286_fu_233_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sext_ln289_fu_238_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sext_ln289_1_fu_286_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln303_fu_355_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln303_2_fu_389_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal or_ln286_fu_227_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal empty_fu_247_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln289_fu_243_p1 : STD_LOGIC_VECTOR (30 downto 0);
    signal smax_fu_253_p3 : STD_LOGIC_VECTOR (30 downto 0);
    signal smax_cast_fu_261_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln286_fu_271_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln300_fu_333_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal add_ln303_fu_349_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal sub_ln303_fu_360_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal select_ln303_fu_366_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal zext_ln303_1_fu_373_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (6 downto 0);

    component decompressf_unr1d IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    unr1d_U : component decompressf_unr1d
    generic map (
        DataWidth => 32,
        AddressRange => 625,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => unr1d_address0,
        ce0 => unr1d_ce0,
        we0 => unr1d_we0,
        d0 => c_load_1_reg_411,
        q0 => unr1d_q0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    h_0_reg_130_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln286_fu_275_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                h_0_reg_130 <= h_fu_297_p2;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                h_0_reg_130 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    i_0_reg_175_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln283_fu_221_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_0_reg_175 <= ap_const_lv5_0;
            elsif (((icmp_ln300_fu_337_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                i_0_reg_175 <= i_reg_452;
            end if; 
        end if;
    end process;

    j_0_reg_118_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln286_fu_275_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                j_0_reg_118 <= j_3_reg_416;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                j_0_reg_118 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    j_1_reg_142_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln286_fu_275_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                j_1_reg_142 <= add_ln291_fu_291_p2;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                j_1_reg_142 <= j_0_reg_118;
            end if; 
        end if;
    end process;

    j_2_reg_210_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                j_2_reg_210 <= j_reg_465;
            elsif (((icmp_ln298_fu_315_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                j_2_reg_210 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    k_0_reg_152_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln286_fu_275_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                k_0_reg_152 <= k_fu_280_p2;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                k_0_reg_152 <= ap_const_lv31_0;
            end if; 
        end if;
    end process;

    phi_mul1_reg_198_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln283_fu_221_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                phi_mul1_reg_198 <= ap_const_lv10_0;
            elsif (((icmp_ln300_fu_337_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                phi_mul1_reg_198 <= add_ln303_2_reg_439;
            end if; 
        end if;
    end process;

    phi_mul_reg_186_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln283_fu_221_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                phi_mul_reg_186 <= ap_const_lv10_0;
            elsif (((icmp_ln300_fu_337_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                phi_mul_reg_186 <= add_ln303_3_reg_444;
            end if; 
        end if;
    end process;

    x_0_reg_163_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln283_fu_221_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                x_0_reg_163 <= ap_const_lv32_0;
            elsif (((icmp_ln300_fu_337_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                x_0_reg_163 <= x_fu_383_p2;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln300_fu_337_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                add_ln303_1_reg_475 <= add_ln303_1_fu_377_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                add_ln303_2_reg_439 <= add_ln303_2_fu_303_p2;
                add_ln303_3_reg_444 <= add_ln303_3_fu_309_p2;
                i_reg_452 <= i_fu_321_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                c_load_1_reg_411 <= c_q1;
                c_load_reg_406 <= c_q0;
                j_3_reg_416 <= j_3_fu_265_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln298_fu_315_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                icmp_ln303_reg_457 <= icmp_ln303_fu_327_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                j_reg_465 <= j_fu_343_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln283_fu_221_p2, ap_CS_fsm_state4, icmp_ln286_fu_275_p2, ap_CS_fsm_state5, icmp_ln298_fu_315_p2, ap_CS_fsm_state6, icmp_ln300_fu_337_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln283_fu_221_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                if (((icmp_ln286_fu_275_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state5 => 
                if (((icmp_ln298_fu_315_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                if (((icmp_ln300_fu_337_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when others =>  
                ap_NS_fsm <= "XXXXXXX";
        end case;
    end process;
    add_ln291_fu_291_p2 <= std_logic_vector(signed(j_1_reg_142) + signed(ap_const_lv32_1));
    add_ln303_1_fu_377_p2 <= std_logic_vector(unsigned(phi_mul1_reg_198) + unsigned(zext_ln303_1_fu_373_p1));
    add_ln303_2_fu_303_p2 <= std_logic_vector(unsigned(phi_mul1_reg_198) + unsigned(ap_const_lv10_19));
    add_ln303_3_fu_309_p2 <= std_logic_vector(unsigned(phi_mul_reg_186) + unsigned(ap_const_lv10_19));
    add_ln303_fu_349_p2 <= std_logic_vector(unsigned(zext_ln300_fu_333_p1) + unsigned(phi_mul_reg_186));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);

    ap_done_assign_proc : process(ap_CS_fsm_state5, icmp_ln298_fu_315_p2)
    begin
        if (((icmp_ln298_fu_315_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state5, icmp_ln298_fu_315_p2)
    begin
        if (((icmp_ln298_fu_315_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    c_address0 <= sext_ln286_fu_233_p1(10 - 1 downto 0);
    c_address1 <= sext_ln289_fu_238_p1(10 - 1 downto 0);

    c_ce0_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            c_ce0 <= ap_const_logic_1;
        else 
            c_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    c_ce1_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            c_ce1 <= ap_const_logic_1;
        else 
            c_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    dc_address0 <= zext_ln303_2_fu_389_p1(10 - 1 downto 0);

    dc_ce0_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            dc_ce0 <= ap_const_logic_1;
        else 
            dc_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    dc_d0 <= unr1d_q0;

    dc_we0_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            dc_we0 <= ap_const_logic_1;
        else 
            dc_we0 <= ap_const_logic_0;
        end if; 
    end process;

    empty_fu_247_p2 <= "1" when (signed(c_q0) > signed(ap_const_lv32_0)) else "0";
    h_fu_297_p2 <= std_logic_vector(signed(h_0_reg_130) + signed(ap_const_lv32_2));
    i_fu_321_p2 <= std_logic_vector(unsigned(i_0_reg_175) + unsigned(ap_const_lv5_1));
    icmp_ln283_fu_221_p2 <= "1" when (signed(j_0_reg_118) < signed(ap_const_lv32_271)) else "0";
    icmp_ln286_fu_275_p2 <= "1" when (signed(zext_ln286_fu_271_p1) < signed(c_load_reg_406)) else "0";
    icmp_ln298_fu_315_p2 <= "1" when (i_0_reg_175 = ap_const_lv5_19) else "0";
    icmp_ln300_fu_337_p2 <= "1" when (j_2_reg_210 = ap_const_lv5_19) else "0";
    icmp_ln303_fu_327_p2 <= "1" when (x_0_reg_163 = ap_const_lv32_0) else "0";
    j_3_fu_265_p2 <= std_logic_vector(unsigned(smax_cast_fu_261_p1) + unsigned(j_0_reg_118));
    j_fu_343_p2 <= std_logic_vector(unsigned(j_2_reg_210) + unsigned(ap_const_lv5_1));
    k_fu_280_p2 <= std_logic_vector(unsigned(k_0_reg_152) + unsigned(ap_const_lv31_1));
    or_ln286_fu_227_p2 <= (h_0_reg_130 or ap_const_lv32_1);
    select_ln303_fu_366_p3 <= 
        j_2_reg_210 when (icmp_ln303_reg_457(0) = '1') else 
        sub_ln303_fu_360_p2;
        sext_ln286_fu_233_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(or_ln286_fu_227_p2),64));

        sext_ln289_1_fu_286_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(j_1_reg_142),64));

        sext_ln289_fu_238_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(h_0_reg_130),64));

    smax_cast_fu_261_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(smax_fu_253_p3),32));
    smax_fu_253_p3 <= 
        trunc_ln289_fu_243_p1 when (empty_fu_247_p2(0) = '1') else 
        ap_const_lv31_0;
    sub_ln303_fu_360_p2 <= std_logic_vector(signed(ap_const_lv5_18) - signed(j_2_reg_210));
    trunc_ln289_fu_243_p1 <= c_q0(31 - 1 downto 0);

    unr1d_address0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state6, sext_ln289_1_fu_286_p1, zext_ln303_fu_355_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            unr1d_address0 <= zext_ln303_fu_355_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            unr1d_address0 <= sext_ln289_1_fu_286_p1(10 - 1 downto 0);
        else 
            unr1d_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    unr1d_ce0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            unr1d_ce0 <= ap_const_logic_1;
        else 
            unr1d_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    unr1d_we0_assign_proc : process(ap_CS_fsm_state4, icmp_ln286_fu_275_p2)
    begin
        if (((icmp_ln286_fu_275_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            unr1d_we0 <= ap_const_logic_1;
        else 
            unr1d_we0 <= ap_const_logic_0;
        end if; 
    end process;

    x_fu_383_p2 <= (x_0_reg_163 xor ap_const_lv32_1);
    zext_ln286_fu_271_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_0_reg_152),32));
    zext_ln300_fu_333_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_2_reg_210),10));
    zext_ln303_1_fu_373_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln303_fu_366_p3),10));
    zext_ln303_2_fu_389_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln303_1_reg_475),64));
    zext_ln303_fu_355_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln303_fu_349_p2),64));
end behav;

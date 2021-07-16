set moduleName scalef
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {scalef}
set C_modelType { void 0 }
set C_modelArgList {
	{ as int 32 regular {array 10000 { 1 1 } 1 1 }  }
	{ bs int 32 regular {array 10000 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "as", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "as","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 99,"step" : 1},{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "bs", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "bs","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 99,"step" : 1},{"low" : 0,"up" : 99,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ as_address0 sc_out sc_lv 14 signal 0 } 
	{ as_ce0 sc_out sc_logic 1 signal 0 } 
	{ as_q0 sc_in sc_lv 32 signal 0 } 
	{ as_address1 sc_out sc_lv 14 signal 0 } 
	{ as_ce1 sc_out sc_logic 1 signal 0 } 
	{ as_q1 sc_in sc_lv 32 signal 0 } 
	{ bs_address0 sc_out sc_lv 14 signal 1 } 
	{ bs_ce0 sc_out sc_logic 1 signal 1 } 
	{ bs_we0 sc_out sc_logic 1 signal 1 } 
	{ bs_d0 sc_out sc_lv 32 signal 1 } 
	{ bs_address1 sc_out sc_lv 14 signal 1 } 
	{ bs_ce1 sc_out sc_logic 1 signal 1 } 
	{ bs_we1 sc_out sc_logic 1 signal 1 } 
	{ bs_d1 sc_out sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "as_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "as", "role": "address0" }} , 
 	{ "name": "as_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "as", "role": "ce0" }} , 
 	{ "name": "as_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "as", "role": "q0" }} , 
 	{ "name": "as_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "as", "role": "address1" }} , 
 	{ "name": "as_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "as", "role": "ce1" }} , 
 	{ "name": "as_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "as", "role": "q1" }} , 
 	{ "name": "bs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "bs", "role": "address0" }} , 
 	{ "name": "bs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bs", "role": "ce0" }} , 
 	{ "name": "bs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bs", "role": "we0" }} , 
 	{ "name": "bs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bs", "role": "d0" }} , 
 	{ "name": "bs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "bs", "role": "address1" }} , 
 	{ "name": "bs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bs", "role": "ce1" }} , 
 	{ "name": "bs_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bs", "role": "we1" }} , 
 	{ "name": "bs_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bs", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6"],
		"CDFG" : "scalef",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16501", "EstimateLatencyMax" : "16501",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state26", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state28", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state30", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state32", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state34", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state37", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state38", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state39", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state43", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state44", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state45", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state47", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state48", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state49", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state50", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state51", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state52", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state53", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state54", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state55", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state56", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state57", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state58", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state59", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state60", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state61", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state62", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state63", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state64", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state65", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state66", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1873"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state26", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state28", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state30", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state32", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state34", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state37", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state38", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state39", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state43", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state44", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state45", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state47", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state48", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state49", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state50", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state51", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state52", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state53", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state54", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state55", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state56", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state57", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state58", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state59", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state60", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state61", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state62", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state63", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state64", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state65", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"},
			{"State" : "ap_ST_fsm_state66", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_hls_fptosi_double_s_fu_1879"}],
		"Port" : [
			{"Name" : "as", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bs", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_p_hls_fptosi_double_s_fu_1873", "Parent" : "0",
		"CDFG" : "p_hls_fptosi_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_p_hls_fptosi_double_s_fu_1879", "Parent" : "0",
		"CDFG" : "p_hls_fptosi_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.scalef_dmul_64ns_bkb_U2", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.scalef_dmul_64ns_bkb_U3", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.scalef_sitodp_32ncud_U4", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.scalef_sitodp_32ncud_U5", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	scalef {
		as {Type I LastRead 51 FirstWrite -1}
		bs {Type O LastRead -1 FirstWrite 16}}
	p_hls_fptosi_double_s {
		x {Type I LastRead 0 FirstWrite -1}}
	p_hls_fptosi_double_s {
		x {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "16501", "Max" : "16501"}
	, {"Name" : "Interval", "Min" : "16502", "Max" : "16502"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	as { ap_memory {  { as_address0 mem_address 1 14 }  { as_ce0 mem_ce 1 1 }  { as_q0 mem_dout 0 32 }  { as_address1 MemPortADDR2 1 14 }  { as_ce1 MemPortCE2 1 1 }  { as_q1 MemPortDOUT2 0 32 } } }
	bs { ap_memory {  { bs_address0 mem_address 1 14 }  { bs_ce0 mem_ce 1 1 }  { bs_we0 mem_we 1 1 }  { bs_d0 mem_din 1 32 }  { bs_address1 MemPortADDR2 1 14 }  { bs_ce1 MemPortCE2 1 1 }  { bs_we1 MemPortWE2 1 1 }  { bs_d1 MemPortDIN2 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}

set moduleName compressf
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
set C_modelName {compressf}
set C_modelType { void 0 }
set C_modelArgList {
	{ as int 32 regular {array 625 { 1 1 } 1 1 }  }
	{ bs int 32 regular {array 625 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "as", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "as","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 24,"step" : 1},{"low" : 0,"up" : 24,"step" : 1}]}]}]} , 
 	{ "Name" : "bs", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "bs","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 624,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ as_address0 sc_out sc_lv 10 signal 0 } 
	{ as_ce0 sc_out sc_logic 1 signal 0 } 
	{ as_q0 sc_in sc_lv 32 signal 0 } 
	{ as_address1 sc_out sc_lv 10 signal 0 } 
	{ as_ce1 sc_out sc_logic 1 signal 0 } 
	{ as_q1 sc_in sc_lv 32 signal 0 } 
	{ bs_address0 sc_out sc_lv 10 signal 1 } 
	{ bs_ce0 sc_out sc_logic 1 signal 1 } 
	{ bs_we0 sc_out sc_logic 1 signal 1 } 
	{ bs_d0 sc_out sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "as_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "as", "role": "address0" }} , 
 	{ "name": "as_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "as", "role": "ce0" }} , 
 	{ "name": "as_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "as", "role": "q0" }} , 
 	{ "name": "as_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "as", "role": "address1" }} , 
 	{ "name": "as_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "as", "role": "ce1" }} , 
 	{ "name": "as_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "as", "role": "q1" }} , 
 	{ "name": "bs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "bs", "role": "address0" }} , 
 	{ "name": "bs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bs", "role": "ce0" }} , 
 	{ "name": "bs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bs", "role": "we0" }} , 
 	{ "name": "bs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bs", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "compressf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2506", "EstimateLatencyMax" : "2506",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "as", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bs", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.odoarr_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.compressf_mac_mulbkb_U1", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	compressf {
		as {Type I LastRead 3 FirstWrite -1}
		bs {Type O LastRead -1 FirstWrite 5}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2506", "Max" : "2506"}
	, {"Name" : "Interval", "Min" : "2507", "Max" : "2507"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	as { ap_memory {  { as_address0 mem_address 1 10 }  { as_ce0 mem_ce 1 1 }  { as_q0 mem_dout 0 32 }  { as_address1 MemPortADDR2 1 10 }  { as_ce1 MemPortCE2 1 1 }  { as_q1 MemPortDOUT2 0 32 } } }
	bs { ap_memory {  { bs_address0 mem_address 1 10 }  { bs_ce0 mem_ce 1 1 }  { bs_we0 mem_we 1 1 }  { bs_d0 mem_din 1 32 } } }
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

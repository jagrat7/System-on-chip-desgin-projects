set moduleName invertf
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
set C_modelName {invertf}
set C_modelType { void 0 }
set C_modelArgList {
	{ ai int 32 regular {array 10000 { 1 1 } 1 1 }  }
	{ bi int 32 regular {array 10000 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ai", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ai","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 99,"step" : 1},{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "bi", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "bi","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 99,"step" : 1},{"low" : 0,"up" : 99,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ai_address0 sc_out sc_lv 14 signal 0 } 
	{ ai_ce0 sc_out sc_logic 1 signal 0 } 
	{ ai_q0 sc_in sc_lv 32 signal 0 } 
	{ ai_address1 sc_out sc_lv 14 signal 0 } 
	{ ai_ce1 sc_out sc_logic 1 signal 0 } 
	{ ai_q1 sc_in sc_lv 32 signal 0 } 
	{ bi_address0 sc_out sc_lv 14 signal 1 } 
	{ bi_ce0 sc_out sc_logic 1 signal 1 } 
	{ bi_we0 sc_out sc_logic 1 signal 1 } 
	{ bi_d0 sc_out sc_lv 32 signal 1 } 
	{ bi_address1 sc_out sc_lv 14 signal 1 } 
	{ bi_ce1 sc_out sc_logic 1 signal 1 } 
	{ bi_we1 sc_out sc_logic 1 signal 1 } 
	{ bi_d1 sc_out sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ai_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "ai", "role": "address0" }} , 
 	{ "name": "ai_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ai", "role": "ce0" }} , 
 	{ "name": "ai_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ai", "role": "q0" }} , 
 	{ "name": "ai_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "ai", "role": "address1" }} , 
 	{ "name": "ai_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ai", "role": "ce1" }} , 
 	{ "name": "ai_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ai", "role": "q1" }} , 
 	{ "name": "bi_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "bi", "role": "address0" }} , 
 	{ "name": "bi_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bi", "role": "ce0" }} , 
 	{ "name": "bi_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bi", "role": "we0" }} , 
 	{ "name": "bi_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bi", "role": "d0" }} , 
 	{ "name": "bi_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "bi", "role": "address1" }} , 
 	{ "name": "bi_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bi", "role": "ce1" }} , 
 	{ "name": "bi_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bi", "role": "we1" }} , 
 	{ "name": "bi_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bi", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "invertf",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5201", "EstimateLatencyMax" : "5201",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ai", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bi", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	invertf {
		ai {Type I LastRead 51 FirstWrite -1}
		bi {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "5201", "Max" : "5201"}
	, {"Name" : "Interval", "Min" : "5202", "Max" : "5202"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	ai { ap_memory {  { ai_address0 mem_address 1 14 }  { ai_ce0 mem_ce 1 1 }  { ai_q0 mem_dout 0 32 }  { ai_address1 MemPortADDR2 1 14 }  { ai_ce1 MemPortCE2 1 1 }  { ai_q1 MemPortDOUT2 0 32 } } }
	bi { ap_memory {  { bi_address0 mem_address 1 14 }  { bi_ce0 mem_ce 1 1 }  { bi_we0 mem_we 1 1 }  { bi_d0 mem_din 1 32 }  { bi_address1 MemPortADDR2 1 14 }  { bi_ce1 MemPortCE2 1 1 }  { bi_we1 MemPortWE2 1 1 }  { bi_d1 MemPortDIN2 1 32 } } }
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

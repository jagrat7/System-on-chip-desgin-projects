############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project imageprosseing
set_top decompressf
add_files imageprosseing/imgpro.h
add_files imageprosseing/imgpro.c
add_files -tb imageprosseing/testyy.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb tb.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "scalefactorlatency"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
source "./imageprosseing/scalefactorlatency/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog

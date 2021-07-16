#include <stdio.h>
#include<stdlib.h>
#include<math.h>

// Uncomment this line to compare TB vs HW C-model and/or RTL
//#define HW_COSIM

#define ROWS 100
#define COLS 100
#define ROWS2 25
#define COLS2 25
#define ca 393
int orignal25[ROWS2][COLS2];
int orignal[ROWS][COLS];
int binary[ROWS][COLS];
int blur[ROWS][COLS];
int invert[ROWS][COLS];
int scale[ROWS][COLS];
int compressed[ROWS2*COLS2];
int decompressed[ROWS2][COLS2];
//typedef short result_t;

// Prototype of top level function for C-synthesis



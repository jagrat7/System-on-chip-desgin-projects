#include <cmath>
using namespace std;

// Uncomment this line to compare TB vs HW C-model and/or RTL
#define HW_COSIM

#define ROWS 100
#define COLS 100


typedef int orignal;
typedef int binary;
//typedef short result_t;

// Prototype of top level function for C-synthesis
void binaryf(
		orignal a[ROWS][COLS],
		binary b[ROWS][COLS]
      );

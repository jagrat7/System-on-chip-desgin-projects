#include <stdio.h>
#include "platform.h"
#include "xil_printf.h" // interger to pointer without cast PROBLEM....
#include<stdlib.h> // SOLUTION :  whenever using string the data type
#include <stdbool.h>                  // of the array must be char
#include "xparameters.h"
#include "xgpio.h"
#include "math.h"


#define MAXSIDE 5
#define dmines 10
#define cols 4 // (25 * 25 - 99)
XGpio in1;
XGpio in2;

int sw_data=0;
int btn_data=0;
int SIDE ; // side length of the board
int MINES ; // number of mines on the board
int fl=0;
/
// Driver Program to test above functions
int main()
{

	char realbr[5][4];
	char userbr[5][4];




	gpioinitialise();
	 while(1)
	 {


		  sw_data = XGpio_DiscreteRead(&in2, 1);
		  btn_data = XGpio_DiscreteRead(&in1,1 );




		  if(fl)
		  {
			  break;
		  }

	 }



	return (0);
}



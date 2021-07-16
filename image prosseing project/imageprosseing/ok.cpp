#include "stuff.h"

void binaryf(orignal a[ROWS][COLS],binary b[ROWS][COLS]);
{
	Row:for(int i=0;i<99;i++)
		{
			Col:for(int j=0;j<99;j++)
			{
				if(a[i][j]>130)
				{
					b[i][j]=1;
				}
				else
				{
					b[i][j]=0;
				}
			}
		}
}

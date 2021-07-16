//#include "imgpro.h"

#include "imgpro.h"



// Prototype of top level function for C-synthesis

void binaryf(int a[ROWS][COLS],int b[ROWS][COLS]);
void blurf(int a1[ROWS][COLS],int b1[ROWS][COLS]);
void invertf(int a[ROWS][COLS],int b[ROWS][COLS]);
void scalef(int a[ROWS][COLS],int b[ROWS][COLS]);
void decompressf(int da[ROWS2*COLS2],int db[ROWS2][COLS2]);

void scalef(int as[ROWS][COLS],int bs[ROWS][COLS])
{
	int i,j;

			row:for(i=0;i<100;i++)
			{
				col:for(j=0;j<100;j++)
				{
						bs[i][j]=as[i][j]*0.5;

				}
			}
//printf("scaled image generated \n");
//			for( i=0;i<100;i++)
//			{
//				for( j=0;j<100;j++)
//				{
//						printf(" %d",bs[i][j]);
//				}
//
//				printf("; \n");
//			}
//			printf("\n");
}

void binaryf(int a[ROWS][COLS],int b[ROWS][COLS])
{
	int i,j;
	Row:for( i=0;i<100;i++)
		{
			Col:for( j=0;j<100;j++)
			{
				if(a[i][j]>150)
				{
					b[i][j]=1;
				}
				else
				{
					b[i][j]=0;
				}
			}
		}
//  printf("binary image generated \n");
//	for( i=0;i<100;i++)
//	{
//		for( j=0;j<100;j++)
//		{
//				printf(" %d",b[i][j]);
//
//		}
//		printf("; \n");
//
//	}
//	printf("\n");
}

void blurf(int a1[ROWS][COLS],int b1[ROWS][COLS])
{
	int i,j;
	int bottom=0,top=0,right=0,left=0,ne=0,nw=0,se=0,sw=0;
			rows:for(i=0;i<100;i++)
			{
				colll:for(j=0;j<100;j++)
				{
					 if(i==0 && j==0)
					{
						left=0;
						sw=0;
						top=0;
						ne=0;
						nw=0;
						bottom=a1[i+1][j];
						se=a1[i+1][j+1];
						right=a1[i][j+1];
						b1[i][j]=(a1[i][j]+bottom+top+right+left+ne+se+sw+nw)/4;
					}
					else if(i==99 && j==99)
					{
						left=a1[i][j-1];
						sw=0;
						top=a1[i-1][j];
						ne=0;
						nw=a1[i-1][j-1];
						bottom=0;
						se=0;
						right=0;
						b1[i][j]=(a1[i][j]+bottom+top+right+left+ne+se+sw+nw)/4;
					}
					else if(i==0 && j==99)
					{
						left=a1[i][j-1];
						sw=a1[i+1][j-1];;
						top=0;
						ne=0;
						nw=0;
						bottom=a1[i+1][j];
						se=0;
						right=0;
						b1[i][j]=(a1[i][j]+bottom+top+right+left+ne+se+sw+nw)/4;

					}
					else if(i==99 && j==0)
					{
						left=0;
						sw=0;
						top=a1[i-1][j];
						ne=a1[i-1][j+1];
						nw=0;
						bottom=0;
						se=0;
						right=a1[i][j+1];
						b1[i][j]=(a1[i][j]+bottom+top+right+left+ne+se+sw+nw)/4;
					}
					else if(j==99)
					{
						left=a1[i][j-1];
						sw=a1[i+1][j-1];
						top=a1[i-1][j];
						ne=0;
						nw=a1[i-1][j-1];
						bottom=a1[i+1][j];
						se=0;
						right=0;
						b1[i][j]=(a1[i][j]+bottom+top+right+left+ne+se+sw+nw)/6;
					}
					else if(j==0)
					{
						left=0;
						sw=0;
						top=a1[i-1][j];
						ne=a1[i-1][j+1];
						nw=0;
						bottom=a1[i+1][j];
						se=a1[i+1][j+1];
						right=a1[i][j+1];
						b1[i][j]=(a1[i][j]+bottom+top+right+left+ne+se+sw+nw)/6;
					}
					else if(i==0)
					{
						left=a1[i][j-1];
						sw=a1[i+1][j-1];
						top=0;
						ne=0;
						nw=0;
						bottom=a1[i+1][j];
						se=a1[i+1][j+1];
						right=a1[i][j+1];
						b1[i][j]=(a1[i][j]+bottom+top+right+left+ne+se+sw+nw)/6;
					}
					else if(i==99)
					{
						left=a1[i][j-1];
						sw=0;
						top=a1[i-1][j];
						ne=a1[i-1][j+1];
						nw=a1[i-1][j-1];
						bottom=0;
						se=0;
						right=a1[i][j+1];
						b1[i][j]=(a1[i][j]+bottom+top+right+left+ne+se+sw+nw)/6;
					}
					else
					{
						right=a1[i][j+1];
						left=a1[i][j-1];
						top=a1[i-1][j];
						ne=a1[i-1][j+1];
						nw=a1[i-1][j-1];
						bottom=a1[i+1][j];
						se=a1[i+1][j+1];
						sw=a1[i+1][j-1];
						b1[i][j]=(a1[i][j]+bottom+top+right+left+ne+se+sw+nw)/9;
					}
				}
			}
//			printf("averaged/blurred image generated \n");
//			for( i=0;i<100;i++)
//			{
//				for( j=0;j<100;j++)
//				{
//						printf(" %d",b1[i][j]);
//
//				}
//
//				printf("; \n");
//			}
//			printf("\n");

}

void compressf(int as[ROWS2][COLS2],int bs[ROWS2*COLS2])
{
 	int i,j,h,count=1,ovr=0,flg1=0;
 	int odoarr[ROWS2*COLS2];
 	int k=0;
 	int x=0;
 	row1:for(i=0;i<25;i++)
	{

		col1:for(j=0;j<25;j++)
		{

			//flatened 2d array with the reverse s style copying
				odoarr[k]=as[i][j];
				k++;
				odoarr[i*(25) + j] = as[i][x ? ((24) - j) : j];


		}
		   x = !x;
	}

 	int cp=0;
		row:for(i=0;i<ROWS2*COLS2;i++)
		{


				if(odoarr[i+1]==odoarr[i])
				{
					count++;

				}
				else if(odoarr[i-1]==odoarr[i] && odoarr[i+1]!=odoarr[i] )
				{
					//count++;
					bs[cp]=odoarr[i];
					bs[cp+1]=count;
					cp=cp+2;
				}
				else
				{

					count=1;
					bs[cp]=odoarr[i];
					bs[cp+1]=count;

					cp=cp+2;
				}



		}
//printf("flatened 2d array with copying as asked by the manual \n");
//		for( i=0;i<(ROWS2*COLS2);i++)
//		{
//
//					printf(" %d",odoarr[i]);
//
//			//printf("; \n");
//		}
//		printf(" 1d array with value and its repetitions \n");
//		for( i=0;i<(ROWS2*COLS2);i++)
//		{
//
//					printf(" %d",bs[i]);
//
//			//printf("; \n");
//		}
//		printf("\n");
}
void decompressf(int c[ROWS2*COLS2],int dc[ROWS2][COLS2])
{
 	int i,x,f,j,count=1,ovr=0,flg1=0;

 	int k=0;
 	int h=0;

 	int unr1d[ROWS2*COLS2];
	col1:for(j=0;j<ROWS2*COLS2;)
	{
		//j=0;
		j:for(k=0;k<c[h+1];k++)
		{

			unr1d[j]=c[h];

			j++;
		}
		h=h+2;
	}

	 f=0;
	 x=0;
	row:for(i=0;i<25;i++)
	{
		col:for(j=0;j<25;j++)
		{

			dc[i][x ? ((24) - j) : j]=unr1d[i*(25) + j];
		}
		x = !x;
	}
//   printf("decompressed 25x25 image \n");
// 	for( i=0;i<25;i++)
//	{
//		for( j=0;j<25;j++)
//		{
//				printf(" %d",dc[i][j]);
//
//		}
//
//		printf("; \n");
//	}
// 	printf("\n");
}
void invertf(int ai[ROWS][COLS],int bi[ROWS][COLS])
{
	int i,j;

		row:for(i=0;i<100;i++)
		{
			col:for(j=0;j<100;j++)
			{
					bi[i][j]=255-ai[i][j];

			}
		}
//		printf("iverted image generated  \n");
//		for( i=0;i<100;i++)
//		{
//			for( j=0;j<100;j++)
//			{
//					printf(" %d",bi[i][j]);
//
//			}
//
//			printf("; \n");
//		}
//printf("\n");
}

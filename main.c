#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

int main(int argc, char *argv[])
{
    int A[ROWS][COLS]={
        {2,3,0},
        {8,9,1},
        {7,8,1}};
    int B[ROWS][COLS]={
        {8,2,0},
        {2,1,1},
        {5,4,5}};
    int C[ROWS][COLS];
    
    addMatrix(A,B,C);
    printMatrix(C);
        
  system("PAUSE");	
  return 0;
}

void addMatrix(int A[][COLS],int B[][COLS],int C[][COLS])
{
     int i,j;
     for(i=0;i<ROWS;i++)
         for (j=0;j<COLS;j++)
             c[i][j]=A[i][j]+B[i][j];
             }
             
void printMatrix(int A[][COLS])
{
     int i,j;
     for (i=0;i<ROWS;i++)
     {  
           for (j=0;j<COLS;j++)
             printf("%3d",A[i][j]);
           printf("\n");
             }


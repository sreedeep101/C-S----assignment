
//program to add two matrix

#include<stdio.h>

#define M 2
#define N 3

void main() {
   int a[M][N]={1,0,3,1,2,6};
   int b[M][N]={3,2,5,6,7,1};
   int c[M][N];
   int i,j;
   
   //Code to add this two matrix
   
   for(i=0;i<M;i++){
       for(j=0;j<N;j++){
           c[i][j]=a[i][j]+b[i][j];
       }
   }
   
   //code to print the resultant matrix
   
   printf("the resultant matrix is:\n");
   for(i=0;i<M;i++){
   printf("[ ");
       for(j=0;j<N;j++){
           printf("%d ",c[i][j]);
       }
   printf("]\n");    
   }
}

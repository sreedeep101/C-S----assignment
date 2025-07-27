//program to multiply two matrix

#include<stdio.h>

#define M 2
#define N 3

void main() {
   int a[M][N]={1,0,3,1,2,6};
   int b[N][M]={3,2,5,6,7,1};
   int c[M][M];
   int i,j,k;
   
   //Code to multiply this two matrix
   
   for(i=0;i<M;i++){
       for(j=0;j<M;j++){
           c[i][j] = 0;
           for(k=0;k<N;k++){
              c[i][j] += a[i][k]*b[k][j];
           }
       }
   }
   
   //code to print the resultant matrix
   
   printf("the resultant matrix is:\n");
   for(i=0;i<M;i++){
   printf("[ ");
       for(j=0;j<M;j++){
           printf("%d ",c[i][j]);
       }
   printf("]\n");    
   }
}

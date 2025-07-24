//program to create a matrix with m×n size with integers , and read elements to the matrix after print it with it memory location

#include<stdio.h>

#define M 3
#define N 3

void main() {
    int matrix[M][N]; // matrix has been declared
    int i,j;
    //code to read elements to the mattix
    printf("enter elements into the matrix A\n");
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            printf("enter element a[%d,%d] :",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");

    //code to print elements in the matrix
    for(i=0; i<M; i++) {
        printf("[ ");
        for(j=0; j<N; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("]\n");
    }
    printf("\n");
    //code to print memory address of each element
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            printf("%d is stored in %p \n",matrix[i][j],&matrix[i][j]);
        }
    }

}

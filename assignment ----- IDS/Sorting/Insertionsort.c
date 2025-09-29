#include <stdio.h>

void insertionsort(int *A,int size){
    int i,j,key;
    for(i=1;i<size;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
}

int main() {
    int n,i;
    int array[]={22,23,6,7,77,88,9,6,5,11,10,12,1};
    n=sizeof(array)/sizeof(array[0]);
    insertionsort(array,n);
    
    printf("The sorted array is : \n");
    for(i=0;i<n;i++){
        printf(" %d ",array[i]);
    }
    return 0;
}

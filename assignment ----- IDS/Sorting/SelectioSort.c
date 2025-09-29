#include <stdio.h>

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int n, i, j;
    int array[]={22,6,7,77,88,9,6,5,11,10,12,1};
    n=sizeof(array)/sizeof(array[0]);
    int min_index;
    for(i=0;i<n;i++){    
       min_index=i;
       for(j=i+1;j<n;j++){
           if(array[j]<array[min_index]){
               min_index=j;
           }
       }
       if(array[i]!=array[min_index]){
           swap(&array[min_index],&array[i]);
       }    
    }
    
    printf("The sorted array is : \n");
    for(i=0;i<n;i++){
        printf(" %d ",array[i]);
    }
    return 0;
}

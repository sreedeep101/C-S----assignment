#include<stdio.h>

void swap(int* a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}

int main(){
    int array[]={23,4,34,2,3,4,1,10,67,57,7};
    int n=sizeof(array)/sizeof(array[0]);
    int swapped,i;
    do{
       swapped=0;
       for(i=1;i<n;i++){
           if(array[i-1]>array[i]){
               swap(&array[i-1],&array[i]);
               swapped=1;
           }
       }
    }while(swapped);
    
    printf("The sorted array");
    for(i=0;i<n;i++){
        printf(" %d ",array[i]);
    }
}

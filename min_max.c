//find the minimum and max from the list of n elements

#include<stdio.h>

#define N 10

int main(){
    int array[N];
    int lowest,i,maximum;
    printf("enter elements in to the array\n");
    for(i=0;i< N;i++){
        scanf("%d",&array[i]);
    }
    lowest=array[0];
    maximum=array[0];
    for(i=1;i< N;i++){
        if(array[i]<lowest){
            lowest=array[i];
        }
        if(array[i]>maximum){
            maximum=array[i];
        }

    }
    printf("the lowest element is %d",lowest);
    printf("\nthe maximum element is %d",maximum);
    return 0;
}
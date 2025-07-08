// program to find average of n numbeea in an array

#include<stdio.h>

#define Size 10
int main(){
    int ary[Size],i;
    float avg,sum=0;
    printf("enter elements into the array\n");
    for(i=0;i<Size;i++){
        scanf("%d",&ary[i]);
    }
    
    for(i=0;i<Size;i++){
        sum += ary[i] ;   
    }
    avg=sum/Size;
    printf("average of the  : %.2f",avg);
    return 0;
}

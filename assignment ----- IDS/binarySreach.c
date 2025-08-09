//program for bynarySreach
#include<stdio.h>

#define Size 6
 
int main(){
    int ary[Size]={12,23,34,56,67,65};
    int beg=0,end=Size,mid,num,loc;
    printf("enter a number for Binary Search\n");
    scanf("%d",&num);
    mid=(beg+end)/2;
    while(beg<=end && ary[mid] != num){
        if(num < ary[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(beg>end){
        loc=-1;
    }
    else{
        loc=mid;
    }
    if(loc==mid){
        printf("%d in the array\n",num);
    }
    else{
        printf("%d is Not in the array\n",num);
    }
}

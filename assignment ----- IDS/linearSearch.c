//program for linearSearch
#include<stdio.h>

#define Size 6
 
int main(){
    int ary[Size]={12,23,34,56,67,65};
    int i,num,check=0;
    printf("enter number for linear search\n");
    scanf("%d",&num);
    for(i=0;i<Size;i++){
       if(ary[i] == num){
           check=1;
           break;
       }
    }
    if(check){
        printf("%d is in the array",num);
    }
    else{
        printf("%d Not Found\n",num);
    }
}

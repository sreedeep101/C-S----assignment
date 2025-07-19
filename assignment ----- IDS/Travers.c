// program to travers through each element in an array

#include<stdio.h>

#define Max 10
int main(){
    int ary[Max];
    int i;
    printf("enter elements into the array :\n");
    for(i=0;i<Max;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&ary[i]);
    }
    
    //code for travers trough "n" number of elements and print it
    printf("Elements are :[");
    for(i=0;i<Max;i++){
        printf(" %d ",ary[i]);
        if(i==(Max-1)){
           printf(" ");
        }
        else{
           printf(",");
        }
           
    }    
    printf("];");
    return 0;
}

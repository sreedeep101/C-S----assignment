//simple program for merging two different arrays
#include<stdio.h>

int main(){
    int s1=3,s2=4;
    int arayOne[s1+s2],arayTwo[s2];
    int i,pos;
    printf("Enter elements into the first array :\n");
    for(i=0;i<s1;i++){
        scanf("%d",&arayOne[i]);
    }
    printf("Enter elements into the second array :\n");
    for(i=0;i<s2;i++){
        scanf("%d",&arayTwo[i]);
    }
    
    //code for merging this two array
    for(i=0;i<s1;i++){
        pos=i+1;
    }
    for(i=pos;i<(s1+s2);i++){
        arayOne[i]=arayTwo[i-pos];
    }
    
    printf("The merged array is :\n");
    for(i=0;i<(s1+s2);i++){
        printf("[%d] ",arayOne[i]);
    }
    return 0;
}
    

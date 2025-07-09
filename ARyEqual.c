//code for checking two arrays are equal or not .

#include<stdio.h>

int main(){
   int aryOne[4]={1,4,3,5};
   int aryTwo[4]={1,4,5,3};
   int i,check;
   check=1;
   for(i=0;i<4;i++){
       if(aryOne[i] != aryTwo[i]){
           check=0;
       }
   }
   if(check){
       printf("arrays are \"EQUAL\"\n");
   }
   else{
       printf("arrays are  \"NOT EQUAL\"\n");
   }
   return 0;
}

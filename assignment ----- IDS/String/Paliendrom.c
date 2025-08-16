//program to check paliendrom or not
#include<stdio.h>
#include<string.h>
int main(){
    int Size=100,check=1,i;
    char str[Size],rev[Size],temp;
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    Size=strlen(str);
    for(i=0;i<Size;i++){
       rev[i]=str[Size-1-i];
       
    }
    for(i=0;i<Size&&str[i]!='\0';i++){
        if(str[i]!=rev[i]){
           check=0;
           break;
        }
    }
    if(check){
       printf("The string You have entered is \"paliendrom\"");
    }
    else{
       printf("The string You have entered is \"Not paliendrom\"");
    }
}

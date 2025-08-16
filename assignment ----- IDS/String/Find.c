//program to count number of Capital_letters,small_letters,numbers and special characters in a paragraph.
#include<stdio.h>
#include<string.h>
int main(){
    int Size=100;
    char str[Size];
    int Cap=0,Small=0,Spec=0,Num=0;
    printf("Enter a string\n");
    fgets(str,Size,stdin);
    Size = strlen(str);
    for(int i=0;i<Size-1;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            Cap++; 
        }
        else if(str[i]>='a'&&str[i]<='z'){
            Small++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            Num++;
        }
        else if(str[i]!='\n' && str[i]!=' '){
            Spec++;
        }
    }
    printf("No of Capital letters   = %d \n",Cap);
    printf("No of Small letters     = %d \n",Small);
    printf("No of Numbers           = %d \n",Num);
    printf("No of Special Charecter = %d \n",Spec);
    
}

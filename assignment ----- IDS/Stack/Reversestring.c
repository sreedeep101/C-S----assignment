#include<stdio.h>

#define SIZE 100
char stack[SIZE] ;
int top=-1;

void push(char letter){
    if(top == SIZE-1){
        printf("stack Overflow!!");
        return;
    }
    top++;
    stack[top]= letter;
}
char pop(){
    if(top == -1){
    return '\0';
    }
    else
    return stack[top--];
}

int main(){
    char str[SIZE], reversed[SIZE];
    int i=0;
    printf("enter string : ");
    scanf("%s", str);
    
    for(i=0; str[i]!= '\0';i++){
        push(str[i]);
    }
    
    for(i=0; top!=-1;i++){
        reversed[i]=pop();
    }
    
    reversed[i]='\0';
    printf("reversed String is : %s", reversed);
    return 0;
}

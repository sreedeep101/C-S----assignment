//program for finding minimum of a set of 'n' numbers
#include<stdio.h>

#define Size 10
int main(){
  int ary[Size];
  int lowest , i;
  printf("Enter numbers into the array\n");
  for(i=0;i<Size;i++){
    scanf("%d",&ary[i]);
  }
  lowest = ary[0];
  for(i=1;i<Size;i++){
    if(ary[i]<lowest){
      ary[i]=lowest;
    }
  }
  printf("The lowest element in the array is :%d\n",lowest);
  return 0;
}

//program to delete spacific value from an array by trace out its position

#include<stdio.h>

int main(){
  int size=5;
  int aray[size];
  int value,i,pos,check=0;
  printf("enter elements into the array :\n");
  for(i=0;i<size;i++){
    scanf("%d",&aray[i]);
  }
  printf("enter the value you want to remove from this array :\n");
  scanf("%d",&value);
  for(i=0;i<size;i++){
    if(value == aray[i]){
      pos=i;
      check=1;
      break;
    }
  }
  if(check){
    for(i=pos;i<size;i++){
      aray[i]=aray[i+1]
    }
    size--;
    printf("array after deleting element :\n");
    for(i=0;i<size;i++){
      printf("[%d] ",aray[i]);
    }
  }
  else{
    printf("invalid value!\n");
  }
  return 0; 
}

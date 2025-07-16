//program for inset element into the array at any index point
#include<stdio.h>

int main(){
  int size=5;
  int aray[size+1]; //size+1 is used to reserve space for add element
  int i,pos,val;

  printf("Enter elements into the array :");
  for(i=0;i<size;i++){
    scanf("%d",&aray[i]);
  }
  printf("Enter the position : ");
  scanf("%d",&pos);
  printf("enter value to insert : ");
  scanf("%d",&val);

  //main logic
  for(i=size;i>pos;i--){
    aray[i]=aray[i-1];
  }
  aray[pos]=val;
  size++;
  printf("array after insertion of %d at %dth position :\n",val,pos);
  for(i=0;i<size;i++){
    printf("[%d] ",aray[i]);
  }
  return 0;
}

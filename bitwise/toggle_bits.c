//wap to toggle all bits and print uypdated value 

#include<stdio.h>
int main()
{
  int num;
  printf("enter num");
  scanf("%d",&num);

  //toggle bit 

  num ^= -1;

  printf("%d",num);
}
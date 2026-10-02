#include<stdio.h>
#include "C:\Users\prem Bijarane\Desktop\Advanced C\pointer\header.h"


int main()
{
  int a,b;
  printf("enter 2 value");
  scanf("%d%d",&a,&b);
  printf("\n after swaping %d %d",a,b);

  swap(&a,&b); // you pass reference swap function created a header.h files like access same printf() type 

  printf("\n before swapping %d %d",a,b);
  return 0;
}
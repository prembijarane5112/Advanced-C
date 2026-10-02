#include<stdio.h>
#include "test.h"

int main()
{
  int n;
  printf("enter n:");
  scanf("%d",&n);

 int ret= factorial(n);
  printf("%d",ret);
}
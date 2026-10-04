//wap to print fibonaaci series

#include<stdio.h>
int main()
{
  int a,b,c,n;
  printf("enter a limit");
  scanf("%d",&n);
  a=0, b=1;

  while(a<=n)
  {
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
  }
}
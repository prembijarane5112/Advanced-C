//wap to print factorial of number;
#include<stdio.h>
int main()
{
  int n,m;
   unsigned int  f=1;
  printf("enter number:");
  scanf("%d",&n);
    m=n; // bcz you print facotirla of no (n) in last n is 0 
  while(n!=0)
  {
    f=f*n;
    n--;
  }

  printf("fctorial of %d no is %d",m,f);
}
#include<stdio.h>
int main()
{
  int a=5,*p;
   p = &a;
  printf("%u\n",p);
  ++*p;
  ++p;

  printf("%d\n",a);
  // printf("%d",*p);
  printf("%u\n",p);
  
}
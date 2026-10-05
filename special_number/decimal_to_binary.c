//cvt decimal to binary like 10 is decimal bin is 1010;

#include<stdio.h>
int main()
{
  int decimal;
  int binary=0;
  int place=1;
  int rem;

  printf("enter decimal no0");
  scanf("%d",&decimal);

  while (decimal!=0)
  {
    rem=decimal % 2 ;
     binary= binary+ rem * place ;
     place= place *10;

     decimal/=2; //delete the no
  }

  printf("binary no is %d",binary);
  
}
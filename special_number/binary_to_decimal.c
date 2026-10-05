//cvt a binary number to decimal

#include<stdio.h>
int main()
{
  int binary;
  int decimal=0;
  int pow=1;
  int rem;

  printf("enter binary number");
  scanf("%d",&binary);

  while(binary!=0)
  {
    rem= binary % 10; 
    decimal= decimal+ rem *pow;

   pow = pow *2; 
   binary= binary/10;
  }


  printf("decima no is %d",decimal);
}
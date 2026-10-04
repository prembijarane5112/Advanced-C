//reverse a numberr ;
#include<stdio.h>
int main()

{
  int num,lastdigit,rev=0;
  printf("enter number:");
  scanf("%d",&num);

  while(num!=0)
  {
    lastdigit= num %10; //give last digit of number like no is 145 give 5 

    rev= rev * 10 +lastdigit;  // they give last digit to first

    num= num /10;  
  }

  printf("reversed number is %d",rev);
}
//sum of the  digit of number like no->123 op-<6 means add 1+2+3=>6;


#include<stdio.h>
int main()

{
  int n,r,s=0;
  printf("enter numb:");
  scanf("%d",&n); //read n from user l
   
  while(n!=0)  //check number not equal is 0 they ewual zero not enter block 
  {
    r=n % 10;  //they give last number like % give  remainder
    s= s+r;  //add last digit to s
    n=n/10; // delete the last number 
  }

  printf("sum is %d",s);

}

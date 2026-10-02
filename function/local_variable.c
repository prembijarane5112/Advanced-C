#include<stdio.h>
void new(); //declaration

int main()
{
  int a=10;
  new();
  printf("%d",a);
}

/*
void new()
{
   a=a+5 ;  // they show error bcz undecrled variable a bcz in main delcare a but main access only this block not access outside bloxk 
}
   */


void new()
{
  int a;
  a=a+5; //output is not change ans 10 bcz original value cannnot change by local vvariable 

}

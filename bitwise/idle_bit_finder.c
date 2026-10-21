/*
Idle Bit Finder

In a system status code, an idle slot is represented by a 0. The system must find the first available idle position from the right.
 
Input
N
 
Output
Print the position of the rightmost zero bit
*/



#include<stdio.h>
int main()
{
  int num,pos=0;
  printf("Enter num");
  scanf("%d",&num);


  //find 0th no pos

  while(num & (1<<pos))
  {
    pos++;
  }

  printf("0'th number index  pos is:%d",pos);
}
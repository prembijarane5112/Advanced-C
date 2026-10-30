/*
Takes an unsigned integer n as input.
Takes a bit position pos as input.
Checks whether the bit at that position is 1 or 0.
Sets that bit to 1 without changing any other bits.
Prints the original number and the updated number.
*/



#include<stdio.h>
int main()
{
  int num,pos;
  printf("Enter num and position");
  scanf("%d%d",&num,&pos);


  
    
     num |= (1<<pos);
     
     printf("%d",num);

} 
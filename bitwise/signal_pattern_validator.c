/* Signal Pattern Validator

A digital system expects signals in alternating binary pattern (like 101010...). Any deviation is considered invalid.
 
Input
N
 
Output
Print Yes if pattern is alternating, otherwise No
*/



#include<stdio.h>
int main()
{
  int bin ,size;
  printf("Enter a number in binary format :");
  scanf("%d",&bin);
 
  
  if(bin ^ (bin>>1))
  printf("yes");

  else
  printf("no");
}
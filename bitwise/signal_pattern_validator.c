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
  int num ,e_count=0,o_count=0;
  printf("Enter a number:");
  scanf("%X",&num);

  for(int i=31;i<=0;i--)
  {
  if(num &(1<<i))
  e_count++;

  else
  o_count++;
  }

  if(e_count==o_count)
  {
    printf("Print Yes if pattern is alternating");
  }
  else
  printf( " NO if pattern is  not alternating,");


}
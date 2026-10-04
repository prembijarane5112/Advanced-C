/* wap to neaon number neao    Why 9 is a Neon Number:
• Step 1: Square the number: 9 × 9 = 81
• Step 2: Add the digits of the square together: 8 + 1 = 9
• Result: The sum (9) matches the original number (9)

*/


#include<stdio.h>
int main()
{
  int num,sum=0,lastdigit,new;
  printf("enter number:");
  scanf("%d",&num);
  int square=num*num;
  
  while(square!=0)
  {
 lastdigit=square %10;
 sum+=lastdigit;
 square/=10;

  }

  if(sum==num)
{
  printf("neon number");
}
else{
  printf("non neon number:");
}

}
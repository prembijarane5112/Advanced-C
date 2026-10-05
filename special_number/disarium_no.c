/* A Disarium number is a special number where the sum of its digits, each raised to the power of its respective position, is equal to the original number itself
• 89 \(\rightarrow 8^1 + 9^2 = 8 + 81 = \mathbf{89}\)
• 175 \(\rightarrow 1^1 + 7^2 + 5^3 = 1 + 49 + 125 = {175}\)
• 518 \(\rightarrow 5^1 + 1^2 + 8^3 = 5 + 1 + 512 = {518}\)
*/


#include<stdio.h>
int main()
{
  int num,rem,count=0,sum=0;
  printf("enter number:");
  scanf("%d",&num);
   int cmp=num; //bcz they check to sum 
  int new=num; 

  while(num!=0)
  {
  rem= num %10; //give last digit;
   count++;
   num/=10; //delete last digit;
  }

  while(new!=0)
  {
    rem =new %10;
    int f=1;
    for(int i=1; i<=count;i++)
    {
    f= f*rem;
    }
    sum=sum+f;  //last end for loop f value stored sum;
    count--; //bcz position aloso minus by 1 ;

    new/=10;
  }


   if(cmp == sum)
   {
    printf("disarium number:");
   }
   else
   printf("not disarium number:");
}
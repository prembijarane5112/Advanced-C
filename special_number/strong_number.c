/* 
A strong number is a special number where the sum of the factorials of its individual digits equals the number itself
• 145: \(1! + 4! + 5! = 1 + 24 + 120 = 145\) (It is a strong number)
• 2: \(2! = 2\) (It is a strong number)
• 123: \(1! + 2! + 3! = 1 + 2 + 6 = 9\) (Not equal to 123, so it is not a strong number)

*/


#include<stdio.h>
int check_strong(int); //prototype

int main()
{
  int num;
  printf("enter number:");
  scanf("%d",&num);

    int ret=check_strong(num); //calling 
   
    if(ret == num)
    {
      printf(" strong number ");
    }
    else
    {
      printf("no is not strong number");
    }
      
}

int check_strong(int num) //func declaration 
{
  int lastdigit,sum=0;
  while(num!=0)
  {
    lastdigit=num%10;
    int fact=1;
    for(int i=1;i<=lastdigit;i++)
    {
      fact=fact*i;
    }

    sum=sum+fact;
    num=num/10;
  }
   
  return sum;
}
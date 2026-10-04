/*
A happy number is a positive integer that eventually reaches 1 when you repeatedly replace the number with the sum of the squares of its digits. If the process loops endlessly in a cycle and never reaches 1, it is called an unhappy (or sad) number.
The Step-by-Step Rule
1. Take any positive whole number.
2. Separate it into individual digits and square each digit.
3. Add those squared values together to get a new number.
4. Repeat the process with the new number.
Example 1: Why 19 is a Happy Number
Let's test the number 19:
• 1² + 9² = 1 + 81 = 82
• 8² + 2² = 64 + 4 = 68
• 6² + 8² = 36 + 64 = 100
• 1² + 0² + 0² = 1 + 0 + 0 = 1 

*/


#include<stdio.h>
int happy(int);
int main()
{
  int num;
  printf("enter number");
  scanf("%d",&num);

    int ret= happy(num);
    /*
    if(ret ==1)
    {
      printf("happy number");
    }
    else
    {
      printf("not happy number");
    }
      */

}

int happy(int num)
{
  int rem,square,sum=0;
  while(num!=0)
  {
 rem= num%10;
 square= rem* rem;

 sum=sum+square;

 num=num/10;
  }

printf("%d",sum);
}
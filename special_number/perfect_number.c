/*  A perfect number is a positive whole number that equals the sum of its proper divisors
• 6: Its proper divisors are 1, 2, and 3. Adding them up gives \(1 + 2 + 3 = 6\).
• 28: Its proper divisors are 1, 2, 4, 7, and 14. Adding them up gives \(1 + 2 + 4 + 7 + 14 = 28\).
*/


#include<stdio.h>
int check_perfect(int); //function declaration 
int main()
{
  int num;
  printf("enter number:");
  scanf("%d",&num);  //read number; 

    int ret=check_perfect(num);  //calliing function 
       
    if(ret == num)
    {
      printf("perfect number");
    }
    else{
      printf("not perfect number:");
    }
  }

int check_perfect(int num) //func defination
{
   int sum=0;
  for(int i=1; i<num;i++)
  {
   
    if(num % i ==0)
    {
   sum=sum+i;
    }
  }

   return sum;
}

//wap to print factorial of number;

#include<stdio.h>
int factorial(int num); //declaration 

int main()
{
  int num;
  printf("enter number to find factorial:");
  scanf("%d",&num);

    int ret=factorial(num);  //calling 
        printf("factorial of %d is  %d",num,ret);
  }

int factorial(int num)
{
  int fact=1;
for(int i=num;i>=1;i--)

{     fact= fact*i;
}

return fact;
}
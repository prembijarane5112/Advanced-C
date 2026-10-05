//wap to position wise multiplication lie no 345 means 5 is 3rd pos 5 5*5*5=125print  4 is 2nd pos 4*4=16   3 is 1st pos 3

#include<stdio.h>
int main()
{
  int num,count=0,rem;
  printf("enter number:");
  scanf("%d",&num);
   int new=num;
  // count a digit how many digit
  while(num!=0)
  {
    rem=num%10;
    count++;
    num/=10; 
  }

  while(new!=0)
  {

    rem=new %10;
    int f=1;
  for(int i=1;i<=count;i++)
  {
     f=f*rem;
  }
  printf(" last digit is %d and op is %d\n",rem,f);
  count--;

  new/=10;
}
}
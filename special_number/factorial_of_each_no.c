//factorial of each number like no 345 , 5! print 4!print 3! print

#include<stdio.h>
int main()
{
  int num,rem;
  printf("enter number:");
  scanf("%d",&num);

  int new=num;


  while(num!=0)
  {
    int fact=1;
     rem=num %10;

     for(int i=rem; i>=1;i--)
     {
      fact=fact*i;
     }

     printf(" %d no factorial  is %d\n",rem,fact);

     num/=10;
  }


}
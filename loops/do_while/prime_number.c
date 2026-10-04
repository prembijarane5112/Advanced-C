//wap to check no is prime or not prime menas the number is 2 factor 1 and itself thats called prime numbrr 
// prime->a number which is ivisible by 1 and iteself

#include<stdio.h>
int main()
{
  int n,i=2,flag=0;
  printf("enter number:");
  scanf("%d",&n);

   while(i<n)
  {
    if(n %i ==0)
    {
       flag=1;
       break;
  }
  i++;

}

if(flag==0)
{
  printf("no is prime");
}
else
{
  printf("no is not prime");
}
}
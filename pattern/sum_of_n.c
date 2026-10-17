/* wap to find sum of n odd natural number and dispaly no 
n=5  op ->the odd number are 1 3 5 7 9 
the sum of no is 25;
*/


#include<stdio.h>
int main()
{
  int n,sum=0;
  printf("enter n");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
     int odd=2*i-1;

    printf("%d ",odd);
    sum+=odd;
    }


    printf("sum of all %d number is %d",n,sum);

}
#include<stdio.h>
int main()
{
  int bin;
  printf("enter bin:");
  scanf("%d",&bin);

  
  for(int i=0;i<8;i++)
  {
    if(bin&(1<<i))
     printf("%d ",i);
  }



}
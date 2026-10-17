/*  n=3 
  1
  0 1
  1 0 1

*/


#include<stdio.h>
int main()
{
  int n;
  printf("enter n");
  scanf("%d",&n);

  if(n<0)
  printf("invalid input");
  
  for(int i=0; i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      if((i + j) % 2 == 0)
      {
        printf("1 ");
      }
      else{ 
      printf("0 ");
      }
    }
    printf("\n");
  }
}
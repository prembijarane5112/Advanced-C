//in ex count no of ele,nts in given array greater than given x like array 1 2 3 4 5  x=2 count how many elements greater than 2 count is 3 

#include<stdio.h>
int main()
{
  int size,x,count=0;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];

  printf("enter elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("enter x:");
  scanf("%d",&x);

  for(int i=0;i<size;i++)
  {
    if(arr[i]>x)
    count++;
  }

  printf("count is %d",count);
}
//find the largest and smalest in array

#include<stdio.h>
int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];

  printf("enter elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  int largest=0;
  int smallest=arr[0];

  for(int i=0; i<size;i++)
  {
    if(arr[i]>largest)
    {
      largest=arr[i];
    }
    else if(arr[i]< smallest)
    {
      smallest=arr[i];
    }
  }

  printf("largest is %d\n",largest);
  printf("smallest is %d",smallest);
}
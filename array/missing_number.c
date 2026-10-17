//in array msising one number 


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
  //find sum
  int sum=0;
  for(int i=0; i<size;i++)
  {
    sum+=i;
  }

  //missing find

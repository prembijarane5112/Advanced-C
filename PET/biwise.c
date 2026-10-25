#include<stdio.h>
int main()
{
  int n,target;
  int xor=0;

  printf("Enter size:");
  scanf("%d",&n);

  int arr[n];

  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    xor= xor^ arr[i];
  }

  printf("enter target:");
  scanf("%d",&target);

  int diff= xor
}
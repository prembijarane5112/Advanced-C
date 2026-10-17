//read tow same size array and check element one by one equal or not

#include<stdio.h>
int main()
{
  int size;
  int flag=0;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];
  int arr2[size];

  printf("enter 1st array elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("enter 2nd array elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr2[i]);
  }
  

  //check equal or not

  for(int i=0; i<size;i++)
  {
    if(arr[i] !=arr2[i])
    {
      flag=1;
      break;
    }
  }

  if(flag==1)
  printf("not equal array");
  else
  printf("equal array");
}
//two pointer method

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


  for(int i=0; i<size/2;i++)
  {
    int temp=arr[i];
     arr[i]=arr[size-1-i];
     arr[size-1-i]=temp;

  }

  //print array leements after swaping

  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }

}
//wap to search lements in array

#include<stdio.h>
int main()
{
  int size,search;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];

  printf("enter elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

    printf("enter seach elements");
  scanf("%d",&search);
  
  int flag=0;
  for(int i=0; i<size;i++)
  {
    
    if(arr[i]== search)
    {
      flag=1;
      break;
    }
  }

  if(flag==1)
  {
    printf("elements found");
  }
  else
  printf("not found");
}

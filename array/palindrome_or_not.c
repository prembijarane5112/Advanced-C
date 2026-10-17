//check array palindrome ot not 
 
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

  int flag=0;
  for(int i=0; i<size;i++)
  {
    if(arr[i] != arr[size-1-i])
    {
      flag=1;
      break;
    }
  }

  if(flag==0)
  {
    printf("array palidrome");
  }
  else
  printf("not palidrome");

}
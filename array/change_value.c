//read size anf array elements from user and change value means odd idx value-> multiply by 2  even idx value->incresed by 10;

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

  for(int i=0; i<size;i++)
  {
    if(i %2==0)  //idx is even
    {
      arr[i]*=2; //in arr[i] idx value mutiply by 2;
    }
    else  //idx is odd
  {
    arr[i]+=10;  //arr[i] value 10 by 10;
  }

  }


  //user array
  printf("your elements by incresing:   ");
  for(int i=0; i<size;i++)
  {
    printf("%d  ",arr[i]);
  }
}
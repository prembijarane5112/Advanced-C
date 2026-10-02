#include<stdio.h>

/*
int main()
{
  int arr[4]={10,2,4,55};
  int *ptr;
  ptr=arr;

  //print elementt
  for(int i=10; i<14;i++)
  {
    printf("%d ",*ptr);
    ++ptr;
  
  }
}
  */




  //reverse a array using memeroy address;
  int main()
  {
   int arr[]={30,4,5,23,544};
   int *ptr;
   ptr=&arr[4]; //stored ptr in last element in array;

    //print reverse elemets
    for(int i=10; i<15;i++)
    {
      printf("%d ",*ptr);
      --ptr; //shigt array left position by 1;
    }

  }
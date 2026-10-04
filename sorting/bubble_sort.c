//wap to bubble sort  give a array from user and its ascending order
/*
#include<stdio.h>
int main()
{

  int size,temp;
  printf("enter size of array:");
  scanf("%d",&size);  //read size 
  
  int arr[size];  //create array

  //read array eleemnts from user;

  printf("enter %d elements:",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }


  //used buuble sort

  for(int i=0; i<size-1;i++)
  {
    for(int j=0; j<size-1-i;j++)
    {
      if(arr[j] > arr[j+1])
      {
        //swap
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        
      }
    }
   }       //close outer loop
    
   //after sorting array element is

   printf("After sorting:");
   for(int i=0; i<size;i++)
   {
    printf("%d ",arr[i]);
   }

   return 0;
}


*/




//wap prnt size and array from user and print array in descending order 

#include<stdio.h>
int main()
{
  int size,temp;
  int flag=0;
  printf("enter size:");
  scanf("%d",&size); //read size

  int arr[size];  //create arr named int size array

  //read eleemnt from user
  printf("enter %d elements:  ",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);  //read elelemtn one by 1 and stored itx index
  }


  //perform bubble dort descending operation

  for(int i=0; i<size-1;i++)
  {
    for(int j=0; j<size-i-1;j++)
    {
      if(arr[j] < arr[j+1])
      {
        //swap
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=1;
      } 

    }

    if(flag==0) //flag==0 means array is already sorted 
    break;
  }

  //print elements
  printf("after sorting desc element: ");
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}
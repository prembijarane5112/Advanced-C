//wap to sort elements in ascending order 
/*
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


  for(int i=0; i<size-1;i++)
  {
    for(int j=0; j<size-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
      //swap
      int temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
      }
    }
  }

  
  



  //print array
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}

*/


//descending order


/*
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

  for(int i=0; i<size-1; i++)
  {
    for( int j=0; j<size-1-i;j++)
    {
      if(arr[j]< arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }


  //printf
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}

*/





// 3->check whetehr array is soreted or not 


//2nd method

// using 2nd array

#include<stdio.h>
void read(int arr[],int size);
int sort_check(int arr[],int size);
int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];

  read(arr,size);

  int ret= sort_check(arr,size);
  if(ret ==0)
   printf("array is sorted");

  else
  printf("array is not sorted");
  }


void read(int arr[],int size)
{
printf("enter  %d elements\n",size);
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}
 
int sort_check(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]>arr[i+1])
     return 1 ;  //not sorted array 
  }

  return 0; //sorted array;
}

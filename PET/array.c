//all array question  
//find the diffrence of pair of eleemmnts and check if the iddff is equal to target and return cout 

/*
#include<stdio.h>

void read(int arr[],int size)
{
  printf("Enter elements:\n");

  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

int check_diff(int arr[],int size,int target)
{

  int count=0;
  for(int i=0;i<size-1;i++)
{ 
     for(int j=0;j<size;j++)
     {
      if( (arr[i]-arr[j]) == target)
       count++;
     }
}

return count;

}
int main()
{
  int size,target;
  printf("Enter elements:");
  scanf("%d",&size);

  int arr[size];

  read(arr,size);

  printf("Enter tatget:");
  scanf("%d",&target);

   int ret=check_diff(arr,size,target);
   printf("count is %d",ret);
}


*/


// wap to check whetehr array is sorted or not

/*
#include<stdio.h>
int sorted_check(int[],int);
void read(int[],int);
int main()
{
  int size;
  printf("enter size:");
  scanf("%d",&size);

  int arr[size];

   read(arr,size);
  int ret=sorted_check(arr,size);
   
 
  if(ret ==0)
  printf("Array is sorted:");

  else
  printf("array not sorted:");
}


int sorted_check(int arr[],int size)
{
  for(int i=0;i<size-1;i++)
  {
    if(arr[i] > arr[i+1])
     return 1;  // not sorted
 
    }

  return 0;
}

void read(int arr[],int size)
{
  printf("Enter %d eleemnts:",size);

  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}


*/


//peak  elements  means the eelemtn adjecen elements is greater than rqual to that element
#include<stdio.h>
int main()
{
  int arr[7]={10,20,15,2,23,90,67};


  for(int i=1;i<7;i++)
  {
    if(arr[i]>=arr[i-1] && arr[i]>= arr[i+1])
    {
      printf("%d ",arr[i]);
    }
  }
}






//wap to find the largest sec and third witohut using loops read only 3 elment

#include<stdio.h>
int main()
{
  int arr[3];
  int temp;
  printf("enter 3 elements:");
  for(int i=0;i<3;i++)
  {
    scanf("%d",&arr[i]);
  }


  // sorting the array  means first indx largest 2nd idx second largest and third idx third largest

  if(arr[0] < arr[1])
  {
       temp=arr[0];
       arr[0]= arr[1];
       arr[1]= temp;
  }

   // 2nd position second largest
  if(arr[1] < arr[2])
  {
    temp=arr[1];
    arr[1]=arr[2];
    arr[2]=temp;
  }

  if(arr[0] < arr[1])
  {
    temp=arr[0];
    arr[0]= arr[1];
    arr[1]= temp;
  }

  printf("largest is %d\n",arr[0]);
  printf("second largest is %d\n",arr[1]);
  printf("third largest is %d\n",arr[2]);
  

}
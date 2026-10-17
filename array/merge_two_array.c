/* wap to merge two array into third array 
arr 1  & arr 2 size 3     arr1[3]= 2,1,2   arr2[3]=3,4,5    op is merge[6]= 1,2,3,4,5

*/

#include<stdio.h>
int main()
{
  int size,size2;
  printf("enter arr1 size and arr2 size ");
  scanf("%d %d",&size,&size2);

  int arr[size];
  int arr2[size2];
   
  int merge[size+size2];

  printf("enter  arr %d  elements",size);
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);  //read arr elemenrs
  }

  printf("enter arr2 %d elements",size2);
  for(int i=0; i<size2;i++)
  {
    scanf("%d",&arr2[i]);  //read arr2 elements
  }


  //check and enter emrge array
  int k=0;
  for(int i=0; i<size+size2; i++)
  {
    if(arr[i]<arr2[i])
    {
      merge[k]=arr[i];
      k++;
    }
    else {
     merge[k]=arr2[i];
     k++;
    }
  }


  //print merge array elements
  for(int i=0; i<size+size2;i++)
  {
    printf("%d ",merge[i]);
  }
}
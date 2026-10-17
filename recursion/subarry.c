
#include<stdio.h>
void pairs(int arr[],int start,int end, int size)
{
  if(start==end)
  return;

    printf("%d %d \n"start,end);
    pairs(arr,start+1,end+1,size);
}
int main()
{
  int arr[4]={1,2,3,4};
  int size=4;
  int start=arr[0];
  int end=arr[0];

  pairs(arr,start,end,size);
}
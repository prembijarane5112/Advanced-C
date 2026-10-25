//all array question  
//find the diffrence of pair of eleemmnts and check if the iddff is equal to target and return cout 

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
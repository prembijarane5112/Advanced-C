//wap to remove all even elemnts in the given array 
//eq  arr=1,2,4,5,6,7  op is omyl odd no print 1,5,7

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
    if(arr[i] % 2 !=0)
     printf("%d",arr[i]);
  }
}
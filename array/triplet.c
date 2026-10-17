//find the total no of triplet whose sum is equal to target 

/* find the total no of pairs in rthe array whose sum is equal to given vaue x
 arr[6]= {1,3,5,7,8,9,3};
 x=8;   op (3,5) , (1,7)
*/


#include<stdio.h>
int main()
{
  int size,target;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];

  printf("enter elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("enter value to check pairs in array:");
  scanf("%d",&target);


  //chec pairs and print

  for(int i=0; i<size-1;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      int flag=0;
      for(int k=j+1;k<size;k++)
      if( arr[i] + arr[j] +arr[k]== target)
      {

      }
    }
  }

 

 
}

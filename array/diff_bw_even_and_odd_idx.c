/*  wap to diff_bw_even_and_odd_idx
eg arr=1,2,3,4,5   sum of even idx =1+3+5=9  sum of odd=2+4=6 ; diff=even-odd=9-6=3;

*/

#include<stdio.h>
int main()
{
  int size;
  int evensum=0,oddsum=0,diff;
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
    if(i % 2==0)
    evensum+=arr[i];

    else
    oddsum+=arr[i];
  }

  diff=evensum - oddsum;
   
  printf("diffence is even and odd sum is %d:",diff);
}



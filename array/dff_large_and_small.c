/* you have given array print the diffrent betwenn index  largest and smallest element 
 arr = 1,2,4,6,4  large=6(4 idx ) small =0 idx    diff is  4-0 =4 

 */


 #include<stdio.h>
int main()
{
  int size;
  int idx1=0,idx2=0;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];

  printf("enter elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

   int large=arr[0];
   int small=arr[0];
  for(int i=1; i<size;i++)
  {
    if(arr[i]>large)
    {
      small=large;
      large=arr[i];
      idx1=i;
    }

    if(arr[i] < small && arr[i] !=large)
    {
      small=arr[i];
      idx2=i;
    }
  }


int diff=idx1- idx2;

printf("diffrence bw large and small is %d",diff);
}
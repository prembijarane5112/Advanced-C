//moves all xero to end  2 0 54 20 0 2   op 2 54 20 0  0


//1st method  swaping 

#include<stdio.h>
int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];
 
  printf("enter %d elennts",size);
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }


  //check 0 zeors
  int i=0;
  for(int j=i+1; j<size;j++)
  {
    if(arr[j]!=0)
    //menas first non zero elements shift to left automatically zero shift to right
    {
    int temp=arr[j];  // third varible store arr 1 idx means they idx not not zeror value
    arr[j]=arr[i];
    arr[i]= temp;
   i++;

    }

  }



  //print
  printf("array elements:");
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}
 



// 2nd   -> using array 
/*
#include<stdio.h>
int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

  int count[]={0};
  int arr[size];

  printf("enter %d elements is ",size);
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
 
int k=0;
  //increse count
  for(int i=0; i<size;i++)
  {
    if(arr[i]!=0)
    count[k]++;
    k++;
  }

  //check new array
  for(int i=0; i<k;i++)
  {
    printf("%d ",count[i]);
  }


}
  */


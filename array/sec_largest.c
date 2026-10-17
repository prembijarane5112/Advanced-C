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

   int largest=arr[0];
   int smallest=0;
   
   for(int i=0; i<size;i ++)
   {
    if(arr[i]> largest)
    {
      smallest=largest;
      largest=arr[i];
    }

    else if(arr[i]>smallest && arr[i] < largest)
    {
      smallest=arr[i];
    }
   }

   printf("largest is %d\n",largest);
    printf("sec largest is %d",smallest);


  //
}
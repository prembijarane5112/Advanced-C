//wap to find the nth no of largest and samllest  nth means 2nd 3rd 4th 5th eq

#include<stdio.h>
void read(int[],int);
 void sort_array_find_nth(int [],int,int);
int main()
{
  int size,n;
  printf("Enter size:");
  scanf("%d",&size);


  int arr[size];   //declare array 
  
    read(arr,size);

  printf("Enter nth means how many pos find large and samll:");
scanf("%d",&n);

      
        sort_array_find_nth(arr,size,n);

}

void read(int arr[],int size)
{
  printf("Enter %d elements:",size);

  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

 void sort_array_find_nth(int arr[],int size,int n)
 {
 
   //sort the array using bubble sort

   for(int i=0;i<size-1;i++)
   {
    for(int j=0;j<size-1-i;j++)
    {
      if(arr[j]> arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]= temp;
      }
    }
   }

   printf("%d smallest is :%d\n",n, arr[n-1]);
   printf("%d largest is :%d\n",n,arr[size-n]);


 }
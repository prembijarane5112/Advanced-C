//find the copy one array to another array using reverse
 // ew arr1=1,2,3,4,5  arr[2] = 5,4,3,2,1

 /*

 #include<stdio.h>
int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];
  int arr2[size];

  printf("enter elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  //copy using reverse
  for(int i=0; i<size;i++)
  {
     //swap 
     arr2[i]= arr[size-i-1];
  }

  //print arr2
  for(int i=0; i<size; i++)
  {
    printf( "%d ",arr2[i]);
  }
}

*/




//
/* wap ro copy the elemnts of off index from one array int another array
 arr[5]=1,2,3,4,5  op the elemnts first array is 1 2 3 4 5  the elemtns stoered second array is 2 ,4
*/


#include<stdio.h>
int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];
  int odd_idx[size];
  printf("enter %d elemtns are:",size);
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  int odd=0;

  //find odd iidx
  for(int i=0; i<size;i++)
  {
    if(i %2 !=0)
    {
     odd_idx[odd]=arr[i];
   odd++;
    }
  }

  printf("array1  elemnts is :");
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }

  printf("\nthe elements stored second array is:");
  for(int i=0; i<odd ; i++)
  {
    printf("%d ",odd_idx[i]);
  }

}
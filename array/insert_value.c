/* in given array inseet value in psoition wirhout taking extra array
eq->arr 1,2,4,6,6   pos(idx)-2 means 2 idx  value=9 ;op 1 2 9 4 6 6 means 9 value add in psoiton 

*/

#include<stdio.h>
int main()
{
  int size,idx,value;
  printf("enter size");
  scanf("%d",&size);

  int arr[size+1];

  printf("enter elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("enter idx to add some value:");
  scanf("%d",&idx);

  printf("enter value :");
  scanf("%d",&value);


  for(int i=size; i>=idx; i--)
  {
       arr[i]=arr[i-1];//shift left by 1 upto idx found
    }
    //inseet value;
      arr[idx]=value;
      size++;


  //print array

  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}

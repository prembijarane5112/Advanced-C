/* wap to count the no of ele,ents that occured tha once 
 arr 1,3,1,3,5,6,3,2  op 2 means 2 no more than one time repet

*/

 #include<stdio.h>
int main()
{
  int size,count=0;
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

    for(int j=i+1;j<size;j++)
    {
      if(arr[i]==arr[j])
      count++;
    }
  }

  printf("coutn is %d",count);
}
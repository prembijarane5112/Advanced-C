//seperate all even and odd elements while keeping orginal relative order e1 arr[6]={1,2,3,4,5,6}  op -> 2,4,6,1,3,5

#include<stdio.h>
void read(int arr[],int size);
void seperate_odd(int arr[],int size);
void print(int arr[],int size);

int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);
  
  int arr[size];  //declare array 

  read(arr,size);  //calling size function 

   seperate_odd(arr,size);

   print(arr,size);
   
}

void read(int arr[],int size)
{
  printf("enter %d elements:",size);

  for(int i=0; i<size;i++)
  {
   scanf("%d",&arr[i]);  //read 1 by  one and stroed memeory address;
  }
}

void seperate_odd(int arr[],int size)
{
   int temp,i=0;  

  for(int j=0;j<size;j++)
  {
    if(arr[j] %2 ==0) //in eleemnts module 2 means given elements is even then  shift to 0 idx
    {
      //swap
      temp= arr[i];
      arr[i]=arr[j];
      arr[j]=temp;    //means your elements is even enter block and waping menas your elemnts shift to 0th idx;l
      i++;
    }
  }

}


void print(int arr[],int size)
{
  printf("after seperate:");
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}
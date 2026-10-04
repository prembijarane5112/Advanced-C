//wap to sort array using selection sort
/*  
#include<stdio.h>
int main()
{
  int i,j,temp;
  int arr[]={5,3,8,1,2};

  for(i=0; i<5-1;i++)
  {
    int small=i;

    for( j=i+1;j<5;j++)
    {
      if(arr[j] <arr[small])
      {
        small=j;
      }
    }
    //swap
    temp=arr[i];
    arr[i]=arr[small];
    arr[small]=temp;
  }


  //print array
  for(int i=0; i<5;i++)
  {
    printf("%d ",arr[i]);
  }
}

*/




//using function 

#include<stdio.h>
void read(int arr[],int); //protoype
void selection_sort(int arr[],int); 
void print(int arr[],int); 

int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

   int arr[size];  //create array 

    read(arr,size);  //call read function
    selection_sort(arr,size);
    print(arr,size); 
}

void read(int arr[],int size)
{
  //read array elements
  printf("enter %d elements:",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}


void selection_sort(int arr[],int size)
{
  //perform operation array
  int i,j,temp,smallestidx;

  for(int i=0; i<size-1;i++)
  {
       smallestidx=i; // assume indx 0 elements is smallest
      
       for(int j=i+1;j<size;j++) //compr unsoreted array to sorted 
       {
        if(arr[j] > arr[smallestidx])
        {
          smallestidx=j;    //inside you find the smallest element in unsoreted array
        }
       }

       //swaping 
       temp=arr[i];
       arr[i]= arr[smallestidx];
       arr[smallestidx]= temp;
  }
}

void print(int arr[],int size)
{
  //print the array
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}
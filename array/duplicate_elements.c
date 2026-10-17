//wap to find duplicate elements
/*
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

  //check duplicate

  for(int i=0; i<size;i++)
  {
    int flag=0;
    for(int j=i+1; j<size;j++)
    {
      if(arr[i]==arr[j])
      {
        flag=1;
      }
    }

    if(flag==1)
    {
      printf("%d",arr[i]);
    }
  }
}


*/


//2nd method

// using 2nd array

#include<stdio.h>
int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];
  int count[100]={0}; 

  printf("enter elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }


  for(int i=0; i<size;i++)
  {
      count[arr[i]]++;
  }

  for(int i=0;i<size;i++)
  {
    if(count[i]>=2)
    {
    printf("%d",i);
  }
}
}

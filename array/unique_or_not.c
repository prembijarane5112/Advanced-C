//check unieq means dupicate elemetn not found in array
//print uniequ element in the array


// 1st method

/*
#include<stdio.h>
int main()
{
  int size;
  int flag=0;
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
      {
        flag=1;
        break;
      }
    }
  }
     if(flag==0)
     printf("unique");
     else
     printf("not uniquw");

   
  }

  */



  // 2nd method

  /*
  #include<stdio.h>
int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];
 int count[size];
  printf("enter elements");
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  for(int i=0; i<size; i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]== arr[j])
      {
        count[i]++;
      }
    }
  }

 int flag=0;
  //check uniwue or not
  for(int i=0; i<size;i++)
  {
    if(count[i]==1)
    {
      flag=1;
      break;
    }
  }

  if(flag==1)
  {
    printf("not unique");
  }
  else
  printf("unique;");
}



*/


//3rd method 


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

   for(int i=0; i<size;i++)
   {
     int count=0;
    for(int j=0;j<size;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
      }
    }
     if(count==1)
     printf(" %d ",arr[i]);
   
   
  }
}

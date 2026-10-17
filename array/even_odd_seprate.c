//wap to read size and elemnts foe user print even emelens seperate and odd elements seperate array

#include<stdio.h>
int main()
{
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];
  int even[size];
  int odd[size];
   
  printf("enter %d elements",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  int e=0;
  int o=0;
  for(int i=0; i<size;i++)
  {
    if(arr[i] %2 ==0)

    {
       even[e]=arr[i]; 
      e++;
    }
    else
    {
    odd[o]=arr[i];
    o++;
  
    }
  
  
  }


  printf("even elemtns is :");
  for(int i=0; i<e;i++)
  {
    printf("%d ",even[i]);
  }

  printf("\nodd elements is:");
  for(int i=0;i<o;i++)
  {
    printf("%d ",odd[i]);
  }
}
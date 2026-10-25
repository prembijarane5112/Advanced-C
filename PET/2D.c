/* in the array contain zero elements find  make row and col also zero 
ip -> 1 2 3          op-> 1 0 3 
      1 0 1               0 0 0
      2 4 5               2 0 0 
*/ 

#include<stdio.h>
int main()
{
  int row,col;
  printf("Enter no of rows and col:");
  scanf("%d%d",&row,&col);

  int row1[3]={0};
  int col1[3]={0};
  int arr[row][col];  // delcare 2d array

  //read 


  printf("enter  elements:\n");

  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
    scanf("%d",&arr[i][j]);


    //saved zero position
    if(arr[i][j]==0)
    {
      row1[i]=i;
      col1[j]= j;
    }
    }
  }


  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      if(row1[i]==1 || col1[j]==1)

      {
         arr[i][j]=0;
      }
    }
  }


  //print
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      printf("%d",arr[i][j]);
    }

    printf("\n");
  }
}


//wap to print 1)diagonal of matrix,
// 2) lower tringle of matrix 
// 3) upper tringle of matrix
//mcheck matrix  is square matrix or not 


#include<stdio.h>
int main()
{
   
  int m,n,r,c;
  printf("Enter rows and column:");
  scanf("%d%d",&m,&n);

    int arr[m][n];  //create 2d array

  //operation only  perfomr square matrix means row and col same  like 4*4   3*3
   
  if(m!=n)
  printf("invalid input/enter row and col same;");

 
 printf("enter matrix elelemnts:\n");

  for( r=0;r<m;r++)
  {
    for( c=0;c<n;c++)
    {
      scanf("%d",&arr[r][c]);
    }
  }

    printf("matrix:\n");
    for(int r=0;r<m;r++)
    {
      for(int c=0;c<n;c++)
      {
        printf("%5d",arr[r][c]);
      }

      printf("\n");
    }



    //print diagonal matrix 

    printf("Diagonal matrix is:\n");
    for( r=0;r<m;r++)
    {
      for( c=0;c<n;c++)
      {
        if(r==c)
        {
          printf("%5d",arr[r][c]);
        }

      }

      printf("\n");
    }


    //print lower tringle matrix


    printf("Lower tringle matrix:");
    
    for(int r=0;r<m;r++)
    {
      for(int c=0;c<n;c++)
      {
        if(r>=c)
        {
          printf("%5d",arr[r][c]);
        }
      }

      printf("\n");
    }



    //print upper diagonal matrix
    printf("upper diagonal matrix:\n");

    for(r=0;r<m;r++)
    {
      for(c=0;c<n;c++)
      {
        if(r<=c)
        {
          printf("%5d",arr[r][c]);
        }
      }

      printf("\n");
    }
}
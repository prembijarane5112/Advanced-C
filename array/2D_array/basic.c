//declare and inialize 2d array
/*
#include<stdio.h>
int main()
{

  //initalization at declaration 
  // int arr[3][2]={{1,2,3},{4,5}};

  //alternate intialization ompiler refer size;
  // int arr[][3]={{1,2,3},{4,5,6}};


  //accessing elements
  // printf("%d ",arr[1][2]));    //op 6 menns bcz 1 row 2 nd col value access
}


*/
















//create 3 by 3 matrix; 
/*
#include<stdio.h>
int main()
{
  int a[3][3],r,c;  // create 3 by 3 matrix 3 row 3 col

  //read array 
  printf("Enter elements:");

  for(int r=0;r<3;r++)
  {
    for(int c=0;c<3;c++)
    {
      scanf("%d",&a[r][c]);
    }
  }

  //print the matrix

  for(int r=0; r<3;r++)
  {
    for(int c=0;c<3;c++)
    {
      printf("%5d",a[r][c]);
    }

    printf("\n");
  }
}

*/








//pass 2d array in function 

/*
#include<stdio.h>
void print_matrix(int [][3],int);  //protoype 
int main()
{
   
  int matrix[2][3]={{1,2},{3,4,5}};

  print_matrix(matrix,2); 
}

void print_matrix(int arr[][3],int row)
{
  for(int r=0;r<row;r++)
  {
    for(int c=0;c<3;c++)
    {
      printf("%5d",arr[r][c]);
    }
    printf("\n");
  }
}


*/






// How do you add two matrices using 2D arrays in C?

#include<stdio.h>
int main()
{
  int arr[2][2]={{1,2},{2,1}};
  int arr2[2][2]={{1,2},{2,1}};
   int sum[2][2];


   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
      sum[i][j]= arr[i][j]+arr2[i][j];
    }
   }

   //print

   for(int r=0;r<2;r++)
   {
    for(int c=0;c<2;c++)
    {
      printf("%5d",sum[r][c]);
    }
    printf("\n");
   }


}
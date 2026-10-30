//wap to read m*n matrix anf find the transpose of matrix

#include<stdio.h>
int main()
{
  int m,n,r,c;
  printf("Enter  row and col:");
  scanf("%d%d",&m,&n);

  int arr[50][50];  //create array row and col 

  //read array elements;

  printf("Enter elements in matrix:");
  for(r=0;r<m;r++)
  {
    for(c=0;c<n;c++)
    {
      scanf("%d",&arr[r][c]);
    }
  }

  //print 
  for(r=0;r<m;r++)
  {
    for(c=0;c<n;c++)
{
  printf("%5d",arr[r][c]);  // print row and col stored value
}

printf("\n");  //next line

  }


  //transpose of matrix->row cvt to colooumn 

  printf("Transpose:\n");
  for(r=0;r<m;r++)
  {
    for(c=0;c<n;c++)
    {
      printf("%5d",arr[c][r]);
    }

    printf("\n");
  }


}
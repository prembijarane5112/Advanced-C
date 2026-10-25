//all pattern question about pet placement test
/*
1 
1 2
1 2 3 
1 2 3 4

*/

/*
#include<stdio.h>
int main()
{
  int n;
  printf("Enter n:");
  scanf("%d",&n);
 
  

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d ",j);
  

    }
    printf("\n");
  }
}


*/

/*
1 
1 2 1 
1 3 3 1 
1 4 6 4 1 

*/

#include<stdio.h>
int main()
{
  int n;
  printf("enter n:");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d",j);
    }

    if(i!=1)
    {
    for(int j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    printf("\n");

  }
}
}
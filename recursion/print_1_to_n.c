
#include<stdio.h>
#include<string.h>


// //wap to print 1 to 10 using main rcursion
// int main()
// {
// static int i=1;

// if(i > 10)
// {  //base case
// return 0 ;
// }

// printf("%d",i);
// i++;
// main();  //call
// }


/* //wap to print 1  to n using recursion

void display(int); //function declaration /prototppype
int main()
{
  int n;
  printf("enter limit");
  scanf("%d",&n);
  display(n); //calling 
}

void display( int n) //definatipn 
{
     static int i=1;
    
  if(i>n)
  {
    return ;
  }

  printf("%d ",i);
  i++;
  display(n);
}

*/
int factorial(int) ; //declaration
int main()
{

  int n;
  printf("enter n");
  scanf("%d",&n);
 int ret= factorial(n); //call
 printf("factorial is:%d",ret);
}

int factorial(int n) //defination // recursive function
{
  static int f=1;

  if(n==0)
   return f ;
  
   f=f*n;
   n--;
   factorial(n);
}
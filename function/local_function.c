#include<stdio.h>
int factorial(int); //declaration or  prototype
int reverse(int); 
float area(float);
void main()
{

   float ret;
    ret = area(22.8);
    printf("area of circle is:%f",ret);
   

  // int x,y;
  // printf("enter number:");
  // scanf("%d",&x);

//   y= factorial(x); //calling and store vallue in y
//  printf(" factorial is :%d\n",y);

//  y= reverse(x);
//  printf("reverse no is %d:",y);

//check given no palindrome or not
//  if(x==y)
//  {
//   printf("palindrome");
//  }
//  else{
//   printf("not palindrome");
//  }
// }

}
  

int factorial(int n)
{
  int f=1;
  while(n!=0)
  {
  f= f * n;
  n--;
  }
  return f;

 

}

int reverse(int n)
{
  int r=1,s=0;
  while(n!=0)
  {
    r=n%10; 
    s=s*10+r;
    n=n/10;
  }

  return s;
}

//find area of circle

float area(float r)
{

  float A;
  A= 3.14 * r * r;

return r;
}
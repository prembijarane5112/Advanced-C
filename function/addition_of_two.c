
#include<stdio.h>
void addition(); //declartion

int main()
  {
   addition(); //calling
  }

  void addition() //defination;
  {
    int a,b,c;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
     
    c=a+b;
    printf("Addition is:%d",c);
  }
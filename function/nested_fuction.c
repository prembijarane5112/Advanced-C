#include<stdio.h>
void first() ;  //declaration
void second(); //declaration
int main()
{
  printf("one");
  first(); //calling
  printf("two");
}
void first() //defination 
{
  printf("three");
  second();
  printf("four");
}

void second()  //defination 
{
  printf("five");
}

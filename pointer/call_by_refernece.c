#include<stdio.h>
#include<header.h> //created you header files 
/*
//call by value 
void display(int); //declaration 
int main()
 {
 
  int a=100;  //local of the main
  display(a); 
  printf("%d",a);
 }

 void display(int a) //local of the display
 {
  a=a+30;
 }

 */





//  /call by refernece

void display(int* );
int main()

{
  int a=100;
  display(&a); //call by refenrce
  printf("%d",a);
}



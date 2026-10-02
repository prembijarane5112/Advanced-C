//int global variale this varaible this  declaeed outside the function and access all the files
/*
#include<stdio.h>
int a=10; // global varaible 

void new(); //declaration 
int main()
{

  a=a+5;
  new(); //call
  printf("%d",a);

}

void new() //defination 
{
  a=a+15; //oytput is 30 bcz global variable declared a they accesss all program 
}

*/

/*
#include<stdio.h>
int a=10;  //global variable;
void new() ;  //declaration

int main()
{

  int a=5;
  a+=15;             //first priority is block local variable after this global vriablr in a=5 ; adding 5+15=> 20 output is 20 
  new();  //calling
  printf("%d",a); 

}

void new()
{
  a=a+20;   // in block access global variabel like a=10 ; and add 10+20 op is 30 print 30 
  printf("%d",a);
}

*/





#include<stdio.h>
void new(); //declaration 
int a=100; //local varaible 

int main()
{
 {
  int a=10; //global varaible ;
  a+=10;

 }
 a=a+10;
 new(); //callingt
printf("%d",a);
}

void new() //defination 
{
  a= a-50;
  printf("%d",a);
  a=a+20;
}
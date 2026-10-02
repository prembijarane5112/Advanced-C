//reverse string 
#include<stdio.h>
#include<string.h>

int main()
{
  char str[20], *p;
  printf("emnter string");
  scanf("%[^\n]",str);
 
  int i=strlen(str);  //length srirng;
  i--;
    p=&str[i];

    while( i>=0)
    {
 printf("%c",*p);
 --p;
 i--;
    }
}












/*

//print string using pointer
#include<stdio.h>
int main()
{
  char str[10], *p;
  printf("enter string");
  gets(str); //read string 

  p= str; //base adress


  while(*p!='\0')
  {
    printf("%u ",p);  //print address
  //  printf("%c ",*p);
   ++p;
  }

}

*/




























/*
//convt string lowercase to uppercase using pointer ;


#include<stdio.h>
int main()
{
char str[100], *ptr;
printf("enter string");
scanf("%[^\n]",str);
 ptr = str ; //stored ptr base address of str

 while(*ptr !=0) 
 {
  printf("%c ",(*ptr-32));
  ++ptr; //moves address by one position 
 }
}
 */
#include<stdio.h>
int main()
{
  printf("%c\n",'A');  //%c means print a single character;
  printf("%d %i\n",10,10);  // d and i is int and signed int only;

  printf("%o",8); // o is octal value print ;

   printf("%x %X %x\n",0xA,0xA,10) ;   //x is hexadecimal to print hexa value to lowercase like a b used x small lettewr to print uppercase print X

  printf("%u",255);  //u is unsigned int 

   printf("%f %F\n",2.0,2.0); //floating point decimal 

   printf("%e %E\n",1.2,1.2);  //e is value givem scientific notation 


   printf("%a %A\n",123.2,233.2);  //hexadecmial floating point

   printf("%g %G",1.210000,1.0);  // g is general compact floating value ;


   printf("%s","hello"); // print a string like sequnce of character;
   
    }
//wap to check no is palindrome or not 
//palindrome means no is reverse and forward also same like 121 reverse no 121 they same this palindrome 
 // palindrome->a number is reversed to equal to the original number;
#include<stdio.h>
int main()
{
  int num,lastdigit,rev=0,new;
  printf("enter number:");
  scanf("%d",&num);

  new= num; //bcz you comapring rev to orignal number;

  while(num !=0)
  {
    lastdigit= num %10; 
    rev = rev  *10 + lastdigit; 
    num = num /10; 
  }

  if( rev == new) //chek your reverse no is equal to main user entered  number 
  { 
    printf("palindrome number");   //no match print palidrome

  }

  else{
    printf("not palindrome");  //not match condotion print 
  }
}
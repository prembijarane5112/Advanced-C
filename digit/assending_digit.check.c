//check digit is asc or not like num is 1234 op ascending num->12533 op not ascending 

#include<stdio.h>
int main()
{
  int num,rem,next;
  int flag=0;
 printf("enter number:");
 scanf("%d",&num);

 while(num!=0)
 {
  rem = num % 10; 
  
  num/=10; 

  next= num %10 ; 

  if(next>=rem)

  {
    flag=1;
    break;
  }
 }

 if(flag==0)
 printf("no is ascending ");
 
 else
 printf("no is not ascedning order");
}

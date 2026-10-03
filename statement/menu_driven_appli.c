#include<stdio.h>

int main()
{
  int choice;
  int a,b,c;
  printf("------------menu----------");
   printf("\n 1.Addition\n 2.swap\n 3.max\n");
  
   printf("\nenter your choice:");
   scanf("%d",&choice);
 
   switch (choice)

   {
    case 1:
    printf("enter 2 no");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("addition is: %d",c);
   break;


   case 2: 
   printf("enter 2 no");
   scanf("%d %d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;

   printf("after swaping: %d %d",a,b);
   break;


   case 3:
   printf("enter 2 no:");
   scanf("%d %d",&a,&b);
   
   if(a>b)
      printf("max is %d",a);
       else
      printf("max is %d",b);
    break;

    default:
    printf("invalid");


   }


}
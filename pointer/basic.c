//pointer is the varaible they hold the address of another variable
#include<stdio.h>
int main()
{
  int a=10,*p;
  p=&a;
  ++*p; //increse in value by 1
  printf("%d %d ",a,*p);
 
 ++p; //only p not *p weite means address  incres by one

 printf("%d %d",a,*p);  //in that *p output is the garbage value l
}

















//   int a=10,*p,**r;
//    p =&a;
//    r=&p;   //**r means pointer to pointer  */
 
//    printf("value of a %d",a);   //a=10; 
//    printf("\n value of p %u",p); //suppose a address is 100 
//    printf("\n value of *p %d",*p); // point to a means ans 10;
//    printf("\n value of r %u",r);  //r hold address of p means  suppose address of p is 200;
//    printf("\n value of *r is %u",*r);  //r point to p means p store address of a means op 100
//    printf("\n value of **r is %d",**r);  // r point p and p point to a means point to point ans 10
  
//     ++**r; //change value of a incres a by one
//   printf("%d",**r);
  
//   //  ++*p;
//   // ++a;
// //   printf("value a  %d\n",a);
// //  printf("value of pter is:%d",*p);
//    // printf("value is %d\n",a);
//   // printf("address is %u",&a);
  

// }
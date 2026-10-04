#include<stdio.h>
int main()
{ 
  /*
  int i;
  for( i=0; i<=10;i++);

    printf("%d",i);
  
    */


  // int i=1;
  // while(i++<=10);
  // printf("%d",i);  //op is 12 



  int i=10;
  for(; i;)  // 0 par loop terminate hoga 
  {
 printf("%d ",i);  //op is 10 9 8 7 6 5 4 3 2 1
 i--;
  }
}
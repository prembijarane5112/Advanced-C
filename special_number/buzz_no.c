//buzz no means the number divisible by 7 and or which is end with 7 is called buzz
//107 buzzz no     42 buzz no  206 not buzz

#include<stdio.h>
int main()
{
  int num;
  printf("enter num");
  scanf("%d",&num);


  int rem=num%10;
  if(rem==7 ||num % 7 ==0)
  {
    printf("buzz no");
  }
 else
 printf("buzz noo");
  
}
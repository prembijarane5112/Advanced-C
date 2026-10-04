//wap to check armstrong number;
//armstrong-> a number who sum of cube of individual digit is equal to original number ;
//153: 1^3 + 5^3 +3^3 =1+125+27=153

#include<stdio.h>
int main()
{
  int num,lastdigit,sum=0,new;
  printf("enter number:");
  scanf("%d",&num);

   new = num;

  while(num !=0)
  {
     lastdigit= num %10;
       sum =  sum + (lastdigit * lastdigit * lastdigit);
      
       num= num /10;  
  }

  if(sum == new)
    printf("armstrong number:");
 
    else
    printf("not armstrong number:");

    return 0;
}


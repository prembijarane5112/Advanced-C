//wap to count of digit

#include<stdio.h>
int main()
{
  /*
  int num,lastdigit,count=0;
  printf("enter number:");
  scanf("%d",&num);

  while(num!=0)
  {
    lastdigit=num %10; //give last digit
    count++;
    num=num/10;
  }

  printf("count of digit is %d",count);


  */





  //wap to print even and odd count no

   int num,lastdigit,even_count=0,odd_count=0;
  printf("enter number:");
  scanf("%d",&num);

  while(num!=0)
  {
    lastdigit=num%10;
    
    if(lastdigit % 2==0)
      even_count++;

    else
    odd_count++;


    num=num/10; //delecte last digit ;
  }

  printf("even number  count is %d\n",even_count);
  printf("odd number count is %d",odd_count);

}
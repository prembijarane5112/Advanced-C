/*
#include<stdio.h>
int main()
{
  int num,count=0;
  printf("Enter the number:");
  scanf("%d",&num);

  for(int i=31;i>=0;i--)
  {

     if(num & (1<<i))
     {
      count++;
     }
}

printf("count is %d",count);
}


*/





//wap to get n number of bits from the given position

#include<stdio.h>
int main()
{
  int num,bits,pos;
  printf("Enter num bits and  from pos ");
  scanf("%d %d %d",&num, &bits, &pos);


   int get = (num & (1<<bits)-1);
     int res= res  << pos;
      
     

     printf("%d",res);

}
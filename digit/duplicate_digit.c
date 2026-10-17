//in digit check duplicate eleemnt exitst or not  12345 no duplicate  22335 duplicte using  frewquncy array
/*
#include<stdio.h>
int main()
{
  int num,rem,flag=0;
  printf("enter num");
  scanf("%d",&num);

  int count[10]={0};  //

  while(num!=0)
  {
    rem=num %10; //last digit 

    count[rem]++;  //count++ with rem positoon

    num=num/10;
  }

  for(int i=0; i<10;i++)
  {
    if(count[i]>1)
    {
        flag=1;
        break;
    }
  }

  if(flag==0)

    printf("not duplicate");
  
  else
  printf("duplicate");
}
  */





  //duplicate  element print from digit  123431  op->  1,3

#include<stdio.h>
int main()
{
  int num,rem;
  int count[10]={0};
  printf("enter number");
  scanf("%d",&num);

  while(num!=0)
   {
    rem=num %10;  //give last digit 

    count[rem]++;

    num/=10; //remove last digit 
   }

   //check and print duplicate digit 
   for(int i=0;i<10;i++)
   {
    if(count[i]>1)
    {
      printf("%d",i);
    }
   }
}


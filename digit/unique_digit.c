//wap to print unique digit in num like 123421 -> op 3 4 bcz they no is not repet 

#include<stdio.h>
int main()
{
  int num,rem;
  int count[10]={0};  //creat count 10 size array;

  printf("enter number:");
  scanf("%d",&num);

  while(num!=0)
  {
    rem=num%10;

    count[rem]++;

    num/=10;  
  } 

  //check unique
  for(int i=0; i<10;i++)
  {
     
    if(count[i] ==1)  //in array check which count only 1 means they unique
    {
      printf("%d ",i); //print only unique
    }

  }


}


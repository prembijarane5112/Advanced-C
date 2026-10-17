//in sigit 123334 ;which digit most frewquntyl repte in ew 3 repete 3 times;

/*
#include<stdio.h>
int main()
{
  int num,rem,max=0,digit=0;
  printf("enter number;");
  scanf("%d",&num);

  int arr[10]={0}; //all 10 idx 0 value store size is 10 bcz digit only 0-9

  while(num!=0)
  {
    rem=num % 10;
     arr[rem]++;
     num/=10;
  }

  for(int i=0;i<10;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      digit=i;
        
    }
  }
  printf("digit is %d ",digit);
   printf(" frequqncy is %d",max);
}


*/



//wap to print first non repeting digit   1123455  -> op 2;

#include<stdio.h>
int main()
{
  int num,rem;
  int count[10]={0};
  printf("enter number:");
  scanf("%d",&num);  //read num

  int new=num;
  //check count 
  while(num!=0)
  {
    rem= num %10; 

    count[rem]++;

    num/=10;
  }

  //check firt non repeting digit 

  while(new!=0)
  {
    rem=new %10;

    if(count[rem] ==1)
    {
      printf("first non repeting elements is %d",rem);
      break;
    }

    new/=10; 
  }

}





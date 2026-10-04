
  // 2->wap to sum of all digit

  #include<stdio.h>
  int main()
  {
  /*
  int num,sum=0,lastdigit;
  printf("enter number:");
  scanf("%d",&num);

  while(num!=0)
  {
lastdigit= num %10;
 sum+=lastdigit;
 num/=10;
  }


  printf("sum is %d:",sum);


*/


// 2-> wap to print sum of even and odd digit sepreately

  int num,sum_even=0,sum_odd=0, lastdigit,count=0;
printf("enter num:");
scanf("%d",&num);

 while(num>0)
 {
    lastdigit=num %10;
    if(lastdigit % 2 ==0) //even 
    {
      sum_even+=lastdigit;
      count++;
    }
    else
    {
      sum_odd+=lastdigit; 
      count++;
    }

    num=num/10;
 }

 printf("even digit sum is %d\n",sum_even);
 printf("odd ddigit sum is %d\n",sum_odd);
 printf("count of digit is%d",count);

  }




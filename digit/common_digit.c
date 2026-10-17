/* read two nummber from user and find the common digit in number 
num1 = 12345
num2 = 34567

Common digits:
3, 4, 5
*/

/*

#include<stdio.h>
int main()
{
  int num1,num2,rem,rev=0;
  int count[10]={0};

  printf("enter num1:");
  scanf("%d",&num1);

  printf("enter num2:");
  scanf("%d",&num2);

  // //check first no num1 count
  while(num1!=0)
  {
    rem=num1 %10; 
    count[rem]++;

    num1/=10; 
  }

  //match num1 to num2
  while(num2!=0)
  {
    rem= num2 % 10; 

    if(count[rem] >0) //match no
 {
    
     

     printf("%d",rem);

     count[rem]=0;  //bcz they repete in num2 same no they print 2 times
     
 }

 num2/=10;


  }
}


*/






//find the coomon digit count
/*

#include<stdio.h>
int main()
{
  int num1,num2,rem,ct=0;
  int count[10]={0};

  printf("enter num1:");
  scanf("%d",&num1);

  printf("enter num2:");
  scanf("%d",&num2);

  // //check first no num1 count
  while(num1!=0)
  {
    rem=num1 %10; 
    count[rem]++;

    num1/=10; 
  }

  //match num1 to num2
  while(num2!=0)
  {
    rem= num2 % 10; 

    if(count[rem] >0) //match no
 {
    
     ct++;

     count[rem]=0;  //bcz they repete in num2 same no they print 2 times
     
 }

 num2/=10;


  }

  printf(" count is %d",ct);
}

*/


/* check common digit with same frequcny 
num1 = 112233
num2 = 223311

Output:
Yes

Because:
1 → 2 times in both
2 → 2 times in both
3 → 2 times in both

*/



#include<stdio.h>
int main()
{
  int num1,num2,rem,flag=0;
  int count1[10]={0};
  int count2[10]={0};

  printf("enter num1:");
  scanf("%d",&num1);

  printf("enter num2:");
  scanf("%d",&num2);

  // //check first no num1 count
  while(num1!=0)
  {
    rem=num1 %10; 
    count1[rem]++;

    num1/=10; 
  }

  //match num1 to num2
  while(num2!=0)
  {
    rem= num2 % 10; 
 
     count2[rem]++;
      //match no

      num2/=10;
  }
    
  for(int i=0; i<10;i++)
  {
    
    if(count1[i]!=count2[i])
    {
      flag=1;
      break;
    }
  }

  if(flag==0)
  
    printf("same digit frequncy");
  
     else
     printf("no common frequncy");
 }



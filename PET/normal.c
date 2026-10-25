
// check whetehr no is power of 4

/*
#include<stdio.h>
int main()

{
  int num,found;
  printf("Enter num:");
  scanf("%d",&num);


  for(int i=1;i<=num;i=i*4)
  {
    if(i==num)
    {
    found=1;
    break;
    }
  }

  if(found==1)
  {
    printf("num is pow of 4:");
  }
  else
  {
  printf("no is not pow of 4:");
  }
}


*/




/* magic number
In C programming, a Magic Number is a number whose digits are repeatedly added until a single digit remains. If the final digit is 1, the number is called a Magic Number.
Example 1: 19 is a Magic Number
Step 1: Add the digits.

\(1+9=10\)

Step 2: Add the digits of 10.

\(1+0=1\)

Final result = 1, so 19 is a Magic Number.

*/



/*
#include<stdio.h>
int main()
{
  int num,rem,sum;
  printf("enter num:");
  scanf("%d",&num);

  while(num>9)  // bcz no greater than single lloop run
  {
  
    sum=0;

  while(num>0)
  {
    rem=num % 10;
     sum= sum+rem;  // they cacluate digit sum 
   
     num/=10;

  }

  num = sum;  // store num sum value 
}

printf("%d",num);
if(num==1)
{
  printf("magic number");
}

else
printf("not magic number:");
}

*/






// que3-> nth magical number
/*
A positive integer is magical if it is divisible by either a or b.

Given the three integers n, a, and b, return the nth magical number. Since the answer may be very large, return it modulo 109 + 7.

 

Example 1:

Input: n = 1, a = 2, b = 3
Output: 2
Example 2:

*/

#include<stdio.h>
int main()
{
  int num,a,b;
  printf("enter num a and b:");
  scanf("%d%d%d",&num,&a,&b);

  int count=0;
  int i=1;

  while(count!=num)
  {
    if(i % a ==0 || i % b==0)
    {
      count++;
    }

    i++;
  }

  printf(" output is:%d",i-1);

}


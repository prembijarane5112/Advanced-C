/* A Tech Number is a number that has an even number of digits and can be split perfectly down the middle into two equal halves. When you add those two halves together and square the sum, the result is exactly equal to the original numb
1. Count the digits: 2025 has 4 digits (which is an even number).
2. Split it into two halves: It splits into 20 and 25.
3. Add the two halves: \(20 + 25 = 45\)
4. Square the sum: \(45^2 = 45 \times 45 = \mathbf{2025}\)

*/


#include<stdio.h>
int main()
{
  int num,count=0,rem;
  printf("enter number:");
  scanf("%d",&num);
  
  int res=num;

  while(num!=0)
  {
  count++
  num/=10;
  }
  
   num=res;

  while(num!=0)
  {
    
  }

}
/* An evil number is a non-negative integer that has an even number of \(1\)s in its binary (base-2) representation
To determine if a number is evil, you convert it to binary and count the number of 1s.
• Example 1: The number 3
	• Binary representation: 11
	• Count of 1s: 2 (which is an even number)
	• Result: 3 is an evil number.
• Example 2: The number 5
	• Binary representation: 101
	• Count of 1s: 2 (which is an even number)
	• Result: 5 is an evil number.

  • The number 1: Binary is 1 ➔ 1 one (odd) ➔ Not Evil
• The number 2: Binary is 10 ➔ 1 one (odd) ➔ Not Evil

*/


#include<stdio.h>
int main()
{
  int decimal;
  int binary=0;
  int place=1;
  int rem,count=0;

  printf("enter  decimal number");
  scanf("%d",&decimal);

  while(decimal!=0)
  {
    rem=decimal %2;
    binary=binary+rem*place;
    place= place*10;
    
    decimal/=2;
  }

while(binary!=0)
 {
  rem=binary%10;
   if(rem==1)
   count++;
   binary/=10;
 }

 if(count %2==0)
 {
  printf("no is evil number");
 }
 else
 printf("not evil number:");
}

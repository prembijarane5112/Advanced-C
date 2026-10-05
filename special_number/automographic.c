/*  An automorphic number (sometimes called a circular number) is an integer whose square ends in the exact same digits as the number itself
• The number 25
	• Square: \(25^2 = 6\mathbf{25}\)
	• Result: The last two digits are 25, matching the original number.
• The number 76
	• Square: \(76^2 = 5,7\mathbf{76}\)
	• Result: The last two digits are 76, matching the original number.
A Counter-Example:
• The number 12
	• Square: \(12^2 = 1\mathbf{44}\)
	• Result: The last digits are 44, not 12. So, 12 is not an automorphic number
*/



#include<stdio.h>
int main()
{
  int num,count=0,n_count=0;
  printf("enter number");
  scanf("%d",&num);

  int square= num*num;
 int new=square;
 while(num!=0)
 {
  int rem= num%10; 
  n_count++;
  
  
 }
 //square count 
   while(square!=0)
   {
    int rem=square %10; 
    count++;
    square= square/10;
   }

}
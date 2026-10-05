/*
 An Armstrong number is a number that equals the sum of its own digits, where each digit is raised to the power of the total number of digits
 • 1-digit numbers: All single-digit numbers (0 through 9) are Armstrong numbers because \(a^1 = a\).
• 3-digit number (153): It has 3 digits, and \(1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153\).
• 3-digit number (371): \(3^3 + 7^3 + 1^3 = 27 + 343 + 1 = 371\).
• 4-digit number (1634): It has 4 digits, and \(1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634\)

 
 */


 #include<stdio.h>
 int armstrong(int);

 int main()
 {
  int num;
  printf("enter num");
  scanf("%d",&num);

  int ret= armstrong(num);
    if(ret==num)
    {
      printf("armstrong number");
    }
    else{
      printf("not armstrong number");
    }
}

 int armstrong(int num)
 {
  int count=0,rem,sum=0;
  int res=num;
  while(num!=0)
  {
   count++;
   num/=10;
  }
  
   num=res;  //res stored in num bcz after while loop num value is delete 0
  while(num!=0)
  {
      int mul=1;
   rem=num %10;
    
   for(int i=1; i<=count;i++)
   {
        mul = mul*rem;  //count time multiply 
   }
   sum=sum+mul;  //add this multiply in sum 
 
   num/=10;
  }
  
 return sum;

 }
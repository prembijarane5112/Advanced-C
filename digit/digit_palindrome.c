//check rearrqnge the number digit and check given no is palidrome or not

#include<stdio.h>
int main()
{
  int num,rem;
  int oddcount=0;
  int arr[10]={0};
  printf("enter number");
  scanf("%d",&num);


  while(num!=0)

 {
   rem= num %10; 
   arr[rem]++;

   num/=10;
 }

 //check palindrome
 for(int i=0; i<10;i++)
 {
  if(arr[i] % 2 !=0) //freq is odd no means no not palidrome 
    {
        oddcount++;
   }
 }

 if(oddcount>=1)
  printf("no is palindrome");

  else
  printf("no is not palidrome");
}
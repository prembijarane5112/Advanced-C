// Now flags tell printf() how you want those positions to look.
#include<stdio.h>
int main()
{
  //  1)   - Flag → Left Alignment 
 
  // printf("|%10d|", 25);   //op is    |        25|

  // printf("|%-10d|",25);      //  |25        |  // we used - 25 is alligned left 






   //    + Flag → Always Show Sign

  //  printf("+%d",25); 







   //Space Flag → Space for Positive Numbers



   //0 Flag → Fill With Zeros
   //Fill the unused numeric width with zeros instead of spaces

   printf("|%05d|",25);  // fill beofore 25 above 3 space they spaces fill with zero 
   
}
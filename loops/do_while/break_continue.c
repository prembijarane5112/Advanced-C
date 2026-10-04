//used break and continue statement in c 
//break is breaking the execution break used only 2 topic like 1) loop 2) switch case another not used break you used brek outherwise show eeror 
 //you break loop thats called abnormal termination 


#include<stdio.h>
int main()
{
  // for(int i=1;i<=10;i++)
  // {
  //   if(i==2)
  //   break;  //means i value 2 exit the loop op is 1  
  
  // printf("%d",i);
  // }




  //continue means skip the condition means program continue that condtion not print they used only looping statment 
   
  // for(int i=1;i<10;i++)
  // {
  //   if(i==5)
  //   continue;

  //   printf("%d",i);
  // }



  // que->print 1 to 25 all odd number 

  for(int i=1; i<=25;i++)
  {
    if(i%2==0)
    continue;

    printf("%d ",i);
  }
}

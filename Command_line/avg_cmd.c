//wap find the average of commnad line arguments

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
      int sum=0;
    
    for(int i=1; i<argc;i++)
    {
     //     printf("%s\n",argv[i]);
      
         sum += atoi(argv[i]);
        
    }
    
    printf("Average is %.1f",(float)(sum)/(argc-1));
    
}
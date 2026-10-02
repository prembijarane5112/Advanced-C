//fprintf used to print the data in the files normal printf means print data to console
//you have create student info like read roll no ,name and percentage in normal variable way 
 

//give data to user and store files
#include<stdio.h>
int main()
{
   int roll;
   char name[30];
    float per;

    //create files
    FILE *fptr= fopen("newdata.txt","w"); //create file

    if(fptr ==NULL)
    {
      printf("file not created"); // in fopen retunr null op is file not created;
    }

    else
    {
       //only read data from user 
    
       for(int i=0;i<2;i++)  //read multiple student data
       {
      printf("enter roll");
      scanf("%d",&roll);
        printf("enter name");
        scanf("%s",name);

        printf("enter percentage");
        scanf("%f",&per); 


         //read data user to store in the file  like newdata.txt location
         fprintf(fptr,"%d %s %f\n",roll,name,per);
    
       }
    fclose(fptr);  //close the files;
      printf("data print successfully in files");
  }

    
  
}
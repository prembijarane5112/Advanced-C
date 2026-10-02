//read data from the files in diffeent types of data like int char and float 
//used the fscanf
//sytx for  fscanf(file pointer, format specifier, no of argemune);
#include<stdio.h>
int main()
{
  int roll;
  char name[20];
  float per;
 
  //create ad open files
  FILE *fptr= fopen("newdata.txt","r");

  if(fptr == NULL)
  {
     printf("file not created"); 
 }

 else{
      //  scanf("%d %s %f",&roll,name,&per); //read data from console ; //diffence scanf and fscanf  

       for(int i=0; i<2;i++) //read 2 student data 
       {
     fscanf(fptr, "%d %s %f", &roll ,name,&per);   //read data from files 

     printf(" %d %s %f\n",roll,name,per);  //print data to console;

       }
 }

 fclose(fptr); //close the files, 
}
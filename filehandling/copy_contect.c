//wap to copy contenct(data) one file to another files;

#include<stdio.h>
int main()
{
  FILE *fptr= fopen("file.txt","r"); 
  FILE *fptr2=fopen("data.txt","w");
  char ch;

  if(fptr ==NULL || fptr2==NULL)
  {
    printf("filee not created");
    return -1;
  }

  else
  {
  do
  {
  ch=fgetc(fptr); //read char from fpter meand filr.txt read character by character;
   
   fputc(ch,fptr2); // putc read to ch and put to fpter2 location means data.txt files 
  } while(ch!=EOF);    //loop runs until char address not equal end of files;
  
  fclose(fptr);  //close first files
  fclose(fptr2);   //close second files; 
  printf("copied succesfully");
  }
}
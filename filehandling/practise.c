//// write data into the file
#if 0
#include<stdio.h>
int main()
{
   FILE *fp = fopen("data.txt","w");
   if( fp ==NULL)
   {
    printf("file not created");
    return 1;
   } 
  
   fputs("hello world\n",fp); 
   fputs("welcome to c programming",fp); 

   fclose(fp);  // cloase 
   
  printf("Data written succesfuulyy");
}

#endif 


/* read the data in the samem files 
Read data from a file using fgetc().

Write a C program to:
1. Open data.txt in read mode.
2. Read the file character by character.
3. Display all characters on the console.
4. Close the file.
5. Handle file opening errors.

*/



#if 0
#include<stdio.h>
int main()
{
  FILE * fp = fopen("data.txt","r");
  int  ch;
  if(fp ==NULL)
  {
    printf("file not created");
    return 1;
  }

   while(( ch= fgetc(fp)) !=EOF)
   {

    printf("%c",ch);
   }

   fclose(fp);
}

#endif 







//Write a C program to count the total number of characters present in data.txt.

/*
#include<stdio.h>
int main()
{
  int count=0;
  int ch;
  FILE *fp = fopen("data.txt","r");
  if(fp ==NULL)
  {
    printf("file not created");

    return 1;
  }

   while((ch = fgetc(fp))!= EOF)
   {
    count++;
   }

   printf("count is %d",count);

   fclose(fp);
}

*/





//copy the content one files to another

#if 0
#include<stdio.h>
int main()
{

  FILE *fp= fopen("data.txt","r");
  FILE *fp2= fopen("copy.txt","w");
  int ch;
  if(fp == NULL)
  {
    printf("file not created");
    return 1;
  }

  while((ch = fgetc(fp))!=EOF)
  {
     
  }


}

#endif 





// Create a file named text.txt and add some content to it and Print the contents.

#include<stdio.h>
int main()
{
  FILE *fp= fopen("text.txt","w");
 
  int ch;

  if(fp ==NULL)
  {
    printf("file not opend");
    return 1;
  }

  fprintf(fp,"hello prem");



   // print content 

    
   while((ch = fgetc(fp))!=EOF)
   {
     putc
   }

  fclose(fp); 

  printf("added data");
}
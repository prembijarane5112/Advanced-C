//program for read data in file
#include<stdio.h>
int main()
{
  char ch;
   FILE *fp=NULL;
   
   fp = fopen("file.txt","r");
   if(fp==NULL) //check file create or not 
   {
    printf("file not opened");
   }
   else{
    while(ch!=EOF)// 
    {
       ch=fgetc(fp);
    printf("%c",ch);
}
   }
}
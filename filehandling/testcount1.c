//program for count space and character from filee also lines;
#include<stdio.h>
int main()
{

  FILE *fptr=fopen("file.txt","r");
  char ch;
  int sc=0,cc=0,lc=0;   //sc means space count cc means character count; lc means lines count;
  if(fptr ==NULL)
   printf("file not created..");
   else{
    do
    {
         ch=fgetc(fptr);
         if(ch==' ')

          sc++;  //space count  ++;

          if(ch =='\n')

          lc++;    //lines count ++;
          else

          cc++;  //character count ++;

    } while(ch!=EOF);
    
    printf("total character is:%d\n",cc);
    printf("space is %d\n",sc);
    printf("lines count is:%d",lc);

   }
}
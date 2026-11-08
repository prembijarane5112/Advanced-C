// using ftell find the specific position idx for the files

#if 0
#include<stdio.h>
int main()
{
  FILE *fp;
  long int pos;

  fp = fopen("file2.txt","w");
  if(fp ==NULL)
  {
    printf("file not opend");
    return 1;
  }

  fprintf(fp,"hello");
   
  pos= ftell(fp);

  printf("current position  %ld\n",pos);

  fclose(fp);

}

#endif






// seek() fun used to remove file position to specific location
// 3 types of seek  1) seek_set  2) seek_curl  3 ) seek _end



 
#include<stdio.h>
int main()
{
 
  FILE *fp; 
 char ch;
  fp = fopen("file2.txt","r");
  if(fp==NULL)
  {
    printf("files not opend");
    return 1;

  }

  // fseek(fp,3,SEEK_SET);  // set the pointer position 


  // fseek(fp,6,SEEK_CUR);   // pointer moves the sepcific positon

 
  // fseek(fp,-23,SEEK_END);   // moves to end of the files 

   rewind(fp);

  ch = fgetc(fp);


  printf("%c",ch);


  fclose(fp);


}
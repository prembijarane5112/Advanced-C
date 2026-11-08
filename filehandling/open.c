 // in files  fopen() function  used and perfomrm read write and append operation in fopen


 //read mode 
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
  FILE *fp;
  char ch;

  fp = fopen("data.txt","r"); // read mode 
 
  if(fp ==NULL)
  {
    printf("files not open");
    return 1;
  }

  while( (ch = fgetc(fp))  != EOF)  
  {
    printf("%c",ch);
  }


  fclose(fp);

  return 0;
 }
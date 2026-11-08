#if 0
//program for read data in file
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char ch;
   FILE *fp=NULL;
   
   fp = fopen("data.txt","r");
   if(fp==NULL) //check file create or not 
   {
    printf("file not opened");
    return 1;
   }
   else{
    while(ch!=EOF)// 
    {
       ch=fgetc(fp);
    printf("%c",ch);
}
   }
}



#endif 




//read line by line 
/*
#include<stdio.h>
int main()
{
   
  FILE *fp;
  char line[50];  // create array 

  //open file
  fp = fopen("pre.txt","r");  //read mode

  if(fp== NULL)
  {
    printf("file not opened");
    return -1;
  }


  while(fgets (line,sizeof(line),fp)  != NULL)  // read string line by line 
  {
  printf("%s",line);
  }

  fclose(fp);  

  return 0;
}


*/



// write a line by write



#if 0
#include<stdio.h>
int main()
{
  FILE *fp;

  fp = fopen("data.txt","w");  //create files  in write mode 
  if(fp ==NULL)
  {
    printf("files not created");
    return -1;
  }

  fputs("hello everyone\n",fp);
  fprintf(fp,"hello\n");
  fprintf(fp,"raj\n");
  fprintf(fp,"ajay\n");

  fclose(fp);

  printf("data write succesfully");

  return 0;
}

# endif





#if 0

  //apppend mode 

  #include<stdio.h>
  #include<stdlib.h>
  int main()
  {
    FILE *fp=fopen("data.txt","a");

    if(fp == NULL)
    {
      printf("file not created");
      return 1;
    }

    fputs("hello akaky\n",fp);
    fputs("emertex",fp);
fputs("pranju\n",fp);

 fclose(fp); 
 printf("file append succesfully");

    return 0;

  }


  #endif 












   // write the daya using the fwrite()

   #if 0

   #include<stdio.h>
   int main()
   {
      
    
    FILE *fp = fopen("write.txt","w");
    
    char str[]="prem jaaat";

    if(fp == NULL)
    {
      printf("files not created");
      return 1;
    }

    fwrite(str,sizeof(char),sizeof(str),fp);

    fclose(fp);

    printf("added succesfully");
   }
  

   #endif 








   //    using fread read content in the files



   #include<stdio.h>
   int main()
   {
    FILE *fp;
    char str[40];
    fp = fopen("file.txt","r");

    if(fp ==NULL)
    {
      printf("files not opended");
      return 1;

    }

    fread(str, sizeof(char),sizeof(str),fp);

    str[11]='\0';
 
    //  fclose(fp);
     printf("%s\n",str);


     printf("success");
     fclose(fp);
   }
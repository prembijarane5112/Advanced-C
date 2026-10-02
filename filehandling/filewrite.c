 //how to write data in the files;
#include<stdio.h>
int main()
{
 FILE *fp=NULL;
 char ch;
 fp= fopen("file.txt","w");//wirte mode;
 if(fp ==NULL)
 {
  printf("file not created");
 }
 /*
 //read one character;
 else{
        printf("entwr character:");
        ch=getchar();
        fputc(ch,fp);
        printf("\n file created");
      
 }
        */



        //read a string 

        else{
        printf("entwr string:");
        while(1)
        {
        ch=getchar(); //read 1 character 
       
        if(ch =='0') break; //if user enter 0 to exit the loop meas not read character 

        fputc(ch,fp);  //put character in fp location
       
        }

         printf("\n data added");
}
}
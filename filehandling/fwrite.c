#include<stdio.h>
   int main()
   {
      
  
    FILE *fp = fopen("write.txt","w");
     int a=10;
    if(fp == NULL)
    {
      printf("files not created");
      return 1;
    }

    fwrite(&a,sizeof(int),sizeof(a),fp);

    fclose(fp);

    printf("added succesfully");
   }
  
#include<stdio.h>
int main(int argc, char *argv[])
{
  printf("CLA is %d\n ",argc);

  /*
  for(int i=0;i<argc;i++)
  {
  printf("%s\n",argv[i]); 
}

*/




//method 2->  
int i=1;
while(argv[i] !=NULL)
{
  printf("%s\n",argv[i++]);
}


printf("%s\n",argv[2][1]);
}
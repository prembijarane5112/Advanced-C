//initlize a structure

#include<stdio.h>
 
struct student  //name of datatype
{
  int id;
  char name[20];   //memeber of structure
  float per;
};   // declaration end  memeory not aalocate

int main()
{
  //  struct  student s1;    //s1 is variable type of struct student
  
  //inialization 

  struct student s1={101,"prem",43.5};  //inialization 
   
  //  printf("%zu\n",sizeof(struct  student));  //sturctur size depend of memeber argmeune
  //   printf("%zu",sizeof(s1));
   
  //  s1.id=101;
  //  s1.name="prem";
  //  s1.per=343.4; 
   
  printf("%d %s %f",s1.id,s1.name,s1.per); //print 


}
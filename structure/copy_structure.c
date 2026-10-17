//copy onr structur member data to another

#include<stdio.h>
struct student  //structure name datatype
{
  int id;
  char name[20]; //memeber 
  float per;
};

int main()
{
  struct student  s1={101,"ram",444};  //inialization
  
  struct student s2;

  //copy s1 data to s2 and prin
  s2= s1; 

  printf("%d %s %f",s2.id,s2.name,s2.per);

}
//address of struutr mremeber;

#include<stdio.h>
 
struct student 
{
  int id;
  char name[30];
  float per;

};

int main()
{
   struct  student s1={101,"ram",24.5};
  
printf("Struture starts at %p\n", &s1);
printf("Member id is at %p\n", &s1.id);
printf("Member name is at %p\n", s1.name);
printf("Member address is at %p\n", s1.per);
}
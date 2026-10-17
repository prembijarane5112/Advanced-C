
//sturct using pointer
#include<stdio.h>
struct  student
{
  int id;
  char name[20];
  float per;
};

void data(struct student *s)
{
  s->id=101;
 
  printf("%d",s->id);
}

int main()
{
  struct student s1; // delcaration 

  data(&s1); 
}
//structur using function  //pass by value

#include<stdio.h>

struct student
{
  int id;
  char name[20];
  float per;
};

void data(struct student s)
{
  s.id=10;
  printf("%d",s.id);
}

int main()
{
  struct student s1;
  
  data(s1);
}

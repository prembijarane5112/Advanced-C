void display(int *p)
{
  *p= *p+10;  //direct access address and change original value
}

void swap(int *a ,int *b)
{
  int c;
  c=*a;
  *a = *b;
  *b = c;
}
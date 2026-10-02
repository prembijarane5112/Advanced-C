//they create my header files
//all th global function 
int addition(int a, int b)
{
  int c;
  c=a+b;
  return c;
}

int reverse(int n)
{
  int r,s=0;
  while(n!=0)
  {
    r= n %10;
    s= s*10 + r;
    n = n/10;
  }

  return s;
}


int maxvalue(int a,int b)
{
  if(a>b)
  return 1;
  else
  return 0;
}

int factorial(int n)
{
  int f=1;
  while(n!=0)
  {
    f= f*n;
    n--;
  }

  return f;
}
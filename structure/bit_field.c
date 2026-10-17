
#include<stdio.h>
 
struct  nibble
{
  unsigned char lower;
  unsigned char upper;
};

int main()
{
  struct  nibble n;

  // printf("%zu\n",sizeof(n));

  n.lower=0x0A;
 n.upper=0x02;
  printf("%zu\n",n.lower);
  printf("%zu",n.upper);
}

//wap to read no is hexdecimal and cvt to binart

#include<stdio.h>
int main()
{
  int hex;
  printf("enter hexadecimal no");
  scanf("%X",&hex); //read hexa

  printf("binary equaivalent of 0x%X is :",hex);

  for(int i=sizeof(int)*8-1; i>=0;i--)
  {
    printf("%d",(hex>>i)&1);
  }

  return 0;
}
//A length modifier modifies the type associated with the conversion. For example, X means hexadecimal integer, while llX
// means hexadecimal integer using long long

#include<stdio.h>
int main()
{
  // printf("%hx", 0xFFFFFFFFu);   //hx means h menas short and x means integer ans short  integer 
// printf("%lX", 0xFFFFFFFFUL);   //lx menas long integer 

// printf("%llx",0xFFFFFFFFFFFFFFFFULL); // llx menas long long  unsigned integer 

printf("%Lf", 1.23456789L); // long double bcz f float convt to double bcxz you write L for last 

}
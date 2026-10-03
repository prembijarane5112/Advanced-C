#include<stdio.h>
int main()
{
  /*
  int a=23;
  printf("%5d",a); //  "Give this integer at least 5 spaces/positions." means 23 is 3 spaces + 23  above 23 dd 3 spacess;
           ││
           │└── d = integer
           └─── 5 = width
*/
/*
 printf("%3d\n",100);
 
 printf("%3d\n",1000);  //move 3 but 1000 is 4 dgit means size incres 

 printf("%10s\n","hello");

*/




//Dynamic width: %*specifier
/*
int w=5;
printf("%*d",w,1);
        %*d
        │││
        ││└── d = print integer
        │└─── * = width comes from argument
        └──── % = format starts

        w = 5 → width
        1 = value

        */


    
      int w;
printf("Enter width: ");
scanf("%d", &w);

printf("%*d\n", w, 25);


//width + precsion 
  /* 
printf("|%8.2f|", 12.3456);
    //  %8.2f
        │ │ │
        │ │ └── f = floating point
        │ └──── .2 = precision
        └────── 8 = width


        */




           }
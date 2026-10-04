/*
*
* *
* * *
* * * *
* * * * *

*/


 #include<stdio.h>
 int main()
 {
// {
//    for(int i=0; i<5;i++)
//   {
//     for(int j=0;j<=i;j++)
//     {
//       printf("*");
//     }
    
//     printf("\n");
// }
// }


/*


/* 
1
2 2 
3 3 3
4 4 4 4
5 5 5 5 5 
*/

// #include<stdio.h>
// int main()
// {
//   for(int i=1;i<=5;i++)
//   {
//     for(int j=1; j<=i;j++)
//     {
//       printf("%d ",i);
//     }

//     printf("\n");
//   }
// }



// /*
// 1            
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 


// */


// #include<stdio.h>
// int main()
// {
//   for(int i=1;i<=5;i++)
//   {
//     for(int j=1; j<=i;j++)
//     {
//       printf("%d ",j);
//     }

//     printf("\n");
//   }
// }




/*

A 
A B 
A B C 
A B C D 
A B C D E 


*/

// #include<stdio.h>
// int main()
// {
  
// for(int i=1;i<=5;i++)
// {
//   char ch='A';
//   for(int j=1; j<=i;j++)
//   {
//     printf("%c ",ch);
//     ch++;

//   }

//   printf("\n");
// }
// }












/*
A 
B C 
D E F 
G H I J 
K L M N O 


*/



/*
  char ch='A';
for(int i=1;i<=5;i++)
{

  for(int j=1; j<=i;j++)
  {
    printf("%c ",ch);
    ch++;

  }

  printf("\n");
}
}

*/






/*

* * * * * 
* * * *
* * *
* * 
*

*/

/*

for(int i=5;i>=1;i--)
{
  for(int j=1;j<=i;j++)
  {
    printf("*");
  }
  printf("\n");
}

 }

 */




 /*
 1 2 3 4 5
 1 2 3 4
 1 2 3 
 1 2 
 1
 */

 /*
 for(int i=5;i>=1;i--)
 {
  for(int j=1;j<=i;j++)
  {
    printf("%d",j);
  }
  printf("\n");
 }
}

*/




/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4 
5 

*/

for(int i=1;i<=5;i++)
{
  for(int j=5;j>=i;j--)
  {
    printf("%d",j);
  }
  printf("\n");
}
 }
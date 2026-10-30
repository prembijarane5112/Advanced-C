/*

 Daily Temperature Analysis

Write a program to dynamically allocate memory for N integers representing the daily temperatures recorded over N days. Find and display the highest and lowest temperatures.

Test Case 1:
Input:
```text
Enter number of days: 5
Enter temperatures: 32 35 29 38 31

Output:
```text
Highest temperature: 38
Lowest temperature: 29

 


 #include<stdio.h>
 #include<stdlib.h>

 int main()
 {
  int n;
  printf("Enter number of days:");
  scanf("%d",&n);

   int *ptr=calloc(n,4);  //memeory crated;

   if(ptr==NULL)
   {
    printf("memeory not allocated:");
    return -1;
   }

   printf("Enter %d Days Temperature:",n);

   for(int i=0;i<n;i++)
   {
     scanf("%d",(ptr+i));
   }

   int highest= *(ptr+0);
   int lowest=  *(ptr+0);

   for(int i=0;i<n;i++)
   {
    if((*(ptr+i)) > highest)
    {
      highest= *(ptr+i);
    }

    else if((*(ptr+i)) < lowest)
    {
      lowest= *(ptr+i);
    }
   }


   printf("highest temperature is:%d\n",highest);
   printf("lowest temperature is %d",lowest);


    free(ptr); //free memroy

 }






    Student Marks Analysis**

Write a program to dynamically allocate memory for N integers representing the marks scored by students in an examination. Calculate the class average and count the number of students who scored above average.

Test Case 1:
Input:
```text
Enter number of students: 5
Enter marks: 80 60 90 40 70
```
Output:
```text
Average marks: 68.00
Students above average: 3

 


 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
  int N,sum=0,count=0;
  printf("Enter Numbers of students:");
  scanf("%d",&N);

 //allocated memeory 

  int *ptr= calloc(N,4);
  
  if(ptr==NULL)
  {
    printf("memory not allocated:");
    return -1;
  }

  // read
  printf("enter marks:");

  for(int i=0;i<N;i++)
  {
    scanf("%d",(ptr+i));

    //caluclate sum also
    sum= sum + (*(ptr+i));
  }

     float avg= (sum/N);

     //check how many studnet marks greater than avg
   
     for(int i=0;i<N;i++)
     {
      if(*(ptr+i) > avg)
      {
        count++;
      }
     }



     printf("Average marks: %.2f\n",avg);
     printf("Student above Average: %d",count);


     free(ptr);   // release the memory 

 }


 
 













 
 Write a program to dynamically allocate memory for N integers representing the prices of products. Read the prices and calculate the total bill amount.

Test Case 1:
Input:
```text
Enter number of products: 4
Enter prices: 100 250 150 500
```
Output:
```text
Total bill amount: 1000
```

Test Case 2:
Input:
```text
Enter number of products: 3
Enter prices: 50 75 125
```
Output:
```text
Total bill amount: 250






#include<stdio.h>
#include<stdlib.h>
int read_and_sum(int *ptr,int); 
int main()
{
  int N;
  int *ptr= NULL;
  printf("Enter Numbers of Product:");
  scanf("%d",&N);
 
  ptr= (int *)calloc(N,4);   //create memeory dynamicaally
     if(ptr==NULL)
     {
      printf("meemory not allocated:");
      return -1;
     }

      int res=read_and_sum(ptr,N);
      printf("Total Bill amount: %d",res);
  }

  int  read_and_sum(int *ptr,int N)
  {
    int sum=0;
    printf("Enter Prices:");

    for(int i=0;i<N;i++)
    {
      scanf("%d", (ptr+i));
      
      sum= sum+ (*(ptr+i));
      
    }

    return sum;
  }

  
  










  Write a program to dynamically allocate memory for a string containing a person's full name. Read the name and display the number of characters in it, excluding spaces and the null character.

Test Case 1:
Input:
```text
Enter name: Poomani Krishna
```
Output:
```text
Number of characters: 13
```

Test Case 2:
Input:
```text
Enter name: Ram
```
Output:
```text
Number of characters: 3

  
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *ptr= calloc(20,1);
  if(ptr==NULL)
  {
    printf("memeory not allocated:");
    return -1;
  }

   printf("Enter your NAME:");
   scanf("%[^\n]",ptr);

   //check how many char

    char i=0,count=0;

    while(*(ptr+i) !='\0')
    {
      if( (*(ptr+i))!=' ' )
      {
      count++;
      }
      
      i++;
    
    }
   
    printf("Numbers of character  %d",count);


    free(ptr);  //release memeory 

}










  Monthly Expense Tracker**

Write a program to dynamically allocate memory for N integers representing the monthly expenses of a person. Allow the user to add expenses for additional months by resizing the memory using realloc(). Display all expenses and the total expenditure.

Test Case 1:
Input:
```text
Enter initial number of months: 3
Enter expenses: 5000 6000 4500
Enter additional months: 2
Enter additional expenses: 7000 5500
```
Output:
```text
Monthly expenses: 5000 6000 4500 7000 5500
Total expenditure: 28000




#include<stdio.h>
#include<stdlib.h>
int main()
{
  int N,N1,sum=0;
  printf("Enter initial number of month:");
  scanf("%d",&N);

  int *ptr= calloc(N,4);  // allocate memeory dynamicaly
  if(ptr==NULL)   //check memeory allocated or not 
  {
    printf("Memroy not allocated:");
    return -1;
  }

  //read expednses 
  printf("Enter Expesnes:");

  for(int i=0; i<N;i++)
  {
    scanf("%d",(ptr+i));
  }

  printf("Enter additional month:");
  scanf("%d",&N1);

    int *temp= realloc(ptr,(N + N1*sizeof(int)));  //reallocated means incres the size
     if(temp==NULL)
     {  
      printf("Memroy not allocatd:");
      free(temp);

    }
     ptr= temp; 

    printf("Enter additional expesne:");
    for(int i=N;i<N+N1;i++)
    {
          scanf("%d",(ptr+i));
    }


    //print month expses
    printf("Monthly expense:");

    for(int i=0;i<N+N1;i++)
    {
      printf("%d ",*(ptr+i));
      sum= sum + *(ptr+i);
    }

    printf("\nTotal expenture: %d",sum);


      free(ptr);   // relese the memroy 
}


*/


/*
 Merge Two Batch Marks**

Write a program to dynamically allocate memory for two arrays representing the marks scored by two different batches of students. Merge both arrays into a third dynamically allocated array and display the combined marks.

Test Case 1:
Input:
```text
Enter number of students in Batch 1: 3
Enter marks: 70 80 90
Enter number of students in Batch 2: 2
Enter marks: 60 85
```
Output:
```text
Combined marks: 70 80 90 60 85
```

Test Case 2:
Input:
```text
Enter number of students in Batch 1: 2
Enter marks: 45 55
Enter number of students in Batch 2: 3
Enter marks: 65 75 85
```
Output:
```text
Combined marks: 45 55 65 75 85

*/


  #include<stdio.h>
  #include<stdlib.h>
  void read(int*,int);
  void merge(int*,int*,int,int);
  int main()
  {
    int B1,B2;
    printf("Enter NO of students in Batch1:");
    scanf("%d",&B1);

    int *ptr1= calloc(B1,4); 
  

    if(ptr1==NULL)
    {
      printf("meneory not allocated:");
      return -1;
    }

      read(ptr1,B1);  //read batch 1 student marks

      printf("Enter no of students batch 2:");
      scanf("%d",&B2);

      int *ptr2= calloc(B2,4);
      if(ptr2==NULL)
      {
        printf("no memeory allocated:");
        return -1;
      }

      int t_size= B1+B2;

      
    
      read(ptr2,B2);
    merge(ptr1,ptr2,B1,B2);

  }

  void read(int *ptr1,int B1)
  {
    printf("Enter marks:");

    for(int i=0; i<B1;i++)
    {
      scanf("%d",(ptr1+i));
    }
  }


  void merge(int *ptr1,int*ptr2,int B1,int B2)

  {
    int *merge= calloc(B1+B2,4);

    int j=0;
    for(int i=0;i<B1;i++)
    {
      *(merge+j) = *(ptr1+i); 
      j++;
    }

    
    for(int i=0;i<B2;i++)
    {
      *(merge+j)= *(ptr2+i);
    }



    //print mege
    for(int i=0;i<B1+B2;i++)
    {
      printf("%d",*(merge+i));
    }
  }
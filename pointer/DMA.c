//diffrence bwtwenn static and dynamic memeory 

#include<stdio.h>
#include<stdlib.h>
int main()
{

  //static memeory allocatino

  /*
  int a[400],n,i;
  printf("Enter n");
  scanf("%d",&n);   // in static in above you create 400 size memeroy and you write n for 20 you write 10 element but another 390 element are wastage  they drawback

  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  //print
  for(int i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }

  */



  //malloc calloc 


  int n,*ptr;
  printf("Enter n:");
  scanf("%d",&n);

  ptr =( int*)malloc(sizeof(int)* n);  //malloc create memeory in sigle block  assume n=4  4*4=16 byte allocate in single bloc kaddress
   int *ptr2= calloc(sizeof(int),5); // calloc allote continueous memeory in abvoe calloc allocate 5 block each block size is 4
   


  for(int i=0;i<n;i++)
  {
    scanf("%d",(ptr+i));
  }


  for(int i=0;i<n;i++)
  {
    printf("%d",*(ptr+i));
  }
}








  /*


  int n,i;
  printf("Enter n");
  scanf("%d",&n);   

  int *a=malloc(n*sizeof(int));  //dynamic memory  they create runtime as per user requirement
  // int ar=(int*)(malloc(n*sizeof(int)));   //same as both 

  for( i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  //print
  for( i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }


  free(a);  //free the array

}


*/


































//dynamic memeory allocation practise 
/*
. Sum of N Integers Using `malloc()`**

Write a C program to read the number of elements `N` from the user. Dynamically allocate memory to store `N` integers using `malloc()`. Read the integers, calculate their sum, and display the result.

**Requirements:**
- Allocate memory based on the user's input.
- Check whether memory allocation is successful.
- Release the allocated memory using `free()`.

*/


/*

#include<stdio.h>
#include<stdlib.h>

int read(int*,int);
int sum_of(int *ptr,int size);

int main()
{
  int size;
  printf("Enter size:");
  scanf("%d",&size);

  int *ptr = malloc(size*sizeof(int));  //   menas user enter size 4 -> 4*4=16 byte allocate
  if(ptr == NULL)
  {
    printf("Memory not allocate");
    return -1;
  }

    int ret=read(ptr,size);  //call read 
  // int ret= sum_of(ptr,size);  //cal
  printf("sum is:%d",ret);


  free(ptr) ;  //release the memroy 
}

 int  read(int *ptr,int size)
 {
    int sum=0;
   for(int i=0;i<size;i++)
   {
    scanf("%d",(ptr+i));
      sum+= *(ptr+i);
   }

   return sum;
 } 

 

 */




 /*
 Store and Display N Integers Using `calloc()`**

Write a C program to read `N` integers from the user and store them in dynamically allocated memory using `calloc()`.
 Display all the elements and verify the initial values of the allocated memory before accepting user input.


 
 */



 /*

 #include<stdio.h>
 #include<stdlib.h>
 void print(int*,int);
 void read(int*,int);
 int main()
 {
  int N;
  printf("Enter n:");
  scanf("%d",&N);

  int *ptr=calloc(N,sizeof(int));
  if(ptr ==NULL)
  {
  printf("memory not allocate:");
  return -1;
  }
   
  printf("Before allocation memory:\n");
  print(ptr,N);
  read(ptr,N);
  printf("after allocatino memory");
   print(ptr,N);


   free(ptr);  //relse memeory 
 }
 void read(int *ptr,int size)
 {
  printf("Enter %d elements:\n",size);
  for(int i=0;i<size;i++)
  {
    scanf("%d",(ptr+i));
  }
 }
 void print(int *ptr,int size)
 {
  for(int i=0;i<size;i++)
  {
    printf("%d ",*(ptr+i));
  }
 }




 */






 // Find the Largest Element Using Dynamic Memory Allocation**



 /*
 #include<stdio.h>
 #include<stdlib.h>
void read(int*,int );
int larget(int*,int);


 int main()
 {
  int size;
  printf("Enter size");
  scanf("%d",&size);

  if(size<0 || size==0)
  {
   printf("invalid size");
   return -1;
  }

  int *ptr= malloc(size*sizeof(int));
  if(ptr==NULL)
  {
    printf("memeory not allocated");
    return -1;
  }

    read(ptr,size);  
   int res = larget(ptr,size);
   printf("Largest value is:%d",res);

   free(ptr);

 }

 void read(int *ptr,int size)
{
  printf("Enter %d elements:",size);
  for(int i=0;i<size;i++)
  {
    scanf("%d",(ptr+i));
  }
}

int larget(int *ptr,int size)
{
  int large= *(ptr);  //base starting ptr value
  for(int i=0;i<size;i++)
  {
    if( (*(ptr+i)) >large)
    {
      large= *(ptr+i);
    } 
  }

  return large;
}




*/









/*    Resize an Array Using `realloc()`**

Write a C program to:
- Read an initial size `N` and dynamically allocate memory for `N` integers using `malloc()`.
- Read and display the elements.
- Ask the user for a new size `M`, where `M` is greater than `N`.
- Resize the allocated memory using `realloc()` to store `M` integers.
- Read the additional `M - N` integers.
- Display all `M` elements.

 
*/



/*
#include<stdio.h>
#include<stdlib.h>
void read(int*,int);
void print(int*,int);
int main()
{
  int N,M;
  printf("Enter n");
  scanf("%d",&N);

  int *ptr= malloc(N*sizeof(int));  // memeory allocated
  if(ptr == NULL)
  {
    printf("memory not allocated");
    return -1;
  }

  read(ptr,N);
  print(ptr,N);


  printf("\nenter new size :");
  scanf("%d",&M);

  if(M < N)
  {
  printf("invalid");
   return -1;
  }

  // free(ptr);
 
   int *ptr2 =realloc(ptr, M*sizeof(int));

   if(ptr2==NULL)
{
  printf("memeory not allocated");
  free(ptr2);
  return -1;
}

 ptr= ptr2;  // stored ptr2 address to ptr 


   read(ptr+N,M-N);

   print(ptr,M);  //print ptr 2 

   free(ptr);  // free ptr
}

void read(int *ptr,int size)
{
  printf("Enter %d elements:",size);

  for(int i=0;i<size;i++)
  {
        scanf("%d",(ptr+i));
  }
}

void print(int *ptr,int size)
{
  printf("your element:\n");
  for(int i=0;i<size;i++)
  {
    printf("%d ",*(ptr+i));
  }
}


*/












/*
  Remove an Element from a Dynamically Allocated Array**

Write a C program to dynamically allocate memory for `N` integers and read the elements from the user.

Accept an index from the user and remove the element at that index by shifting the remaining elements to the left. Use `realloc()` to reduce the allocated memory to hold `N - 1` integers.

Display the array after deletion.


*/


/*


#include<stdio.h>
#include<stdlib.h>

void read(int *,int);
void remove_element(int*,int,int); //prototyppe 
void print(int*,int);
int main()
{
  int N,idx;
  printf("Enter N");
  scanf("%d",&N);

  int *ptr= calloc(N,sizeof(int));  //memeory allocated 
if(ptr ==NULL)
{
  printf("memeory not allocated");
  return  -1;

}

  read(ptr,N);  //read element

  printf("Enter idx No to remove");
  scanf("%d",&idx);


  remove_element(ptr,N,idx);  //call remove indx
  
  print(ptr,N);
  free(ptr);  //free main memeory;

}

void read(int *ptr,int size)

{
  printf("Enter %d elements:",size);
  for(int i=0;i<size;i++)
  {
    scanf("%d",ptr+i);  //stroed eleelmtn by address location 
  } 
}

void remove_element(int *ptr,int size,int idx)
{
  if(idx > size)
  printf("invalid idx");

  for(int i=0;i<size-1;i++)
  {
    if(i== idx)
    {
      //remove 
       *(ptr+i)= *(ptr+i+1);
    }
  }

  int *ptr2=realloc(ptr,(size-1)*sizeof(int));

  if(ptr2==NULL){
  printf("memeory not allocated");
    free(ptr2);
    return ;
}
}

void print(int *ptr,int size)
{
  printf("your eleemnt:");
  for(int i=0;i<size;i++)
  {
    printf("%d",*(ptr+i));
  }
}



*/
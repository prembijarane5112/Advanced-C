/*
Write a C program to read two integer arrays of the same size and sort both arrays in ascending order using Bubble Sort.
While sorting each array, count the number of swaps performed.
Finally:
●	Display both sorted arrays.
●	Display the swap count of each array.
●	Print which array required fewer swaps.
●	If both have the same swap count, print that both arrays required the same number of swaps.

*/
/*

#include<stdio.h>
void read(int[] ,int);
int sort_asc(int[],int,int);
void print(int[],int);
int main()
{
  int size,count1=0,count2=0;
  printf("Enter size:");
  scanf("%d",&size);

  int arr1[size];
  int arr2[size];

  read(arr1,size);  //read arr1 elements
   read(arr2,size);  //read arr2 element
    int res=sort_asc(arr1,size,count1);
   print(arr1,size);
   printf("array1 swap count is %d\n",res);
   
  int res2=sort_asc(arr2,size,count2);
   print(arr2,size);
   printf("array1 swap count is %d\n",res2);


   if(res<res2)
   {
    printf("array 1 took a lower time");
   }
   else
   printf("array 2 took a lower time");

}

void read(int arr[],int size)
{
  printf("enter %d array elements:",size);

  for(int i=0;i<size;i++)
{
  scanf("%d",&arr[i]);
}
}


int sort_asc(int arr[],int size,int count)
{
    for(int i=0;i<size-1;i++)
    {
      for(int j=0;j<size-i-1;j++)
      {
        if(arr[j] > arr[j+1])
        {
          //swap
          int temp= arr[j];
          arr[j]=arr[j+1];
          arr[j+1]= temp;

          count++;
        }
      }
    }

    return count;
}


void print(int arr[],int size)
{

  for(int i=0;i<size;i++)
  {
  printf("%d ",arr[i]);
 
}

}

*/




/*
Write a C program to check whether the given array is already sorted in ascending order.
The program should print:
●	The array is in ascending order.
●	The array is not in ascending order.
*/

/*

#include<stdio.h>
void read(int[] ,int);
int check(int[],int);

int main()
{
  int size;
  printf("Enter size:");
  scanf("%d",&size);

  int arr1[size];

  read(arr1,size);  //read arr1 elements
    int res=check(arr1,size);
    if(res ==0)
    {
      printf("Array is an ascending order:");
    }
    else
    printf("Array us not ascending order");
}

void read(int arr[],int size)
{
  printf("Enter %d  array elements :",size);

  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

int check(int arr[],int size)
{

  for(int i=0;i<size;i++)
  {
    if(arr[i] > arr[i+1])
    {
           return 1; // non asc order 
    }
  }

  return 0; //array in  asc order
}



*/





/*  Remove Duplicate Elements Using Bubble Sort
Example : 
Input:
8
4 2 7 2 4 9 7 1
After Bubble Sort
1 2 2 4 4 7 7 9
Output
1 2 4 7 9

*/


/*
#include<stdio.h>
void read(int[],int);  //protoype
int sort(int[],int);
void remove_duplicate(int[],int);
void print(int[],int);
int main()
{
  int size;
  printf("Enter the size:");
  scanf("%d",&size);

  int arr[size];  //create array

  read(arr,size);  //call read array eleents
 sort(arr,size); //call sort 
  print(arr,size);
  remove_duplicate(arr,size);
  

}

void read(int arr[],int size)
{
  printf("Enter %d elements:",size);
  
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }


}

int sort(int arr[],int size)
{

    for(int i=0;i<size-1;i++)
    {
      for(int j=0;j<size-i-1;j++)
      {
        if(arr[j+1]< arr[j])
        {
           //swap
           int temp= arr[j];
           arr[j]=arr[j+1];
           arr[j+1]= temp;
        }
      }
    }

}

void remove_duplicate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
      if(arr[i]==arr[i+1])
      continue;
  
    else
    printf("%d ",arr[i]);   
  }
}
void print(int arr[],int size)
{
  printf("After bubble sort:\n");
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  } 
  printf("\n"); 
}


*/







/* Check Whether Two Arrays Are Anagrams
Write a C program to read two integer arrays of the same size. Sort both arrays using Bubble Sort. 
After sorting, compare the arrays. If both arrays contain the same elements with the same frequency, they are called Anagram Arrays.
*/

/*
#include<stdio.h>
void read(int[],int);
void sort(int[],int);
void print(int[],int);  //protoype
int check_anagram(int[],int[],int);
int main()
{
  int size;
  printf("Enter size of array:");
  scanf("%d",&size);

  int arr1[size];  //create array 
  int arr2[size]; 
   
  read(arr1,size); //read arr1 element
  read(arr2,size);  //read aaray 2 

   sort(arr1,size);   //sort array 1 elements
   sort(arr2,size);  //sort array 2 

   print(arr1,size); 
   print(arr2,size);

   int result=check_anagram(arr1,arr2,size);
   if(result == 1)
   printf("Array is anagram");

   else
   printf("Array is not anagram");
}


void read(int arr[],int size)
{
  printf("Enter %d array elements:",size);
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

void sort(int arr[],int size)

{
  for(int i=0; i<size-1;i++)
  {
    for(int j=0;j<size-i-1;j++)
    {
      if(arr[j+1]<arr[j])
      {
        //swap
        int temp= arr[j];
        arr[j]= arr[j+1];
        arr[j+1]= temp;
      }
    }
  }
}


void print(int arr[],int size)
{
  printf("After bubble sort:\n");
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }

  printf("\n");
}


//cehck array anagram or not
int check_anagram(int arr1[],int arr2[],int size)
{

   for(int i=0; i<size;i++)
   {
    if(arr1[i]!=arr2[i])
    return 0; //aarray not aangram;
   }

   return 1;  //aangram
}


*/












/*Check Whether All Elements of One Array Are Present in Another aarray used bubble sort
Input:
4 2 7 5
8 5 2 9 7 4
After Bubble Sort
2 4 5 7
2 4 5 7 8 9
Output
All elements are present

*/

/*
#include<stdio.h>
void read(int[],int );
void bubble_sort(int[],int);
int check_present(int[],int[],int);
void print(int[],int);

int main()
{
  int size1,size2;
  printf("Enter  array 1 and arrayy 2 size :");
  scanf("%d%d",&size1,&size2);

  int arr1[size1];
  int arr2[size2];

  read(arr1,size1);  //read array1 
  read(arr2,size2);  //read array 2

  bubble_sort(arr1,size1); //array 1 sort
  bubble_sort(arr2,size2);  //sort array 2;

  print(arr1,size1); //print aarray 1;
  print(arr2,size2);  //print array 2;

  int ret= check_present(arr1,arr2,size1);
  if(ret==1)
  printf("All elements are presenet:");

  else
  printf("all elements are not presnset");
}

void read(int arr[],int size)
{
  printf("Enter  %d array elements:",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

void bubble_sort(int arr[],int size)
{
  for(int i=0; i<size-1;i++)
  {
    for(int j=0; j<size-1-i;j++)
    {
      if(arr[j+1]< arr[j])
      {
        //swap
        int temp=arr[j];
        arr[j]= arr[j+1];
        arr[j+1]= temp;
      }
    }
  }
}

int  check_present(int arr[],int arr2[],int size)
{
  for(int i=0; i<size;i++)
  {
    if(arr[i]!= arr2[i])
     return 0;  //not presne
  }

  return 1; //presnet upto size;
}
void print(int arr[],int size)
{
  printf("After Bubble sort:\n");
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }

  printf("\n");
}

*/





 /*   find union of two arrays  -- union means every elements are presnet ones

  Input:
1 4 5 2
2 5 7 8
After Bubble Sort
Array 1 after sort : 1 2 4 5
Array 2 after sort : 2 5 7 8
Both array after merging : 1 2 4 5 2 5 7 8
Sorted of the merged array : 1 2 2 4 5 5 7 8
Output
Union: 1 2 4 5 7 8

*/

/*

#include<stdio.h>
void read(int[],int );
void bubble_sort(int[],int);
void print(int[],int[],int [] ,int);
void print_merge(int[],int);
void find_union(int[],int);
int main()
{
  int size;
  printf("Enter size of array:");
  scanf("%d",&size);

  int arr1[size];
  int arr2[size];
 int merge[size+size];
  read(arr1,size); //read array 1
  read(arr2,size);  //read array 2
  
  bubble_sort(arr1,size);  //sort array 1
  bubble_sort(arr2,size);  //sort array2;

  print(arr1,arr2,merge,size); //print array 1
  // print(arr2,size); //print array2

  bubble_sort(merge,size+size);
  print_merge(merge,size);

  find_union(merge,size+size);  //find union
   
}

void read(int arr[],int size)
{
  printf("Enter %d elements :",size);
  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

void bubble_sort(int arr[],int size)
{
  for(int i=0; i<size-1;i++)
  {
    for(int j=0; j<size-i-1;j++)
    {
      if(arr[j+1] <  arr[j])
      {
        //swap
        int temp= arr[j];
        arr[j]= arr[j+1];
        arr[j+1]= temp;
      }
    }
  }
}

void print(int arr[],int arr2[],int merge[],int size)
{


  printf("After  array 1 sort:");
  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");

  printf("After array 2 sort:");
  for(int j=0;j<size;j++)
  {
    printf("%d ",arr2[j]);
  }

  printf("\n");
  int k=0;
 
  for(int i=0; i<size;i++)
  {
    merge[k]=arr[i];
    k++;
  }

    for(int j=0;j<size;j++)
    {
      merge[k]=arr2[j];
      k++;
    }

    //print merfge
 printf("Both array after merging:");
 for(int i=0;i<size+size;i++)
 {
  printf("%d ",merge[i]);
 }
  printf("\n");
}
void print_merge(int merge[],int size)
{
  printf("Sorted of the merged array:");
  
  for(int i=0; i<size+size;i++)
  {
    printf("%d ",merge[i]);
  }
}

void find_union(int merge[],int size)
{
  printf("Union:");
  for(int i=0; i<size;i++)
  {
    if(merge[i]== merge[i+1])
    continue;

    else
    printf("%d",merge[i]);
  }
}














/* Find the First Repeated Element
Write a C program to read an integer array. Sort the array using Bubble Sort. After sorting,
 find the first element that occurs more than once.If no element is repeated, print No repeated element.

 ip
 7
5 3 8 2 3 9 1
After Bubble Sort
1 2 3 3 5 8 9
Output
First repeated element: 3

*/

/*

#include<stdio.h>
void read(int[],int );
void sort(int [],int);
int *check_first_repeted(int[],int);

int main()
{
  int size;
  printf("Enter size of array:");
  scanf("%d",&size);

  int arr1[size];

  read(arr1,size);
  sort(arr1,size);
   int *ret= check_first_repeted(arr1,size); 
     
   if(ret !=0)
   printf("first repeted element :%d",*ret);

      else
   printf("no repeted element:");
}

void read(int arr[],int size)
{
  printf("Enter %d element ",size);
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

void sort(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
   for(int j=0;j<size;j++)
   {
    if(arr[j+1]< arr[j])
    {
      // swap
      int temp =arr[j];
      arr[j]= arr[j+1];
      arr[j+1]= temp;
    }
   }

  }
}

int *check_first_repeted(int arr[],int size)

{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==arr[i+1])
   return arr+i;
   
  }

  return 0;
}




*/



/* 
: Find the Missing Element
Write a C program to read two integer arrays. The first array contains N elements and the second array contains N-1 elements. The second array contains all elements of the first array except one. Sort both arrays using Bubble Sort and find the missing element.
Example : 
Input:
10 40 20 50 30
30 10 50 40
After Bubble Sort
10 20 30 40 50
10 30 40 50
Output
Missing element: 20


*/


/*
#include<stdio.h>
void read(int arr[],int size);
int missing_element(int arr[],int arr2[],int size);
void  sort(int arr[],int size);
int main()
{
  int size,size2;
  printf("Enter array 1 size and array 2 size:");
  scanf("%d%d",&size,&size2);

  int arr[size];  //array create
  int arr2[size-1];  // array create

   
   read(arr,size);
   read(arr2,size2); 

  sort(arr,size);//sort arry 1 
  sort(arr2,size);

  int ret= missing_element(arr,arr2,size);
   printf("missing element is %d",ret);
}

void read(int arr[],int size)
{
  printf("Enter %d elements:",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d", &arr[i]);
  }
}

void sort(int arr[],int size)
{
  for(int i=0; i<size-1;i++)
  {
    for(int j=0;j<size-1-i;j++)
    {
      if(arr[j+1] > arr[j])
      {
        //swap
        int temp =arr[j];
        arr[j]= arr[j+1];
        arr[j+1]= temp;
      }
    }
  }
}

int missing_element(int arr[],int arr2[],int size)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]!=arr2[i])
    {
      return arr[i];
    }
  }
}



*/



/*
  9: Find the Pair With Minimum Difference
Write a C program to read an integer array. Sort the array using Bubble Sort. After sorting, find the two elements having the minimum absolute difference. Print the pair and their difference.
Example : 
Input:
6
10 3 20 15 8 25
After Bubble Sort
3 8 10 15 20 25
Output
Closest pair: 8 10
Difference: 2

*/




/*

#include<stdio.h>
void read(int arr[],int size);
void find_pair(int arr[],int size);
void  sort(int arr[],int size);
int main()
{
  int size;
  printf("Enter size");
  scanf("%d%d",&size);

  int arr[size];  //array create
 

   
   read(arr,size);

  sort(arr,size);//sort arry 1 

find_pair(arr,size);
   
}

void read(int arr[],int size)
{
  printf("Enter %d elements:",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d", &arr[i]);
  }
}

void sort(int arr[],int size)
{
  for(int i=0; i<size-1;i++)
  {
    for(int j=0;j<size-1-i;j++)
    {
      if(arr[j] > arr[j+1])
      {
        //swap
        int temp =arr[j];
        arr[j]= arr[j+1];
        arr[j+1]= temp;
      }
    }
  }
}

 void find_pair(int arr[],int size)
{
  int res=0;
  for(int i=0;i<size;i++)
  {

  res= arr[i]-arr[i+1];
  }
printf("%d",res);
  }



  */




  // Find Frequency of Each Element



  #include<stdio.h>
void read(int arr[],int size);
void find_freq(int arr[],int size);
void  sort(int arr[],int size);
void print(int[],int);
int main()
{
  int size;
  printf("Enter size");
  scanf("%d",&size);

  int arr[size];  //array create
   read(arr,size);
  sort(arr,size);//sort arry 1 
  print(arr,size);

find_freq(arr,size);
   
}

void read(int arr[],int size)
{
  printf("Enter %d elements:",size);

  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

void sort(int arr[],int size)
{
  for(int i=0; i<size-1;i++)
  {
    for(int j=0;j<size-1-i;j++)
    {
      if(arr[j] > arr[j+1])
      {
        //swap
        int temp =arr[j];
        arr[j]= arr[j+1];
        arr[j+1]= temp;
      }
    }
  }
}

void print(int arr[],int size)
{
  printf("after sorting:\n");
  for(int i=0;i<size;i++)
{
  printf("%d ",arr[i]);
}
}

 void find_freq(int arr[],int size)
{
   
  for(int i=0;i<size;i++)
   {
    int count=0;
    for(int j=0;j<size;j++)
{
  
   if(arr[i]== arr[j])
   count++;
}


for(int k=0; k<i;k++)
{

printf("%d --> %d\n",arr[i],count);

   }
  
  }

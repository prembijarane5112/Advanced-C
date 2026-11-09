
/*
. Student Marks Analysis**

A class has N students, and each student has marks in M subjects. Read the marks into a 2D array and perform the following operations:

- Display the marks of all students.
- Calculate and display the total marks of each student.
- Find the student who scored the highest total.

*/

/*


#include<stdio.h>
void read(int row,int col,int arr[row][col])
{
   int i=0;
  for( i=0;i<row;i++)
  {
     printf("Enter %d student marks:",i+1);
    for(int j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
}

void display(int row,int col,int (*arr)[col])
{
  int i=0,high,res;
 
     for(i=0;i<row;i++)
     {
       printf(" marks of %d student: " , i+1);
      int sum=0;
      for(int j=0;j<col;j++)
      {
        printf("%5d",arr[i][j]);
         sum = sum+arr[i][j];
      }

      
 
       if(sum > high)
       {
        high= sum;
        res=i;
       }
      

      printf("\n Sum is :%d",sum);


       printf("\n");
      
     }

     printf("Student %d scored  hhighest total marks %d  in class:",res+1,high);
}
int main()
{
  int row,col;
  printf("Enter no of student and subject of each  student");
  scanf("%d%d",&row,&col);

   int arr[row][col];  //create array

   read(row,col,arr);
   display(row,col,arr);

}


*/











/*
A weather station records temperatures at N locations for M different time slots. Store the readings in a 2D array and:

- Display the temperature readings.
- Find the highest and lowest temperature recorded.
- Calculate the average temperature of each location.




#include<stdio.h>
void read(int row,int col, int (*ptr)[col])
{
  printf("Enter elements:");

  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      scanf("%d", * (ptr+i) + j);
    }
  }
}

void print(int row,int col , int (*ptr)[col])
{
  int highest=  *(*(ptr+0)+0);
  int lowest =  *(*(ptr+0)+0);
  for(int i=0;i<row;i++)
  {
    int avg=0; 

    for(int j=0;j<col;j++)
    {
      printf("%5d", *(*(ptr+i)+j));
      avg += (*(*(ptr+i)+j)) ;  // find avg 

      if( (*(*(ptr+i)+j)) > highest)
      {
        highest = (*(*(ptr+i)+j));
      }
      
      else if ( ( (*(*(ptr+i)+j)) < lowest ) && ( *(*(ptr+i)+j) !=highest ) )
      {
        lowest= *(*(ptr+i)+j);
      }
    }
    printf("\n Avg of %d location is %d",i+1,(avg/col));
     printf("\n");
  }

  printf("Highest temperature is :%d\n",highest);
  printf("lowest temepratre is :%d",lowest);
 
}
int main()
{
  int N,M;
  printf("Enter how many location: and time slot of each location");
  scanf("%d%d",&N,&M);
 
  int arr[N][M];  //create 2d array 

  int (*ptr)[M] = arr;


  read(N,M,ptr);
   print(N,M,ptr);


}


*/








 /*  wap to store roll number and marks obtained by no of student */


 #if 0
 #include<stdio.h>
 int main()
 {
  int n;
  printf("Enter no of student");
  scanf("%d",&n);
 
  int arr[n][3]; // create array n*3 elemtns

  //read elements

  for(int i=0;i<n;i++)
  {
    printf("Enter  P,C,M  subject marks of student %d: ",i+1);
    for(int j=0;j<3;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }

   // print marks

   for(int i=0;i<n;i++)
   {
    printf("marks of student %d",i+1);
    for(int j=0;j<3;j++)
    {
      printf("%5d",arr[i][j]);
    }

    printf("\n");
   }

 }

 #endif








 /* 
wap to store 10 at every index of 3d matrix with 5 row and 5 col 
 */

 #if 0
 #include<stdio.h>
 int main()
 {
  int arr[3][3];  // create 2d array

  for(int i=0;i<3;i++)
  {
  
    for(int j=0;j<3;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }


  
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%5d",arr[i][j]);
    }

    printf("\n");
  }


}

#endif













// wap to add 2 matrix (matrix size should me same );


#if 0
#include<stdio.h>
int main()
{
  int arr1[2][2];
  int arr2[2][2];

  int sum[2][2];
  //read arry 1 elemnts
  printf("Enter array elemnets");

  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      scanf("%d",&arr1[i][j]);

    }
  }


  printf("Enter array 2 elements\n");
   for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      scanf("%d",&arr2[i][j]);
    }
  }


  // sum of two array same idx number

  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {

      sum[i][j]= arr1[i][j] + arr2[i][j];
    }
  }


  //print sum array

  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      printf("%5d",sum[i][j]);
    }

    printf("\n");
  }
}

#endif





#if 0


//wap to print the row number having the maximum sum in a given matrix

#include<stdio.h>
int main()
{
  int r,c,idx,max_sum=0;
  printf("Enter no of row and cols");
  scanf("%d %d",&r,&c);

  int arr[r][c];
  //read arry 1 elemnts
  printf("Enter array elemnets");

  for(int i=0;i<r;i++)
  {
    int sum=0;
    for(int j=0;j<c;j++)
    {
      scanf("%d",&arr[i][j]);
      sum =  sum +arr[i][j];
    }

    if(sum > max_sum)
    {
         max_sum = sum;
         idx= i;
    }
  }

  printf("max sum  row no is %d\n  max sum is %d",idx+1,max_sum);
}


#endif










#if 0 

// given a matrix having 0-1 only find the row with the maximum number of 1


#include<stdio.h>
int main()
{
  int r,c,idx,max_count=0;
  printf("Enter no of row and cols");
  scanf("%d %d",&r,&c);

  int arr[r][c];
  //read arry 1 elemnts
  printf("Enter array elemnets only 0 and 1 number");

  for(int i=0;i<r;i++)
  {
    int count=0;
    for(int j=0;j<c;j++)
    {
      scanf("%d",&arr[i][j]);
       
      if(arr[i][j] == 1)
      {
        count++;
      }
    }

    if( count > max_count)
    {
       max_count=count;
       idx=i;
    }
  }


    printf("maximum one row is %d and total no of 1's is %d",idx+1,max_count);
  }


  #endif 















  #if 0

  // wap to transpose of the matrix 
  
  #include<stdio.h>
void transpose(int row,int col,int arr[][col])
{
  
  FILE *fp = fopen("matrix.txt","w");
  if(fp ==NULL)
  {
    printf("not created");
    return ;
  }

   
 
  for(int i=0; i<col;i++)
  {
    for(int j=0;j<row;j++)
    {

      fprintf(fp,"%5d",arr[j][i]);
     printf("%5d",arr[j][i]);
    }

    printf("\n");
  }

  printf("write suceesss");
}
int main()
{
  int r,c,idx,max_count=0;
  printf("Enter no of row and cols");
  scanf("%d %d",&r,&c);

  int arr[r][c];
  //read arry 1 elemnts
  
  for(int i=0;i<r;i++)
  {
    int count=0;
    for(int j=0;j<c;j++)
    {
      scanf("%d",&arr[i][j]);
       
    }
  }
   
   transpose(r,c,arr);
}


#endif 




#if 0

// / wap to transpose of the matrix  and stored in the seperate matrix 

 #include<stdio.h>
void transpose(int row,int col,int arr[][col])
{
  
  
  int sep[col][row];  // create seperate matrix ;
   
 
  for(int i=0; i<col;i++)
  {
    for(int j=0;j<row;j++)
    {
  
      sep[i][j]= arr[j][i];
      
    }
  }

  printf("sepearte print\n ");
  for(int i=0; i<col;i++)
  {
    for(int j=0;j<row;j++)
    {
      printf("%5d",sep[i][j]);
    }

    printf("\n");
  }


}
int main()
{
  int r,c,idx,max_count=0;
  printf("Enter no of row and cols");
  scanf("%d %d",&r,&c);

  int arr[r][c];
  //read arry 1 elemnts
  
  for(int i=0;i<r;i++)
  {
    int count=0;
    for(int j=0;j<c;j++)
    {
      scanf("%d",&arr[i][j]);
       
    }
  }
   
   transpose(r,c,arr);
}


#endif 





#if 0

// trasnpose a matrix without using new array n*n matrix same no of rows and col   used by swap method 
// chagne in the same matrix 
#include<stdio.h>
int main()
{
  int r,c;
  printf("Enter row and col:");
  scanf("%d%d",&r,&c);

   int arr[r][c];

   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
      scanf("%d",&arr[i][j]);
    }

  }
     //trasnspose 

     for(int i=0;i<r;i++)
     {
      for(int j=i;j<c;j++)
    //swap arr[i][j]= arr[j][i];
    {
       int temp = arr[i][j];
       arr[i][j]= arr[j][i];
       arr[j][i]= temp;  
    }


   }


   printf("after swaping\n");

   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
      printf("%5d",arr[i][j]);
    }

    printf("\n");
   }

}


#endif 
















#if 0



/// wap rotate the 2d array using 90 degree clockwise 
 //  in rotate array 2 step compulsory 1) find the transpose of array  2) reverse the each row in transpose array 

#include<stdio.h>
int main()
{
  int n;
  printf("Enter row and col:");
  scanf("%d",&n);


  int arr[n][n];

  printf("Enter elements:\n");

  for(int i=0; i<n;i++)
  {
    for(int j=0; j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }


  // transpose of matrix


  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
{ 
  //swap 
    int  temp  =arr[i][j];
    arr[i][j]=  arr[j][i];
    arr[j][i]= temp; 


}
  }


  printf("\n");

  printf("Transpse :\n");

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("%5d",arr[i][j]);
    }

    printf("\n");
  }



   // rotate the array by 90 degree 
   // reveerse the each row of trnapsoe matrix 


    
   for(int i=0;i<n;i++)
   {
    int j=0; // start first idx 
    int k= n-1; // start last index
 
     while(j<k)
     { 
      //swap arr[i][j]=  arr[j][k];

      int temp = arr[i][j];
      arr[i][j]= arr[i][k];

      arr[i][k]= temp; 
      j++;
      k--;
     }
     
   }


   // print the rotated  array

   printf("\n Rotated Array\n");
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
      printf("%5d",arr[i][j]);
    }

    printf("\n");
   }
}




#endif 






























/// wap to multiplication of 2 matrix and print the result 
#include<stdio.h>
int main()
{
  int m,n;
  printf("Enter the no of row and col of matrix 1:");
  scanf("%d %d",&m,&n);

  int a[m][n];  // create first matrix 

  //read elements 
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }


  int p,q;
  printf("Enter no of rows and col of matrix 2:");
  scanf("%d %d",&p,&q);

  int b[p][q];  // createe second matrix 

  printf("Enter 2 matrix elements:");

  for(int i=0; i<p;i++)
  {
    for(int j=0;j<q;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }

  int res[m][q];   // create res matrix thats op matrix 

  
  if (n !=p)
  {
    printf("not multiplcation posssible of given matrix");
  return  1;
  }

  else
  {
    // multiplicationn

    for(int i=0; i<m;i++)
  {
    for(int j=0;j<q;j++)
    {
         res[i][j]= 0; 
         
         for(int k=0; k<n;k++)
         {
          res[i][j] += a[i][k] * b[k][j];
         }
    }
  } 
  
  

   printf("resultant matrix is \n");

   for(int i=0; i<m;i++)
   {
    for(int j=0;j<q;j++)
    {
      printf("%d ",res[i][j]);
    }

    printf("\n");
   }
  }



}
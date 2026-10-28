/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*


#include <stdio.h>

int main()
{
   int size,k;
   printf("Enter size");
    scanf("%d",&size);
    
    int arr[size];  

    printf("Enter k how many pairs to cmpr:");
    scanf("%d",&k);
   int sum,max=0,i,j;
   
   for(i=0;i<=size-k;i++)
   
   {
       sum=0;
       
       for(j=i;j<i+k;j++)
       {
           sum= sum+arr[j];
       }
       
       if(sum>max)
       {
           max=sum;
       }
   }
   
   printf("%d",max);

    return 0;
}


*/


/*

#include <stdio.h>

int main()
{
   int size,k;
   printf("Enter size:");
   scanf("%d",&size);

   int arr[size];

   printf("Enter %d elements:",size);
    for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
   printf("Enter k value:");
   scanf("%d",&k);
   
   int temp,i,j;
   
   for(i=0;i<k;i++)
   {
      temp=arr[0];  
     for(j=1;j<size;j++)
       {
           arr[j-1]= arr[j];
       }
       
       arr[size-1]= temp;
      
   }
   
    for(int i=0;i<size;i++)
    {
      printf("%d ",arr[i]);
    }

    return 0;
}

*/





// moving npoisitve number to first left and negativ4e to right ;
//method 1->
/*
#include <stdio.h>

int main()
{
   int size,i,j,count=0;
   printf("Enter size:");
   scanf("%d",&size);

   int arr[size];

   printf("Enter %d elements:",size);
    for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }

    for(i=0;i<=size-count;i++)
    {
      if(arr[i]!=0)
      {
        for(j=i;j<size-1;j++)
        {
          int temp=arr[j];
          arr[j]=  arr[j+1];
          arr[j+1]= temp;
        }

        count++;
        i--;
      }
    }


      for(i=0;i<size;i++)
      {
        printf("%d ",arr[i]);
      }
    }

    */

  

    /*
    //method2-> 
    #include<stdio.h>
     int main()
{
   int size;
   printf("Enter size:");
   scanf("%d",&size);

   int arr[size];

   printf("Enter %d elements:",size);
    for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }

    // two pointer 
    int i=0,j,temp;
    for(j=0;j<size;j++)
    {

      if(arr[j]<0)
      {
      temp =arr[i];
      arr[i]= arr[j];
      arr[j]= temp;
      i++;
      }
   
   
    }

    for(int i=0;i<size;i++)
    {
      printf("%d ",arr[i]);
    }
  }


  */


  // find the sum is equal to target  only sorted array 
  
  #include<stdio.h>
     int main()
{
   int size,target;
   printf("Enter size:");
   scanf("%d",&size);

   int arr[size];

   printf("Enter %d elements:",size);
    for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("Enter target:");
  scanf("%d",&target);
     
    // 
  
     int left=0;
     int right=(sizeof(arr) / sizeof(arr[0]))-1;

     while(left<right)
     {
      int sum= left+right;
            if( sum >  target)
            {
              right--;
            }
            else if(sum < target)
            {
              left++;
            }

            else if(sum== target)
            {
              printf("%d %d",left,right);
             break;
            }
     }
    }

 //wap to check whether elements missing in array  arr[4]= 1 2 3 5;  op is 4 miisngi
/*

 #include<stdio.h>
 void read(int arr[],int size);
 int missing(int arr[],int size);
 int main()
 {
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];  //create array 

  read(arr,size);
   int ret=missing(arr,size);
  
   printf("missing elements is %d:",ret);
  }

 void read(int arr[],int size)
 {
  printf("enter %d elements:",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
 }

 int missing(int arr[],int size)
 {
  for(int i=1;i<size+1;i++)  //norma loop
  {         int flag=1;
      for(int j=0;j<size;j++)  //elelemts loops
      {
        if(arr[j]==i)
        {
          flag=0;  //elelents found present 
           break;
        }
      }
         
     if(flag==1)
     {
      return i;
     }
  }
 }


*/


/*  2nd method
 int second method is very useful step1-> find the  sum of first n natural number formula n*(n+1)/2;  step2-> n_natural_sum-array_sum= your ans(missing indx)
*/

/*

 #include<stdio.h>
 
 void read(int arr[],int size);
 int missing(int arr[],int size);
 int main()
 {
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];  //create array 

  read(arr,size);
 int ret= missing(arr,size);
 printf("missing elements is %d",ret); 
}

 void read(int arr[],int size)
 {
  printf("enter  %d array elements:",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
 }

 int missing(int arr[],int size)
 {
  //find the array elemnts sum
  int sum=0;
  int n=size+1;
  for(int i=0; i<size;i++)
  {
    sum+=arr[i];
  }
  //find the sum of n_natural number formula
   n = n*(n+1)/2;  //undsetand formula


   return n-sum;
  


 }
 */



//  3rd method
// in this method you perfrom xor operation means xorr used same same elements delete 

#include<stdio.h>
 
 void read(int arr[],int size);
 int missing(int arr[],int size);
 int main()
 {
  int size;
  printf("enter size");
  scanf("%d",&size);

  int arr[size];  //create array 

  read(arr,size);
 int ret= missing(arr,size);
 printf("missing elements is %d",ret); 
}

 void read(int arr[],int size)
 {
  printf("enter  %d array elements:",size);

  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
 }

 int missing(int arr[],int size)
 {
  //find 
  int ans=0;
  for(int i=0;i<size;i++)
  {
    ans= ans ^ arr[i];
  }

  for(int i=1;i<=size+1;i++)
  {
    ans=ans^i;
  }
 
  return ans;
  }




 
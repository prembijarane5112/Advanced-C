//all array question  
//find the diffrence of pair of eleemmnts and check if the iddff is equal to target and return cout 

/*
#include<stdio.h>

void read(int arr[],int size)
{
  printf("Enter elements:\n");

  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}

int check_diff(int arr[],int size,int target)
{

  int count=0;
  for(int i=0;i<size-1;i++)
{ 
     for(int j=0;j<size;j++)
     {
      if( (arr[i]-arr[j]) == target)
       count++;
     }
}

return count;

}
int main()
{
  int size,target;
  printf("Enter elements:");
  scanf("%d",&size);

  int arr[size];

  read(arr,size);

  printf("Enter tatget:");
  scanf("%d",&target);

   int ret=check_diff(arr,size,target);
   printf("count is %d",ret);
}


*/


// wap to check whetehr array is sorted or not

/*
#include<stdio.h>
int sorted_check(int[],int);
void read(int[],int);
int main()
{
  int size;
  printf("enter size:");
  scanf("%d",&size);

  int arr[size];

   read(arr,size);
  int ret=sorted_check(arr,size);
   
 
  if(ret ==0)
  printf("Array is sorted:");

  else
  printf("array not sorted:");
}


int sorted_check(int arr[],int size)
{
  for(int i=0;i<size-1;i++)
  {
    if(arr[i] > arr[i+1])
     return 1;  // not sorted
 
    }

  return 0;
}

void read(int arr[],int size)
{
  printf("Enter %d eleemnts:",size);

  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}


*/


//peak  elements  means the eelemtn adjecen elements is greater than rqual to that element
/*
#include<stdio.h>
int main()
{
  int arr[7]={10,20,15,2,23,90,67};


  for(int i=1;i<7;i++)
  {
    if(arr[i]>=arr[i-1] && arr[i]>= arr[i+1])
    {
      printf("%d ",arr[i]);
    }
  }
}




*/




/*    wap yo check array in array case 1-> 0 is present 1 time-> in 0idx - put product of all either array elements
      case 2-> 0 present greater than equla to 2--> all array is zero   
    case 3-> not present any zero  product divide by array no 
    */

/*
    #include<stdio.h>
    int main()
    {
      int size,idx,count=0,prod=1;
      printf("Enter size:");
      scanf("%d",&size);

      int arr[size];

      printf("Enter elements:");

      for(int i=0;i<size;i++)
      {
        scanf("%d",&arr[i]);
         if(arr[i]==0)
         {
          count++;
          idx=i;
         }
         else

         prod=prod*arr[i];  // give product  

        
      }

  

      //check first condtion 
     
      if(count==1)
      {
       arr[idx]= prod;

      }

      //check 
      for(int i=0;i<size;i++)
      {
        if(count==0)
        {
          arr[i]= (prod)/arr[i]; 
        }

       if( count>=2)
        {
            arr[i]=0;
        }
      }


      for(int i=0;i<size;i++)
      {
        printf("%d ",arr[i]);
      }
       
    }

    */




// wapt to read 2 array and size m and n and merge  both array in merge arr

#include<stdio.h>
int main()
{
  int m,n;
  printf("Enter 2 array size:");
  scanf("%d %d",&m,&n);

  int arr[m];
  int arr2[n]; 
  int merge[m+n];

  for(int i=0;i<m;i++)
  {
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr2[i]);
  }
}


int j=0,k=0;
 for( int i=0;i<)
   
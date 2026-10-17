/* wap to moves all elements to the beginings like  • [-12, 11, -13, -5, 6, -7]
 Possible Output: [-12, -13, -5, -7, 11, 6]
 */


 #include<stdio.h>
void read(int arr[],int size);  //declaration/prototyping 
void move_negative(int arr[],int size);
void print(int arr[],int size);  

 int main()
 {
  int size; //give size from user 
  printf("enter size");
  scanf("%d",&size);

  int arr[size]; //declare array 

  read(arr,size); //read func read array elements
   
  move_negative(arr,size);  
  print(arr,size);

}

 void read(int arr[],int size)
 {
    
  printf("enter  %d array elemtns:",size);

  for(int i=0 ;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
   
 }

 void move_negative(int arr[],int size)
 {
 
  int i=0;
  for(int j=0;j<size;j++)
  {
    if(arr[j]<0)
    {
      int temp=arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
      i++;
    }
  }
}
  


 

 void print(int arr[],int size)
 {
  printf("your elements after moving:\n");

  for(int i=0; i<size;i++)
  {
    printf("%d ",arr[i]);
  }
 }
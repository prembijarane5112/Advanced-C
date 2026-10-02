//sizeof is the operator in c 
#include<stdio.h>
int main()
{
//float f=12.4;
// int a=12;  //int ->4 byte
//float a=13; // size float->4 byte 
   //char a='a';            //char ->1 byte;
// int size;
// size=sizeof(a);
// printf(" size is :%d",size);
// printf("%d",sizeof(12.2)); //result 8 bcz compiler assume they double 


// printf("size is %d\n",sizeof(223)); //op 4 223 is int value
// printf("size is %d\n",sizeof('A'));  //op  is 1 char 1 byte
// printf("size is %d\n",sizeof(34.44)); //double is 8 byte 
// printf("size is %d\n",sizeof(32.44f)) ;  //float is 4 byte cz both value same but i add f 













//size of pointer 

// int *ptr; //op 8
// float *p; //op 8 
 char *ptr;    // 8 byte you declare any type of pointer they stored always 8 byte size;
    
printf("size is:%zu",sizeof(ptr));

}
/*  check even and odd
  */

  /*
  #include<stdio.h>
  int main()
  {
    int num;
    printf("Enter NuM;");
    scanf("%d",&num);

  
     if(num &1U)
     printf("odd");

     else
     printf("even");
    
  }

  */












  /*
  
   Set, Clear, and Toggle a Bit**

Write a program to set, clear, and toggle the Nth bit of a given unsigned integer. Assume bit positions start from 0.

Test Case 1:

Input:
```text
Enter number: 10
Enter bit position: 1
```
Output:
```text
After setting bit: 10
After clearing bit: 8
After toggling bit: 8
```

  
  


 #include<stdio.h>
  int main()
  {
    int num,pos;
    printf("Enter NuM and bit position;");
    scanf("%d%d",&num,&pos);


  //set a bit 
     int set = num| (1U << pos);
  
     //clear bit
     int clear= num &   ~(1U << pos);

     //toggle bit
     int toggle = num  ^(1U<<pos);

     printf("After setting bits: %d\n",set);
     printf("After clearing bits:%d\n",clear);
     printf("After toggle bit: %d\n",toggle);
  }

  */














  /*
  Write a program to count the number of set bits (bits equal to 1) in a given unsigned integer using bitwise operators.

Test Case 1:

Input:
```text
Enter number: 13
```
Output:
```text
Number of set bits: 3
```

Test Case 2:

Input:
```text
Enter number: 15
```
Output:
```text
Number of set bits: 4
```

  




  #include<stdio.h>
  int main()
  {
    int num,count=0;
    printf("Enter num:");
    scanf("%d",&num);

    while(num)
  {
       num &= (num-1U);
      count++;
  }


  printf("%d",count);
  }

  */
















  /*
  
   Swap Two Numbers Using XOR**

Write a program to swap two integers without using a temporary variable, using the XOR operator.

Test Case 1:

Input:
```text
Enter two numbers: 25 40
```
Output:
```text
After swapping:
a = 40
b = 25
```

Test Case 2:

Input:
```text
Enter two numbers: 10 10
```
Output:
```text
After swapping:
a = 10
b = 10
```


  
  */

/*

  #include<stdio.h>
  int main()
  {
    int num1,num2;
    printf("Enter num1 and num2:");
    scanf("%d%d",&num1,&num2);


    printf("Before swapping: A = %d and B = %d\n",num1,num2);
  

    //xor
     num1= num1^ num2;
     num2= num2^num1; 

     num1= num1^num2;

     printf("After swap A = %d B = %d",num1,num2);
  }

  */





  /*
  Write a program to check whether a given positive integer is a power of 2 using bitwise operators.

Test Case 1:

Input:
```text
Enter number: 64
```
Output:
```text
64 is a power of 2
```

Test Case 2:

Input:
```text
Enter number: 50
```
Output:
```text
50 is not a power of 2
```

  
  


  #include<stdio.h>
  int main()
  {
    int num,count=0;
    printf("Enter num");
    scanf("%d",&num);

    int res=num;
    //check pow of 2 

    while(num)
  {
     
    num &= (num-1);
    count++;
  }

  if(count==1)
  {
    printf("%d number is power of 2:",res);
  }
  else
  printf("%d number is not power of 2:",res);
  }


  */




  /*
  print the value in left side this msg bit is 1   rq - no 12 -> 1100  op is 8 bcz msb bit value is 8

  
  #include<stdio.h>
  int main()
  {
    int num,pos=1;
    printf("enter num");
      scanf("%d",&num);
        
      while(num > 1)
      {
        num= num >> 1;
        pos= pos << 1;
      }

      printf("%d",pos);
  }





*/








  /*
  
**6. Reverse the Bits of an 8-Bit Number**	

Write a program to reverse the order of all 8 bits of an unsigned 8-bit integer.

Test Case 1:

Input:
```text
Enter number: 13
```
Output:
```text
Original binary: 00001101
Reversed binary: 10110000
Reversed decimal: 176
```

Test Case 2:

Input:
```text
Enter number: 10
```
Output:
```text
Original binary: 00001010
Reversed binary: 01010000
Reversed decimal: 80

  





  #include<stdio.h>
  int main()
  {
    int num;
    printf("Enter num");
    scanf("%d",&num);

     
    printf("original binary:");
    for(int i=7;i>=0;i--)
    {
      if(num & (1<<i))
      printf("1");

      else
      printf("0");
    }


    printf("\nReverse binary:");

    for(int i=0;i<8;i++)
    {
      if(num & (1<<i))
      printf("1");

      else
      printf("0");
    }
    printf("\n%d",num);
  }


  */

















  /*
  Write a program to find the element that appears only once in an array where every other element appears exactly twice. Use bitwise operators.

Test Case 1:

Input:
```text
Enter N: 7
Enter elements: 4 2 7 2 4 9 7
```
Output:
```text
Unique element: 9
```

Test Case 2:

Input:
```text
Enter N: 5
Enter elements: 5 3 5 7 3
```
Output:
```text
Unique element: 7

  
  
  */

  /*

  #include<stdio.h>
  int main()
  {
    int size,unique=0;
    printf("Enter size:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
      unique = unique ^ arr[i];      
    }

    printf(" unique elements is %d",unique);


  }

  */



  /*
   
  //wap check bit is palidrome or not 

   
  */

  /*
  #include<stdio.h>
  int main()
  {
    int num,rev=0;
    printf("Enter num:");
    scanf("%d",&num);

    int temp= num;

    while(num> 0)
    {

       int last_bit= num & 1;  // give last bit 

       rev = (rev << 1 ) | last_bit;  //stored last digit 

       num = num >> 1;  // delete last digit 
    }

    if(temp == rev)
    {
      printf("bit is palindrome");
    }
    else
    printf("bit not palidrome");
  }

  */






  /*
  Question: Extract n bits from a position
Input:
num = 29
pos = 3
n = 2

op-> extracted bits -3;

  
  */


  #include<stdio.h>
  int main()
  {
    int num,pos,bits;
    printf("Enter the number position and no of bits:");
    scanf("%d%d%d",&num,&pos,&bits);

      // get n bits
      int get= ((pos-bits)-1);
       
      int set_pos = ((1<<bits)-1);

      int res= set_pos  <<  get;


      printf("Extracted bits :%d",res);

  } 
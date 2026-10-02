// #include<stdio.h>
// void abc();
// int main()
// {
//   // auto int a;
//   // printf("%d",a);  //garbage value



//   //register;
//   // register int a;
//   // scanf("%d",&a); //show error regsitwr not a adress they cannot access address 
//   // scanf("%d",a);
//   // printf("%d",a); //gv garbage value ;


//   //static 
//   // static int a;
//   // printf("%d",a); //default value is 0;

//   abc(); //allfunction call time op is 1 always bcz your wirte function variable declaration is local variable ;
//   abc();
//   abc();

// }

// void abc()
// {
//   //int a=1;   //allfunction call time op is 1 always bcz your wirte function variable declaration is local variable ;
//   //  static int a=1; //glbaol vriable chage value ; op 1 2 3  
//    static int a; // op 0 1 2  bcz default value is 0;
//   printf("%d",a);
//   a++;

// }












//extern 
#include<stdio.h>
//extern int a; //extern local variable
int a;
void abc(); //declaration
int main()
{
printf("%d",a); //op -?> 0 bcz degault is 0
 abc();
}

void abc()
{
  a++;
  printf("%d",a); //op 1
}
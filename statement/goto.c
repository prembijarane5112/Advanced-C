#include<stdio.h>
//you read 4 subject marks from student and calcualte total and percentage user enter mark above than 100 they show enter again marks

int main()
{
  int p,c,m,b,total,per ; //declare variable

  phy: printf("Enter physics marks:");
  scanf("%d",&p);  //stored phy marks memory address

  if(p>100)
  {
    printf("invalid marks enter again:\n");
    goto phy; //in phy is label means sytx of goto

  }

  che:printf("enter chemistry maeks:");
  scanf("%d",&c);

   if(c>100)
   {
    printf("invalid marks enter again:\n");
    goto che;
   }

   math:printf("enter math marks:");
   scanf("%d",&m);

   if(m>100)
   {
    printf("invalid marks enter again:\n");
    goto math;
   }


   bio:printf("enter bio marks:");
   scanf("%d",&b);

   if(b>100)
   {
    printf("invalid marks enter again:");
    goto bio;
   }

   //total marks
   total=p+c+m+b;
   per=total/4;

   printf("total marks is:%d\n",total);
   printf("percentage is :%d ",per);
}
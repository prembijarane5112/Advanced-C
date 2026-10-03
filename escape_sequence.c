// escape sequence means special characteer 
#include<stdio.h>
int main()
{
  // printf("Hello\n world\n"); //n means next lines 
  //  printf("hello\t world\t"); //tab menas space of both charavter tab space;

    // printf("hello\rworld"); //carriage return  menas after r they print only not before r print 

    // printf("hello\bworld");  // /b movess cursor one position backward;
    
    // printf("hello\vworld");  // v menas vertival tab 

    // printf("hello\fworld"); // f means form feed; Historically, it was used with printers to move to the next page/form

    // printf("A\\B") ; //->  \\ backslash \\ actual backslashescape markerMemory trick\\ → print \


    // printf("\"hello\"");  // print double quote But suppose you want:"Hello" You cannot write: printf(""Hello""); because the quotes would terminate the string.Use: printf("\"Hello\"");
  
  
    // printf("\'p\'");  //printf("Hello"); But suppose you want: "Hello" You cannot write: printf(""Hello""); because the quotes would terminate the string.


    // printf("\?");  /wuqestion marks;
  }
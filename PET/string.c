

#include <stdio.h>
#include <string.h>

/*
char *replace(char str1[], char str2[])
{
    int i = 0, j = 0;

    // Find first word of str2 and copy it to str1
    while (str2[j] != '\0' && str2[j] != ' ')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }


    // Find where first word of original str1 ends
    while (str1[i] != '\0' && str1[i] != ' ')
    {
        i++;
    }

    return str1;
}

int main(void)
{
    char str1[50];
    char str2[30];

    printf("Enter string 1:");
    scanf("%[^\n]",str1);

    getchar();
    printf("Enter string2:");
    scanf("%[^\n]",str2);

    



    char *ret = replace(str1, str2);

    printf("%s\n", ret);

    return 0;
}

*/








// wap count the braces 

#include<stdio.h>
int main()
{
    char str[30];
    char str2[30];
    int val,tok=-1;
    printf("enter string:");
    scanf("%s",str);



    for(int i=0; str[i]!=0;i++)
    {
        if(str[i]=='(' )
        {
            val=1;
        }
    
        else if( str[i]=='[')
        {
            val=2;
        }
        else if(str[i]=='{')
        {
            val=4;
        }

        else 
        val=0;

        if(val!=0)
        {
            str2[++tok]=val;
        }
        else if(str[i]==')' || str[i]==']' || str[i]=='}')
        {
            if(tok==-1)
            {
                printf("not equal:");
                return 0;
            }
            if(str[i]==')')
            val=1;
            else if(str[i]==']')
            val=2;
           else 
            val=4;

         if(str2[tok] &val!=0)
            tok--;
             else
             {printf("not equal");
               return 0;
             }

        }
    }

    if(tok==-1)
    {
     printf("string not equal:");
    }
    else 
    printf("string is equal:");
}

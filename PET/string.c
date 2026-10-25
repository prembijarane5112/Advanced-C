
#include <stdio.h>
#include <string.h>

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

// Program to check whether a character is present in string or not
#include <stdio.h>
#include <string.h>

int check_character(char *str, char c)
{
    int i, flag = 0;
    int n = strlen(str);

    for (i = 0; i < n; i++)
    {
        if (str[i] == c)
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

int main()
{
    char str[100];
    char c;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to check: ");
    scanf(" %c", &c);

    if (check_character(str, c))
    {
        printf("The character is present in the string\n");
    }
    else
    {
        printf("The character is not present in the string\n");
    }

    return 0;
}
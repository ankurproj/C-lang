#include <stdio.h>

int main()
{
    int year;
    printf("Enter year \n");
    scanf("%d", &year);

    if (year % 4 == 0)
        printf("%d is Leap year" , year);

    else if (year % 400 == 0)
        printf("%d is Leap year", year);
    else if (year % 100 == 0)
        printf("%d is not Leap year", year);
    else
        printf("%d is not Leap year", year);
    return 0;
}
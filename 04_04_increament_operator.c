#include<stdio.h>

 int main()
{
    int i = 5;
    printf("The value of i++ is %d\n", ++i);
    ++i; // --> pehle increament phir print
    i++; // --> pehle print phir  increament
    printf("The value of i is %d\n", i);
    return 0;
}
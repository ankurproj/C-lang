#include <stdio.h>

int main()
{
    int i=1, sum=0, n=10;

    for(int i=1; i<=n; i++){
        sum =sum + 8*i;
    }
    printf("The value of table 8 is %d \n", sum);
    return 0;
}
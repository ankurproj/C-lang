#include <stdio.h>

int main()
{
    int i=1, n=3,factorial=1;

    for(int i=1; i<=n; i++){
        factorial *=i;
    }
    printf("The value of factorial %d is %d \n", n, factorial);
    return 0;
}
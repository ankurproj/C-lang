#include <stdio.h>

int main()
{
    int n;
    printf("Enter the table number \n");
    scanf("%d", &n);

    for(int i=0; i<10; i++){
        printf("\n %d X %d =%d \n", n, i+1, (i+1)*n);
    }
    return 0;
}
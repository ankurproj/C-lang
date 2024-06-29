#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter four number");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > b && a > c && a > d){
        printf("%d is greatest", a);
        }
    else if (b > c && b > d){
        printf("%d is greatest", b);
        }
    else if (c > d){
        printf("%d is greatest", c);
        }
    else{
        printf("%d is greatest", d);
        }
return 0;
}
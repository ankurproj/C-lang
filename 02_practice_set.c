#include<stdio.h>

    int main(){
//     int a; int b=a;
//     int v = 3^3;
//     char dt = '21'; // use 2(one character) instead of 21
//     0.33;
//     printf("%d", v);

//     Q3. Wap to determine whether a anumber is divisible by 97 or not
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num%97);

    //Q4. Step by step evaluation of 3*x/y-z+k
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y -z + k;
    // 6/3 -3 +1
    // 2 -3 + 1
    // 0
    printf("The value of result is %d", result);

    return 0;
}
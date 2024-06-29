#include<stdio.h>

int main(){
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("The address of variable is %u\n", ptr);
    printf("The value of variable is %d\n", *ptr);
}
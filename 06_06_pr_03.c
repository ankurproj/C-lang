#include<stdio.h>
void change(int *ptr);

int main(){
    int a;
    printf("Enter the value of a: \n");
    scanf("%d",&a);
    int *ptr = &a;
    printf("The current value of a is %d\n", a);
    change(ptr);
    printf("The change value of a is %d\n", *ptr);
    return 0;
}

void change(int *ptr){
    (*ptr)*= 10;
}
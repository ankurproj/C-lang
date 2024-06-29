#include<stdio.h>
int sum(int);

int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("The sum of first %d natural number is %d", n,sum(n));
    return 0;
}

int sum(int n){
    if(n!=0)
    return n + sum(n-1);
    else
    return n;
}
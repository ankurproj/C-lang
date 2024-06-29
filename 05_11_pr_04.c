#include<stdio.h>
int fib(int);

int main(){
   
    int n;
    printf("Enter number to find fibonacci term:");
    scanf("%d",&n);
    printf(" %dth term in fibonacci series is %d", n, fib(n));
    return 0;  
}

int fib(int n){
    if (n==0){
        return 0;
    }
    else if(n==1 || n==2){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

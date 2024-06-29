#include<stdio.h>
#include<string.h>

struct  employee
{
    int code;
    float salary;
    char name[15];
};

int main(){
    int a=35;
    char b='g';
    float d= 353.435;
    //employee e1;
    //e1.salary=353.435; ---> wont work without employee structure

    struct employee e1;
    e1.code=100;
    e1.salary=353.435;
    //e1.name="Ankur"; -->wont work
    strcpy(e1.name, "Ankur");

    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);
    
    return 0;
}
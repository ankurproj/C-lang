#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];
    facebook[0].code=100;
    facebook[0].salary=10.85;
    strcpy(facebook[0].name, "Ankur");

    facebook[1].code=101;
    facebook[1].salary=13.85;
    strcpy(facebook[1].name, "Ramesh");

    facebook[2].code=102;
    facebook[2].salary=12.85;
    strcpy(facebook[2].name, "Prince");
    printf("Done");

    return 0;
   
}
#include<stdio.h>

int main(){

    char *ptr = "ANKUR BHAI";
    //char ptr[] = "ANKUR BHAI"; --> can't re-initialize
    ptr = "PRINCE BRO";
    printf("%s", ptr);
    return 0;
}
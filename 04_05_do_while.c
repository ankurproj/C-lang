#include <stdio.h>

int main()
{
    int i = 0;
    //even int i =234; // --> it execute one time 
    do{
        printf("The value of i is %d\n", i);
        i++;
    }while(i <10);
    
    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
    char *group1 = "This";
    char group2[45];
    strcpy(group2, group1);
    printf("Now the group2 is %s", group2);
    return 0;
}
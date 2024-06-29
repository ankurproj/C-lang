#include<stdio.h>
// ASCII value of lowercase character is 97 to 112
int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch<=112 && ch>=97){
        printf("It is lowercase");
    }
    else{
        printf("It is not lowercase");
    }
    return 0;
}
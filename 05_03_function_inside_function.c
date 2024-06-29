#include<stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(){
    GoodMorning();
    return 0;
}

void GoodMorning(){
    printf("Good Morning Ankur \n");
    GoodAfternoon();
}
void GoodAfternoon(){
    printf("Good Afternoon Ankur \n");
    GoodNight();
}
void GoodNight(){
    printf("Good Night Ankur \n");
}
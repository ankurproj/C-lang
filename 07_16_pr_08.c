#include<stdio.h>
void printTable(int *mulTable, int num, int n){
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%dx%d = %d\n", num, i+1, mulTable[i]);
    }
    printf("************************************\n\n");
}

int main(){
    int a,b,c;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter table:\n");
    scanf("%d",&b);
    printf("Enter number of times:\n");
    scanf("%d",&c);
    int mulTable[3][b];
    printTable(mulTable[a],b,c);

    return 0;
}
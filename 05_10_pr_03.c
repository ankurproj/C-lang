//Program to calculate force of attraction on a body of mass m exerted by earth
#include <stdio.h>
float force(float mass);
int main()
{
    float mass;
    printf("Enter value of mass in kgs\n");
    scanf("%f", &mass);
    printf("The value of force in Newton is %.2f\n", force(mass) ); // .2 --> use for how many digit after decimal being used
    return 0;
}
    float force(float mass){
        float result = mass * 9.8;
        return result;
    }
    
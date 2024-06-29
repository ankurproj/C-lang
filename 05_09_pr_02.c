// Program to convert celsius into fahrenheit using function
#include <stdio.h>
float fahrenheit(float celsius);
int main()
{
    float celsius;
    printf("Enter temperature in celsius\n");
    scanf("%f", &celsius);
    printf("The value of temperature in fahrenheit is %f\n", fahrenheit(celsius) );
    return fahrenheit;
}
    float fahrenheit(float celsius){
        float temperature = (celsius  * 9)/5 + 32;
        return temperature;
    }
    
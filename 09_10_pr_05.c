#include<stdio.h>
typedef struct complex
{
    float real;
    float imaginary;

} complex;

void print_complex(complex z) {
    if (z.imaginary>=0){
        printf("%.2f + %.2fi\n", z.real, z.imaginary);
    }
    else {
        printf("%.2f - %.2fi\n", z.real, -z.imaginary);
    }
}

complex add(complex a, complex b){
    complex result;
    result.real=a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
complex multiply(complex a, complex b){
    complex result;
    result.real= a.real * b.real - a.imaginary + b.imaginary;
    result.imaginary =  a.real * b.real + a.imaginary * b.imaginary;
    return result;
}
int main(){
    complex z1={1.5,3.4};
    complex z2={2.5,6.8};

    printf("z1=");
    print_complex(z1);

    printf("z2=");
    print_complex(z2);

    complex sum = add(z1 , z2);
    printf("z1 + z2 = ");
    print_complex(sum);

    complex product= multiply(z1 , z2);
    printf("z1 * z2 = ");
    print_complex(product);


return 0;
}
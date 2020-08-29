#include<stdio.h>
struct complex
{
    float real;
    float imag;
};
struct complex add(struct complex n1, struct complex n2);
main()
{
    struct complex a,b,c;
    printf("Enter value of first real: ");
    scanf("%f", &a.real);
    printf("Enter value of first imaginary: ");
    scanf("%f", &a.imag);

    printf("\nEnter value of second real: ");
    scanf("%f", &b.real);
    printf("Enter value of second imaginary: ");
    scanf("%f", &b.imag);


    c= add(a, b);
    printf("\nSum of two complex number: %.1f + %.1fi\n", c.real, c.imag);
}
struct complex add(struct complex n1, struct complex n2)
{
    struct complex z;
    z.real=n1.real+n2.real;
    z.imag=n1.imag+n2.imag;
    return z;
}

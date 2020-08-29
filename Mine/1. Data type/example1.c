
#include <stdio.h>

int main()
{
    printf("Welcome to CSE115");
    float x;

    float y;
    float z;

//x=5.6;
//y=13.0;
    printf("\nEnter the value of x:");
    scanf ("%f", &x);
    printf("\nEnter the value of y:");
    scanf ("%f", &y);
    z = x + y;
    printf ("\nThe value of z is: %.2f", z);
    z = x - y;
    printf ("\n \tThe value of z is: %.2f", z);
    return 0;//return 0;
}

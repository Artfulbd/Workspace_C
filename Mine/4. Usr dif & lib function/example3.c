// function with argument
#include <stdio.h>

// function prototype
float summation (int,float);
int main ()
{
    int a;
    float b;
    float sum;
    printf("\nEnter the value of the integer: ");
    scanf ("%d", &a);
    printf("\nEnter the value of the float: ");
    scanf ("%f", &b);
    sum = summation (a,b);
    printf("\nThe addition of a and b is: %.2f", sum);
    return 0;
}
//function definition
float summation(int a1, float b1)
{
    float add;
    add = a1+b1;
    return add;
}


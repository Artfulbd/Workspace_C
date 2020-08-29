// function with argument
#include <stdio.h>
#define pi 3.1416
// function prototype
double res_area (double r);

int main()
{
    double area, r;
    printf ("Enter the radius of the circle:");
    scanf ("%lf", &r);
    area= res_area(r);
    printf ("\n\nThe area of the circle is:%5.2f", area); //formatting
    printf ("\nThe area of the circle is:%7.2f", area); //formatting
    printf ("\nThe area of the circle is:%4.2f", area); //formatting
    printf ("\nThe area of the circle is:%13.3f", area);
    return 0;
}
//function definition
double res_area (double r)
{
    double ar;
    ar = pi * r * r;
    return ar;
}

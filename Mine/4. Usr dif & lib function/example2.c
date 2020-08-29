// function with argument
#include <stdio.h>
#define pi 3.1416
// function prototype
double res_area(double  );
double res_circum (double);
int main ()
{
    double area, r, circumference;
    printf ("Enter the radius of the circle: \n");
    scanf ("%lf", &r);
    area= res_area(r);
    circumference = res_circum (r);
    printf ("\nThe area of the circle is:%5.2f", area);
    printf ("\nThe circumference of the circle is:%5.2f", circumference);
    return 0;
}
//function definition
double res_area (double rad1)
{
    double ar;
    ar = pi * rad1 * rad1;
    return ar;
}
double res_circum (double rad2)
{
    //double res = 2*pi*rad2
    //return res;
    return 2*pi*rad2;
}

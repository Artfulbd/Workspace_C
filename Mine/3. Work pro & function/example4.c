// function without argument
#include <stdio.h>
// function prototype
double res_area (double  );
int main ()
{
    double r, result;
    printf ("\nEnter the radius: ");
   // scanf ("%lf",&r);
    result= res_area(2.3);
    printf ("Area of the circle is %.2f", result);
    return (0);
}
//function definition
double res_area (double s)
{

    double area;

    area = 3.1416 * s * s;
    return area;
}

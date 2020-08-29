// function without argument
#include <stdio.h>
// function prototype
void res_area ();
int main ()
{
    res_area();
    return (0);
}
//function definition
void res_area ()
{
    double r;
    double area;
    printf ("\nEnter the radius: ");
    scanf ("%lf",&r);
    area = 3.1416 * r * r;
    printf ("Area of the circle is %.2f", area);
}

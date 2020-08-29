// use of library function
#include <stdio.h>
#include <math.h>
//use of macro
#define pi 3.1416
int main (){
float a,b,c, angle;
printf("\nEnter the value of b: ");
scanf ("%f", &b);
printf("\nEnter the value of c: ");
scanf ("%f", &c);
printf("\nEnter the angle: ");
scanf ("%f", &angle);
a = sqrt(pow(b,2) + pow (c,2) - 2*b*c*cos(angle * pi / 180.0));
printf("\nThe length of a is: %.2f", a);
return 0;
}


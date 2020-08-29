// function without argument
#include <stdio.h>
// function prototype
double res_area ();
int main (){
double res1, res2, res3;
printf ("\nFor outer circle: ");
res1 = res_area();
printf ("\nFor inner circle: ");
res2= res_area();
res3 = res1 - res2;
printf ("\nits final count down %.3f", res3);
//res_area();
return 0;
}
//function definition
double res_area (){
double r;
double area;
printf ("\nEnter the radius: ");
scanf ("%lf",&r);
area = 3.1416 * r * r;
printf ("Area is %.3f", area);
return area;
}

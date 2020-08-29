//Result: integer perspective
#include <stdio.h>
int main (){
int a, b;
float result;
printf("Enter the value of a and b: \n");
scanf ("%d %d", &a, &b);
printf ("\nthe value of a and b: %d %d", a,b);
result = a /(float)b;
printf ("\nthe Quotient is: %f", result);
return 5;
}

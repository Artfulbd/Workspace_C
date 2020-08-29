/*Result: Double type,
Type casting (changing the data type)
*/
#include <stdio.h>
int main (){
int a, b;
float result;
printf("Enter the value of a and b: \n");
scanf ("%d %d", &a, &b);
//result =  a / b; // wrong
result =  (float)a / b;
//printf ("\nthe Quotient is: %f", result);
printf ("\nthe Quotient is: %f", result); //formatting a number
}

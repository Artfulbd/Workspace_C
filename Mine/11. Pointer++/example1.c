//constant the value of the variable that the pointer is pointing to
#include <stdio.h>
void main ()
{
    int a = 5;
    int b = 8;
    const int *p;
    p =&a;
    printf ("\nThe value of a is = %d ", *p);
    //*p = 123;
    p = &b;
    printf ("\nThe value of a is = %d", *p);
}

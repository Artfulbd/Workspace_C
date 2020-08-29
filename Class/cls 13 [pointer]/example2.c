#include <stdio.h>

void main ()
{
    int a,b,*c;
    a = 100;
    b = 200;
    c = &a;

    printf ("\na = %d, b = %d, c = %x\n", a, b, c);
    b = *c;
    *c = 5;
    printf ("\na = %d, b = %p, c = %x\n", a, b, c);
    int x, *d;
    d = &b;
    x = (*c)* (*d);
    printf("\n%d\n", x);
}

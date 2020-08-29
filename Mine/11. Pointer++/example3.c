#include <stdio.h>

void main ()
{
    int a = 5, j =1234;
    //int *p;
    int *const p = &a;
    // p =&a;
    printf ("\nThe value of a is = %d ", *p);
    *p = 12;
    printf ("\nThe value of a is = %d", *p);
   //p = &j;
    printf ("\nThe value of a is = %d", *p);
}

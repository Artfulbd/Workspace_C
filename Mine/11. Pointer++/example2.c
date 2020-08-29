//constant the reference address that the pointer is pointing to
#include <stdio.h>
void main ()
{
    int a = 5;
    int j =1234;
    int *const p = &a;
    //int *p;

    // p =&a;
    printf ("\nThe value of a is = %d ", *p);
    *p = 12;
    printf ("\nThe value of a is = %d", *p);
    p = &j;
    printf ("\nThe value of a is = %d", *p);
}

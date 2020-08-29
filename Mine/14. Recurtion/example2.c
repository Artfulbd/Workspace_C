//about stack
#include <stdio.h>
void add (int, int);
int main ()
{
    add (5,2);
    return 0;
}
void add (int a, int b)
{
    int result = a + b;
    printf ("\nThe summation is: %d\n", result);
}

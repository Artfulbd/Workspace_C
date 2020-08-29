#include <stdio.h>
void swap (int *, int *);
void main ()
{
    int x = 5, y =10;
    printf ("\nBefore passing to the function x = %d \t y = %d\n",x,y);
    swap (&x,&y);
    printf ("\nAfter swap x = %d \t y = %d\n",x,y);
}
void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

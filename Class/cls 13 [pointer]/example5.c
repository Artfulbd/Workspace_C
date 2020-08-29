#include <stdio.h>
void main ()
{
    int *ptr, x = 123;
    //printf("\n address of pointer= %X, value = %d", ptr,*ptr);
    ptr = &x;
    printf("\naddress of pointer= %X, value = %d", ptr,*ptr);
}

// Array of pointer
#include <stdio.h>
const int MAX = 5;

int main ()
{
    int  arr[] = {123, 234, 345, 345, 234};
    int i, *ptr[MAX];
    for ( i = 0; i < MAX; i++)
    {
        printf ("\nThe address of arr[%d] is %x", i, &arr[i]);
    }

    for ( i = 0; i < MAX; i++)
    {

        ptr[i] = &arr[i]; /* assign the address of integer. */
    }
    printf("\n====================================================");
    for ( i = 0; i < MAX; i++)
    {
       printf("\nValue of arr[%d] = %d\n", i, *ptr[i] );

         //printf ("\nThe value of ptr[%d] is %x", i, ptr[i]);
    }
    return 0;
}

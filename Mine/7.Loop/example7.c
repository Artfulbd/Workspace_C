#include <stdio.h>

void  main ()
{
    int number;
    do
    {
        printf("\nEnter a number between 0 through 10:");
        scanf ("%d",&number);
    }
    while (number<0 || number>10);
    printf ("right choice!");
}

#include <stdio.h>

void main ()
{
    int rub_el;
    int happy;
    float result;
    int remainder;
    rub_el= 16;
    happy = 3;
    result =  (float)happy/rub_el ;
    printf("\nThe division is: %.2f", result);
//printf("\nThe division is: %.2f", (float)happy/ rub_el);
    remainder =  happy % rub_el ;
    printf("\nThe remainder is: %d", remainder);
}

#include <stdio.h>

int main ()
{

    int a = 5, b = 10, c = 15, d = 20, e = 25;
    double avg;

    avg = (double)(a + b + c + d + e) / 5 ;

    printf ("The average of the sum of %d %d %d %d %d  is %lf.", a,b,c,d,e,avg);

    return 0;

}

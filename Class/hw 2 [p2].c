#include <stdio.h>
float CalTotal();
main ()
{
    printf("\n\n  Sum of the following expression:%f\n\n"
           ,
            CalTotal());
}

float CalTotal()
{
    float s = 0, N;
    int i;
    printf ("\n Please enter value of N: ");
    scanf ("%f",&N);
    for (i=1; i<=N; i++)
    {
        if( i%2 == 0)
            s -= (1/(float)i);
        else
            s += (1/(float)i);
        if (i == 1)
            printf("\n (1/%d )",i);
        else if (i%2==0)
            printf(" - (1 / %d )", i);

        else
            printf(" + (1 / %d)", i);
    }
    return s;
}

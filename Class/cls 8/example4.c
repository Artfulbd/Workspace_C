#include <stdio.h>

void  main ()
{
    int x = 10, a = 5, b = 15;
    printf ("   --x   --a   --b\n");
    printf ("  -----------------\n");
    while (--a,--b,--x)
    {
        printf ("\n %5d %5d %5d",x,a,b);
    }

}

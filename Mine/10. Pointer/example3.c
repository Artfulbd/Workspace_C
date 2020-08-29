#include <stdio.h>

void main ()
{
    int i, even [5] = {2,4,6,8,10};
    int *p;
    //int* p;
    p = even;

    /*for (i = 0; i<5; i++)
    {
        printf ("\n%d\n",*p);
        p++;
    }/


    for (i = 0; i<5; i++)
    {
        printf ("\n%d\n",*(p+i));
    }
/*
     for (i = 0; i<5; i++)
    {
        printf ("\n%d\n",p[i]);
    }
*/


    /* for (i = 0; i<5; i++){
     printf ("\n%d\n",*(even+i));
     }
      */
}

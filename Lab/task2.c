#include<stdio.h>
main()
{
    int m, s = 1, t = 1,rs, i;
    printf("Enter the value of n: ");
    scanf("%d",&m);
    int *p = &s, *q = &t, *r=&rs, *n=&m;

    for ( i = 0 ; i < *n ; i++ )
    {
        if ( i <= 2)
        {
            *r = 1;
        }
        else
        {
            *r = *p + *q+1;
            *p = *q;
            *q = *r;
        }

        printf("%d\t",*r);
    }
}

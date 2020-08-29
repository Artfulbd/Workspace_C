#include <stdio.h>
main()
{
    int i;
    for(i=20; i>-1; i--)
    {
        if(i==17 || i==13 || i==3)
        {
            continue ;
        }
        printf(" %d\t",i);
    }
}

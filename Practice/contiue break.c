#include <stdio.h>
void main()
{
    int i;
    for(i=10; i>0; i=i-1)
    {
        if(i!=6)
        {
            //break;
            //continue;
            printf("\n-----------\n");
        }
        else
        {
            printf("%d ",i);
        }
    }
}

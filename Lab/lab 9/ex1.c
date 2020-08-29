#include <stdio.h>
void main()
{
    int i,j;
    i=1;
    while(i<=3)
    {
        printf("Outer loop counting i: %d\n",i);
        j=1;
        while(j<=3)
        {
            printf("Inner loop counting j: %d\n",j);
            j++;
        }
        printf("\n");
        i++;
    }
}

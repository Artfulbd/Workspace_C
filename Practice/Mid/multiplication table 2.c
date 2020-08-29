
#include <stdio.h>
void main()
{
    int i,j;
    printf("Multiplication table from 1 to 9 \n\n");
    for(i=0;i<=10;i++)
    {
        for(j=1;j<=9;j++)
        {
            printf("  %d \t",i*j);

        }
        printf("\n");
    }
}

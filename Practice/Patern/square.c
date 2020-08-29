#include <stdio.h>
void main()
{
    int i,j,r;
    printf("Enter number of raws: ");
    scanf("%d",&r);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=r; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

}


#include <stdio.h>
main()
{
    int i,j,c,r;
    printf("Enter number of raws: ");
    scanf("%d",&r);
    printf("Enter number of column: ");
    scanf("%d",&c);
    for(i=1; i<=r; i++)
    {
         for(j=i;j<=r;j++)
        {
            printf(" ");
        }
        for(j=1;j<=c;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}


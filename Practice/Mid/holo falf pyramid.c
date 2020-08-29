#include <stdio.h>
main()
{
    int i,j,n;
    printf("Enter number of raws: ");
    scanf("%d",&n);
    /* for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }*/
    for(i=2;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
           if(i==1||j==i||j==n)
           {
                printf(" *");
           }
           else
           {
                printf("  ");
           }
        }
        printf("\n");

    }
}

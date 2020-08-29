#include <stdio.h>
main()
{
    int i,j,n;
    printf("Enter number of raws: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i+(i-1);j++)
        {
            if(j==1||j==i+(i-1)||i==n)
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

    printf("\n\n");
    //inverted
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(j=i+(i-1);j<=n+(n-1);j++)
        {
            if(i==1||j==i+(i-1)||j==n+(n-1))
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

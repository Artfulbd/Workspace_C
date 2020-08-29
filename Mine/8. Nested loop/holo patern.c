#include <stdio.h>
main()
{
    int i,j,n=6;
    //printf("Enter number of raws: ");
    // scanf("%d",&n);
    //right triangle
    for(i=1;i<=n;i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1||j==i||i==n)
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
    //mirror right
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            if(j==1||j==i||i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    //inverted right
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            if(j==i||j==n||i==1)
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
    //inverted mirror right
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)
        {
            if(i==1||j==i||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    //half pyramid

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
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
    }
    for(i=2; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            if(j==i||j==n)
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
    //pyramid

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            if(j==1||j==i||i==n)
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
    //diamond

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
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
    }
    for(i=2; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)
        {
            if(j==i||j==n)
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
    //mirror half diamond
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            if(i==1||j==i||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}

#include <stdio.h>
main()
{
    int i,j,n=6;
    //printf("Enter number of raws: ");
   // scanf("%d",&n);
    //right triangle
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }


    printf("\n\n");
    //mirror right
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n\n");
    //inverted right
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    printf("\n\n");
    //inverted mirror right
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    //half pyramid

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" *");
        }printf("\n");

    }
    printf("\n\n");
    //pyramid

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }

     printf("\n\n");
    //diamond

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
     for(i=2; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf(" *");
        }
        printf("\n");
    }



}

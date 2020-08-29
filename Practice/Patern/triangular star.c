#include <stdio.h>
void main()
{
    int i,j,r=6;
   // printf("Enter number of Raws: ");
   // scanf("%d",&r);

    //right triangle
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf(" \n");
    }


    printf("\n\n");

    //inverted right triangle
    for(i=1;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        {
            printf(" *");
        }
        printf("\n");
    }


    printf("\n\n");


    //inverted mirror right triangle
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=r;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");


    //mirror right triangle
    for(i=1;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

     printf("\n\n");


     //isosceles triangle

     for(i=1;i<=r;i++)
     {
         for(j=i;j<=r;j++)
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


     //inverted isosceles triangle
     for(i=1;i<=r;i++)
     {
         for(j=1;j<=i;j++)
         {
             printf(" ");
         }
         for(j=i;j<=r;j++)
         {
             printf(" *");
         }
         printf(" \n");
     }
     printf("\n\n");


     //diamond
     for(i=1;i<=r;i++)
     {
         for(j=i;j<=r;j++)
         {
             printf(" ");
         }
         for(j=1;j<=i;j++)
         {
             printf(" *");
         }
         printf("\n");
     }
     for(i=2;i<=r;i++)
     {
         for(j=1;j<=i;j++)
         {
             printf(" ");
         }
         for(j=i;j<=r;j++)
         {
             printf(" *");
         }
         printf("\n");
     }

}

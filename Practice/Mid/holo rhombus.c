
#include <stdio.h>
main()
{
    int i,j,n;
    printf("Enter number of raws: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1; j<=n; j++)
        {

           if(i==1||j==1||i==n||j==n)
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

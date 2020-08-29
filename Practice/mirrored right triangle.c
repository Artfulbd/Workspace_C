#include <stdio.h>
void main()
{
    int i,j, r;
    printf("Enter number of raws: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
       for(j=i;j<r;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

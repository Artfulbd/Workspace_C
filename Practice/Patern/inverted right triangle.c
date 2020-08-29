#include <stdio.h>
void main()
{
    int i,j,r;
    printf("Enter number of raws: ");
    scanf("%d",&r);
    for(i=r;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}

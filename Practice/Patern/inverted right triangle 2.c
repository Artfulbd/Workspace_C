#include <stdio.h>
void main()
{
    int i,j , r;
    printf("Enter the number of raws: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    //for(i=0;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        //for(j=i;j<r;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}



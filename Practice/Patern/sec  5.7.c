#include <stdio.h>
void main()
{
    int i,j,r;
    //printf("Enter number of raws: ");
    //scanf("%d",&r);
    for(i=0; i<=5; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=4;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}

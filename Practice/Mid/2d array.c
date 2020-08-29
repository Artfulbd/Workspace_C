#include <stdio.h>
main()
{
    int i,j,s,c;
    printf("Enter row and column of array: \n");
    scanf("%d %d",&s,&c);
    int a[s][c];
    for(i=0;i<s;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements at a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
for(i=0;i<s;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Entered elements are at a[%d][%d]: %d\n",i,j,a[i][j]);
        }

    }

}


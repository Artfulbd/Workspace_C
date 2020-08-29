#include <stdio.h>
main()
{
    int i,j,s=0,c=6,r=8;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int ar[r][c];
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements at ar[%d][%d]: ",i,j);
            scanf("%d",&ar[i][j]);
        }

    }
    printf("\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
            //if(i==0||j==0||i==r-1||j==c-1)
            if(i==j||(i+j)==(r-1))
            {
                s+=ar[i][j];
            }
        }
    }
    printf("\n\n\t Sum is %d",s);
}


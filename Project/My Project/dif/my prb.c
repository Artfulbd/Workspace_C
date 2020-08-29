#include <stdio.h>
main()
{
   int i,j,sum=0,c=3,r=3,a=1;
   /* printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);*/
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
            if(i==j)
            {
                printf("Elements ar[%d][%d] : %d\n",i,j,ar[i][j]);
                sum+=ar[i][j];

            }
            else if(i==c-a||j==r-a)
              {
                printf("Elements ar[%d][%d] : %d\n",i,j,ar[i][j]);
                sum+=ar[i][j];
                a++;
            }
            else
            {
                sum+=0;
            }

        }
    }
    printf("\n\n\t Sum is %d",sum);
}

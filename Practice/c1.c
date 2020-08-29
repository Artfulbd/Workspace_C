#include <stdio.h>
main()
{
     int n,i;
        float t=0,s;
        printf("Enter how many numbers Do you want to add: ");
        scanf("%d",&n);
        printf("Enter Numbers one by one :\n\n");
        for(i=0;i<n;i++)
        {
            printf("\t\t\t");
            scanf("%f",&s);
            t+=s;
        }
        printf("---------------------------------");
        printf("");
        printf("\n  Sum of %d numbers   =  %.2f\n",n,t);
}

#include <stdio.h>
main()
{
    int i,j,n=4;
    printf("Enter value for n : \n");
    //scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("d");
        }

        for(j=1; j<=i+(i-1); j++)
        {
            if(i==4||j==1||j==i*2-1)printf("*");
            else printf(" ");
        }
        printf("\n");

    }
    for(i=0;i<5;i++)
     {
         for(j=0;j<6;j++)
         {
             if(i==0||i==4||j==0||j==5)
             {
               printf("*");
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
     }
}

#include<stdio.h>
main()
{
    int i,j;
     for(i=1;i<=4;i++)
     {
         for(j=1;j<=6;j++)
         {
             //printf("%d",j);
             if((i==1||i==4)&&(j==3||j==4))printf("*");
             else if((i==2||i==3)&&(j==1||j==6))printf("*");
             else printf(" ");
         }
         printf("\n");
     }
    printf("\n\n");

}

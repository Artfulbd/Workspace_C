#include<stdio.h>
main()
{
    int a,i;
    printf("\n  Enter number to print multiplication table of : ");
    scanf("%d",&a);
    for(i=1;i<11;i++)
    {
            printf("     %d * %d = %d\n",a,i,a*i);

    }
    printf("\n");

}


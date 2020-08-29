#include <stdio.h>
void  main()
{
    int s, e,i;
    printf("Enter starting number: ");
    scanf("%d",&s);
    printf("Enter starting number: ");
    scanf("%d",&e);
    i=s;
    if(i<=e)
    {
        printf("Printing numbers from start to end\n");
        while(i<=e)
        {
            printf("%8d \n",i);
            i++;
        }
        printf("Hahaha you got it");
    }
    else
    {
        printf("Starting number should be smaller then ending number.");
    }
}

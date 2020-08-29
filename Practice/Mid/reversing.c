#include <stdio.h>
main()
{
    int i,t=0;
    printf("Enter number: ");
    scanf("%d",&i);
    while(i>0)
    {
        t=t*10;
        t=t+i%10;
        i=i/10;
    }
    printf("\nReversed form is: %d",t);
}

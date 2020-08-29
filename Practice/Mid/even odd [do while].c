#include <stdio.h>
main()
{
    int i;
    do
    {
        printf("Enter number : ");
        scanf("%d",&i);
    }
    while(i%2!=0);
    {
        printf(" Entered even");
    }
}

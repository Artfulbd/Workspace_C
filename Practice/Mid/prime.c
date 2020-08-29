#include <stdio.h>
main()
{
    int i,j,flag=1;
    printf("Enter number to detect prime or not: ");
    scanf("%d",&i);
    for(j=2; j<=i; j++)
    {
        if(i%j==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0 && i!=1)
    {
        printf("Not prime");
    }
    else
    {
        printf("Prime");
    }
}

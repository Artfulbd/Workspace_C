#include<stdio.h>
main()
{
    int i,n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("The divisors of %d is: \n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("\t%d\n",i);
        }
    }

}

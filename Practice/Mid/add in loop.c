#include <stdio.h>
main()
{
    long n,d,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("\n%d",sum);

}

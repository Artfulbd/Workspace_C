#include <stdio.h>
main()
{
    long n,t,digit,sum=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        digit=n%10;
        sum*= digit;
        n/=10;
    }
    printf("Multiplication of the digits %ld is %ld\n",t,sum);
}


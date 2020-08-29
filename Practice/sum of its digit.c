#include <stdio.h>
main()
{
    long n,t,digit,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        digit=n%10;
        sum+= digit;
        printf("%d\n",digit);
        n/=10;
    }
    printf("Sum of the digits %ld is %ld\n",t,sum);
}


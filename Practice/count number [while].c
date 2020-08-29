#include <stdio.h>
void main()
{
    long long a;
    int c=0;
    printf("Enter number: ");
    scanf("%lld",&a);
    while(a!=0)
    {

        a/=10;
        c++;
    }
    printf("Total digits: %d", c);
}

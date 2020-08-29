#include <stdio.h>
void main()
{
    int i,n;
    printf("Print odd till : ");
    scanf("%d",&n);
    i=4;
    while(i<=n)
    {
        printf("%d\n",i);
        i+=2;
    }
}

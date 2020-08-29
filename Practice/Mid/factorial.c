#include <stdio.h>
long int get_fac(int);
main()
{
    int j;
    printf("Enter number to factorial: ");
    scanf("%d",&j);
    printf("Result is : %d",get_fac(j));
}

long int get_fac(int a)
{
    int r=1,i;
    for(i=a;i>0;i--)
    {
        r=r*i;
    }
    return r;
}

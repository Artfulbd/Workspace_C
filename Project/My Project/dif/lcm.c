#include<stdio.h>
#include <string.h>
int lcm(int a, int b);
main()
{
    int n1, n2;
    printf("\n\n   To find L.C.M.\n\n");
    printf("   Tell me the first number : ");
    scanf("%d",&n1);
    printf("\n   What is the second number?  : ");
    scanf("%d",&n2);
    if(n1 > n2)
    {
        printf("\n\n  LCM of %d and %d = %d", n1, n2, lcm(n2, n1));
    }
    else
    {
        printf("\n\n  LCM of %d and %d = %d", n1, n2, lcm(n1, n2));
    }
}

int lcm(int a, int b)
{
    static int r = 0;
    printf("\n\t%d",r);

    r += b;
    if((r % a == 0) && (r % b == 0))
    {
        return r;
    }
    else
    {
        return lcm(a, b);
    }
}

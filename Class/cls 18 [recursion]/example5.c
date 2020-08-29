#include <stdio.h>
int multiply (int, int);

int main ()
{
    int a,b;
    printf ("\nEnter m and n\n");
    scanf ("%d %d", &a, &b);
    int result = multiply(a,b);
    printf ("\nResult: %d\n", result);
    return 0;
}
int multiply (int m, int n)
{
    int ans;
    printf ("\nEntering multiply with m = %d , n = %d\n", m,n);

    if (n == 1)
        ans = m;
    else
        ans = m + multiply(m, n-1);

    printf ("\nmultiply (%d, %d) returning %d\n", m,n, ans);
    return ans;
}

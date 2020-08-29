#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter an positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    int ans;
    if(n == 0)
        ans = 1;
    else
        ans = n * factorial (n-1);
    return ans;
}

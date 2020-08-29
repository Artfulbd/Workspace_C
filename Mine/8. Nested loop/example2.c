#include <stdio.h>
int factorial (int);
int main ()
{
    int number, result;

    printf ("Enter the number: ");
    scanf ("%d",&number);
//factorial (number);
    result = factorial (number);

    printf ("\nThe factorial of %d is %d", number, result);
//printf ("\nThe factorial of %d is %d", number, factorial (number));

    return 0;
}

int factorial (int n)
{

    int i, product = 1;

    for ( i = n ; i > 1 ;  --i)
    {
        product = product * i ;
    }
//printf ("\nThe factorial of %d is %d", n, product);
    return (product);
}

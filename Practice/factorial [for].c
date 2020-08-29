#include<stdio.h>
long int factorial(long int);
void main()
{
    long int num;
    printf("Enter a number: ");
    scanf("%ld",&num);
    //factorial(num);
    printf("\nThe Factorial of %ld is %ld \n\n",num, factorial(num));
}

long int factorial(long int a)
{
    long int i, product=1;
    for(i=a; i>1; i--)
    {
        //product=product*i;
        product*=i;
    }
    return product;
}

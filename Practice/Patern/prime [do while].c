#include <stdio.h>
int check_prime(int a);
void main()
{
    int n;
    printf("Enter number to check prime: ");
    scanf("%d",&n);
    int check_prime( n);
    if(check_prime(n)==1)
    {
        printf("\nPrime\n\n");
    }
    if(check_prime(n)==2)
    {
        printf("\nNot prime\n\n");
    }
    printf("\n%d",check_prime(n));
    /*do
    {
        int check_prime(int n);
    }
    while(check_prime(n)!=2);
    {
        printf("wrong");
    }*/

}

int check_prime(int a)
{
    int c1=1, i=2;
    while(i<=(a/2))
    {
        if(a%i==0)
        {
            c1=0;
            break;
        }
        i++;
    }
    if(c1==1&& a>1)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

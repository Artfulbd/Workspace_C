#include <stdio.h>
void main()
{
    int a,i=2, b=1;
    printf("Enter a number to check prime or not: ");
    scanf("%d",&a);
    while(i<=(a/2))
    {
        if(a%i==0)
        {
            b=0;
            break;
        }
        i++;
    }
    if(b==0&&a>1)
    {
        printf("\nNot prime");
    }
    else{printf("\nPrime");}
}

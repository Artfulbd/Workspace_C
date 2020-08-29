#include <stdio.h>
void main()
{
    int a, num, isprime=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(a=2;a<=(num/2);a++)
    {
        if(num%a==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1 && num>1)
    {
        printf("\n Prime");
    }
    else{printf("\n Not prime");}
}

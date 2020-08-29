#include<stdio.h>
//#include<math.h> have to try this ..
int main()
{
    int number;
    int ii;
    int isprime;

    isprime=1;
    printf("\nEnter the integer number: ");
    scanf("%d",&number);

    for(ii=2; ii<= (number/2); ii++)
    {
        if(number%ii==0)
        {
            isprime=0;
            break;
        }

    }
    if(isprime==1 && number>1)
        printf("\nprime");
    else printf("\n Not prime");

    return 0;
}

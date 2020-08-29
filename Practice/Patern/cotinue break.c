#include <stdio.h>
void main()
{
    int n, i=2,a=1;
    printf("Enter number to check prime or not: ");
    scanf("%d",&n);
    while(i<=(n/2))
    {
        if(n%i==0)
        {
            a=0;
            break;
        }
        i++;
    }
    if(a==1)
    {
        printf("\n %d is Prime \n\n",n);
    }
    else{printf("\n%d is not Prime\n\n",n);}
}

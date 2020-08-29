#include <stdio.h>
void main()
{
    int s,t=0;
    printf("Enter number to revers: ");
    scanf("%d",&s);
    while(s>0)
    {
        t*=10;
        t+=s%10;
        s/=10;
    }
    printf("Reversed form: %d",t);
}


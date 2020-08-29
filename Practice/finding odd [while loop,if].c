#include <stdio.h>
void main()
{
    int a,b;
    printf("Print odd till: ");
    scanf("%d",&a);
    b=0;
    while(b<=a)
    {
        if(b%2!=0)
        {
            printf("%d\n",b);
        }
        b++;
    }
}

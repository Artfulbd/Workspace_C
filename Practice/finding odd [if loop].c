#include <stdio.h>
void main()
{
    int i,n;
    printf("Print odd number till: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        printf("%d\n",i);
    }

}

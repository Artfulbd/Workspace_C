#include <stdio.h>
main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==1)
    {
        printf("Total: R$ %.2f\n",b*4.0);
    }
    else if(a==2)
    {
        printf("Total: R$ %.2f\n",b*4.50);
    }
    else if(a==3)
    {
        printf("Total: R$ %.2f\n",b*5.0);
    }
    else if(a==4)
    {
        printf("Total: R$ %.2f\n",b*2.0);
    }
    else if(a==5)
    {
        printf("Total: R$ %.2f\n",b*1.50);
    }
}

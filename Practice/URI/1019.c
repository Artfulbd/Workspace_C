#include<stdio.h>
main()
{
    int a,h,m,s;
    scanf("%d",&a);
    h=a/3600;
    m=a%3600/60;
    s=a%60;
    printf("%d:%d:%d\n",h,m,s);
}



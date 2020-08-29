#include<stdio.h>
main()
{
    int a,y,y1,m,m1,d;
    scanf("%d",&a);
    y=a/365;
    y1=a%365;
    m=y1/30;
    m1=y1%30;
    d=m1%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
}

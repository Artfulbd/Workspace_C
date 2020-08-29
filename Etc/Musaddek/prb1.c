#include<stdio.h>
main()
{
    char *p[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int n;
    scanf("%d",&n);
    n-=1;
    printf("\n\t%d no. Month is: %s",n+1,p[n]);
}

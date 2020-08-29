#include <stdio.h>
main()
{
    int a,b,c;
    printf("Enter three number : \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("Greater is a: %d",a);
        }
        else printf("Greater is b: %d",b);
    }
    else{
    if(b>c)
    {
        printf("Greater is b: %d",b);
    }
    else
    {
        printf("Greater is c: %d",c);
    }}
}


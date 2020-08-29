#include <stdio.h>
main()
{
    int a,b,c,d;
    printf("Enter three number : \n");
    scanf("%d %d %d",&a,&b,&c);
    //d=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("Greater is : %d",a>b?(a>c?a:c):(b>c?b:c));
}


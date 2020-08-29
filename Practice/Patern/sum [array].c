#include <stdio.h>
main()
{
    int i,s[5],t=0;
    printf("Enter numbers: ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\%d",s[i]);
        t+=s[i];
    }
    printf(" Sum is: %d",t);
}

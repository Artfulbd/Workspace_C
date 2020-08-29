
#include <stdio.h>

main()
{
    char s[30],c;
    int i,j;
    printf(" Enter e string: ");
    gets(s);
    scanf("%c",&c);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==c)
        {
            printf("\n Found. ");
            break;
        }

    }
    puts(s);
}

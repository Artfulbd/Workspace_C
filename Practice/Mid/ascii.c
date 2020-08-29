#include <stdio.h>
main()
{
    char ch='A';
    printf("%c %d\n",ch,ch);
    char nch;
    nch=++ch;
    printf("%c %d\n",nch,nch);
    printf("%c %d\n",ch,ch);
}

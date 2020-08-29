#include <stdio.h>
main()
{
    char a,b;
    printf("\n  Enter 1st one: ");
    scanf("%c",&a);
    fflush(stdin);
    printf("  Enter 2nd one: ");
    scanf("%c",&b);
    char *s[]={"\n For 'and' "};
    printf("\n\n %c %c ",a,b);
}

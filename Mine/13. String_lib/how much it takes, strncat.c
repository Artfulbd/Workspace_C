
#include <stdio.h>
#include <string.h>
main()
{
    char p[30]="Adams, John Quincy",a[20]="aha aha ki moja";
    char d[40],e[20]="Adams, John Quincy";
    strncat(p,a,30-strlen(p)-1);
    p[29]='\0';
    strncpy(d,&p[strlen(e)],strlen(p)-strlen(e));
    d[strlen(p)-strlen(e)]='\0';
    puts(p);
    puts(a);
    puts(d);
    printf("Sorry We can take only \"%s\"\n",d);


}

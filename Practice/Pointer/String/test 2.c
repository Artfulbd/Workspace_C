#include <stdio.h>
#include<string.h>
main()
{
    char a[20]="Amar nam Shipu", cp[20]=" I am a NSUer..";
    strncat (a,cp,20-(strlen(a)-1));
    puts(a);
    puts(cp);
}

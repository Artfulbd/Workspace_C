#include <stdio.h>
void f1(char *str);
main()
{
    char *a="ARtful ..!";
    f1(a);
}
void f1(char *str)
{
    int i;
    puts(str);
    printf("\n");
    for (i=0;str[i]!='\0' && i==5;i++)
    {
        putchar(str[i]);
    }
}

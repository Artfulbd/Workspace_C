#include <stdio.h>
void f1(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        putchar(a[i]);
    }
}
main()
{
    char b[]="Ariful Haque Shipu";
    f1(b);


}

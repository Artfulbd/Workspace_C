//array of string
#include <stdio.h>
int main()
{
    char *str[5];
    str[0]="Hello";
    str[1]="world";
    str[2]="pessimistic";
    str[3]="wanderer";
    str[4]="bye";
    int i;
//puts ();
    for (i=0; i<5; i++)
    {
        puts (str[i]);
    }
    return 0;
}

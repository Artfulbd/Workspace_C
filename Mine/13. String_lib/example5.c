#include <stdio.h>
#include <string.h>
#define s 15
int main ()
{
    char f1 [s]="Nazneen", f2 [s] = " Zeba";
    puts (f1);
    strcat (f1, f2);
    puts (f1);
    return 0;
}

#include <stdio.h>
#include <string.h>
#define size 15
int main ()
{
    char f1 [size]="Nazneen ", f2 [size] = "Zebaaaaaaaaaa";
    printf("\n size of the string f1: %d", strlen (f1));
    printf("\n size of the string f2: %d\n", strlen (f2));
    if (strlen (f1) + strlen (f2) < size)
    {
        strcat (f1, f2);
    }
    else
    {
        strncat (f1, f2, size - strlen (f1) - 1);
        f1 [size - 1] = '\0';
    }
    puts (f1);
    return 0;
}

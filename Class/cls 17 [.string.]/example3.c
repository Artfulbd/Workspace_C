#include <stdio.h>
#include <string.h>

int main()
{
    char last [20], first [20], middle [20];
    char pres [20] = "Adams, John Quincy";
    strncpy (last, pres, 5);
    last[5] = '\0';
    strncpy (first, &pres[7], 4);
    first[4] = '\0';
    strcpy (middle, &pres[12]);
    puts (last);
//puts ("\n");
    puts (first);
//puts ("\n");
    puts (middle);
//puts ("\n");
    return 0;
}

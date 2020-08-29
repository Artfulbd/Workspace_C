#include <stdio.h>
#include <string.h>

int main()
{
    char last [20], first [20], middle [20];
    char pres [20] = "Adams, John Quincy";
    strncpy (last, pres, 5);
    last[5] = '\0';
    //puts (last);
    strncpy (first, &pres[7], 4);
    first[4] = '\0';
    //puts (first);
    strcpy (middle, &pres[12]);
    //puts (middle);
    puts (first);
    puts (middle);
    puts (last);
    puts(pres);
    return 0;
}

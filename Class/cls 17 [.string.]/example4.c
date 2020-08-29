#include <stdio.h>
#include <string.h>

main()
{
    char *last, *first, *middle;
    char pres [20] = "Adams, John Quincy";
//char pres1 [20] = "halum, halum Quincy";
    char pres_copy [20];
    strcpy (pres_copy, pres);
    last = strtok (pres_copy, ", ");
    first = strtok (NULL, ", ");
    //puts (pres_copy);
//first = strtok (pres1, ", ");
    middle = strtok (NULL, " ");
    //puts (pres_copy);
//puts ("\n");
    puts (last);
//puts ("\n");
    //puts (pres_copy);
    puts (first);
//puts ("\n");
    puts (middle);
    //puts ("\n");
    //puts (pres_copy);
}

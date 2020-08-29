#include <stdio.h>
#include <string.h>

main()
{
    char *name, *id, *dep, *cg;
    char pres [40] = "Moinul Islam, 21, Computer Since, 3.98";\
//char pres1 [20] = "halum, halum Quincy";
    char pres_copy [40];
    strcpy (pres_copy, pres);
    name = strtok (pres_copy, ",");
    id = strtok (NULL, ", ");
    dep = strtok (NULL, ",");
    cg = strtok (NULL, " ");

    puts (name);
   puts (id);
   puts (dep);
   puts (cg);
    //puts (last);

}

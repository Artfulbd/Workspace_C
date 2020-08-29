#include <stdio.h>
#define RAJU 100

main()
{
   #ifdef RAJU
   printf("%d is defined. So, this line will be added in " \
          "this C file\n",RAJU);
   #else
   printf("RAJU is not defined\n");
   #endif

}

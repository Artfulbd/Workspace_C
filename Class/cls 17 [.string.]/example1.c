#include <stdio.h>
#include <string.h>

int main()
{
   char source[20], dest[10];
   printf("Input a string\n");
   gets(source);
 //dest = source;
 //dest = "Hello world";
   strcpy(dest, source);
   printf("Destination string: \"%s\"\n", dest);
   return 0;
}

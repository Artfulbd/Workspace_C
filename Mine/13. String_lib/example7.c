#include <stdio.h>
#include <string.h>

int main()
{
   char a[100], b[100];

   printf("Enter the string a\n");
   gets(a);

   printf("Enter the string b\n");
   gets(b);
   int x = strcmp(a,b);
   //int x = strncmp(a,b,4);
   printf ("\nThe value of x: %d\n", x);
   if ( x == 0)
      printf("Entered strings are equal.\n");
   else if (x<0)
      printf("string a is less than string b\n");
    else
        printf("string a is greater than string b\n");

   return 0;
}

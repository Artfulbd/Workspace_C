#include <stdio.h>
#include <string.h>

union abc
{
   int i;
   float f;
   char  str[30];
};

int main( )
{
   union abc nilshagor;
   printf ("%d\n", sizeof (nilshagor));
   nilshagor.i = 101;
   //nilshagor.f = 220.50;
   printf( "data.i : %d data.f : %.2f data.str : %s\n", nilshagor.i, nilshagor.f, nilshagor.str);
   nilshagor.f = 220.50;
   printf( "data.i : %d data.f : %.2f data.str : %s\n", nilshagor.i, nilshagor.f, nilshagor.str);
   strcpy( nilshagor.str, "Hayre nil shagor");
   printf( "data.i : %d data.f : %.2f data.str : %s\n", nilshagor.i, nilshagor.f, nilshagor.str);

   return 0;
}

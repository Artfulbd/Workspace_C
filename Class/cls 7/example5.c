#include <stdio.h>

int main () {
 int a,b,c;

 printf ("Enter two number, first a then b: ");
 scanf ("%d %d", &a, &b);


/*if (a > b) {
    c = 10;
} else {
    c = 0;
}*/
( a > b) ? printf (" C is 10"): printf (" C is 0");
c = ( a > b) ? 10 : 0;
printf ("\n\n\n\n\n C is %d", c);

return 0;
}

#include <stdio.h>

int main () {
int num;

printf ("Enter a number between 0 to 100: ");
scanf ("%d",&num);

if ((num >= 0 && num <= 100))
    printf ("right answer!");
else
       printf ("ups! Outside the range!");
return 0;
}

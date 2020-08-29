#include <stdio.h>
int main () {
int num;
printf ("Enter a number less then or equal to 10: ");
scanf ("%d",&num);

if (num <= 10)
    printf ("What an obedient servant you are!");

else
       printf ("You are fired!");

return 0;
}

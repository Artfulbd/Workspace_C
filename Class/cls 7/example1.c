#include <stdio.h>

int main () {
char status;
char gender;
int age;

printf ("Enter your marital status and Gender:");
scanf ("%c %c",&status, &gender);
printf ("\nEnter your age: ");
scanf ("%d",&age);

if (status == 'S'){
    if (gender == 'M')
        {
        if (age >= 18 && age <= 26)
            printf ("All criteria are met!\n");
        else
            printf ("sigh!age dont match!\n");
    }
    else
        printf ("sigh!gender dont match!\n");
}
else
{
    if (gender != 'M')
      printf ("sigh!She's not single!\n");
    else
      printf ("sigh!he's not single!\n");
}

}

#include <stdio.h>

int main () {
int score;
char gen;

printf ("Enter the gender: ");
scanf ("%c",&gen);
if (gen == 'F'){
printf ("Enter your score: ");
scanf ("%d",&score);

if (score >=90 && score <= 100)
    printf ("your grade is A");

else if (score <90 && score >= 80)
    printf ("your grade is A-");
else if (score <80 && score >= 70)
    printf ("your grade is B");
else if (score <70 && score >= 60)
    printf ("your grade is B-");
else
    printf ("your grade is f");

}
else
printf ("Gender mismatch");

return 0;
}



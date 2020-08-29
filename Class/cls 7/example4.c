#include <stdio.h>
int main () {

int score, grade;
printf ("Enter your score: ");
scanf ("%d",&score);
grade = score / 10;
switch (grade){
case 10:
    //printf("\nYour grade is A!");
    //break;
case  9:
    printf("\nYour grade is A!");
    break;
case 8:
    printf("\nYour grade is A-!");
    break;
case 7:
    printf("\nYour grade is B!");
    break;
case 6:
    printf("\nYour grade is B-!");
    break;
default:
    printf ("\nYour grade is F!");
}
return 0;
}

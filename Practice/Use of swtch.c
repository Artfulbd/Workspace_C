#include <stdio.h>
void main()
{
    int score, grade;
    printf("Enter score: ");
    scanf("%d",&score);
    grade=score/10;
    switch(grade)
    {
    case 10:
        /*printf("your grade is A");
        break;*/
    case 9:
        printf("Your grade is A");
        break;
    case 8:
        printf("Your grade is B");
        break;
    case 7:
        printf("Your grade is C");
        break;

    default:
        printf("Fail");
    }
}

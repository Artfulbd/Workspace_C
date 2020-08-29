#include <stdio.h>

int main ()
{

    int abc;
    printf ("Enter 1 or 6 or 9: ");
    scanf ("%d",&abc);

    switch (abc)
    {
    case 1:
        printf("\nHave a good morning!");
        break;
    case 6:
        printf("\nHave a nice evening!");
        break;
    case 9:
        printf("\nHave a nice day!");
        break;
    default:
        printf ("\nNo wish for you!");
    }
    return 0;
}

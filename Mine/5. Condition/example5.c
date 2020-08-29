#include <stdio.h>

int main ()
{

    char abc;
    printf ("Enter m or e or d: ");
    scanf ("%c",&abc);

    switch (abc)
    {
    case 'm':
        printf("\nHave a good morning!");
        break;
    case 'e':
        printf("\nHave a nice evening!");
        break;
    case 'd':
        printf("\nHave a nice day!");
        break;
    default:
        printf ("\nNo wish for you!");
    }
    return 0;
}


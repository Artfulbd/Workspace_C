#include <stdio.h>
void main()
{
    int m;
    printf("Enter the month: \n");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days of this month");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days of this month");
        break;
    case 2:
        printf("28days of this month");
        break;
    default:
        printf("you are wrong");

    }
}

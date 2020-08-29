#include <stdio.h>

int main ()
{
    int count;
    int number;
    int Hours;
    double Rate, pay, total_pay = 0.0;

    printf ("Enter the number of employee: \n");
    scanf ("%d",&number);

    for (count = 1; count < number ; count++)
    {
        printf ("\nInformation of Employee %d \n", count);
        printf ("\nHours: ");
        scanf ("%d",&Hours);
        printf ("\nRate: \n");
        scanf ("%lf",&Rate);
        pay = Hours * Rate;
        printf ("\nPay is $%6.2lf\n", pay);
        total_pay = total_pay + pay;
    }

    printf ("\nAll employees processed.\n");
    printf ("\nTotal payment is $%8.2lf.\n", total_pay);
    return 0;
}

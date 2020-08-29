#include <stdio.h>
int main ()
{
    int count = 0;
    int number;
    int Hours;
    double Rate, pay, total_pay = 0.0;

    printf ("Enter the number of employee: ");
    scanf ("%d",&number);
    while (count < number)
    {
        printf ("\nInformation of Employee %d \n", count);
        printf ("\nHours: ");
        scanf ("%d",&Hours);
        printf ("\nRate: ");
        scanf ("%lf",&Rate);
        pay = Hours * Rate;
        printf ("\nPay is $%6.2lf\n", pay);
        total_pay = total_pay + pay;
        count +=1;
    }

    printf ("\nAll employees processed.\n");
    printf ("\nTotal payment is $%8.2lf.\n", total_pay);
    return 0;
}

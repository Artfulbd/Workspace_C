#include <stdio.h>
int main ()
{
    int count = 0;
    int Hours;
    double Rate, pay;
    while (count < 3)
    {
        printf ("\nInformation of Employee %d \n", count+1);
        printf ("\nHours: ");
        scanf ("%d",&Hours);
        printf ("Rate: ");
        scanf ("%lf",&Rate);
        pay = Hours * Rate;
        printf ("\nPay is $%6.2lf\n", pay);
        count +=1;
    }

    printf ("\nAll employees processed.");
    return 0;
}

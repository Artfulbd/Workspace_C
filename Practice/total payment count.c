#include <stdio.h>
void main()
{
    int count =0;
    int number, time;
    double pay, rate, total_pay=0.0;
    printf("Enter the number of employee: ");
    scanf("%d",&number);
    while (count< number)
    {
        printf("Information of employee %d\n",count+1);
        printf("\nHour: ");
        scanf("%d",&time);
        printf("\nRate: ");
        scanf("%lf",&rate);
        pay=time*rate;
        printf("\nPay is $%6.2lf\n",pay);
        printf("------------------------\n");
        total_pay+=pay;
        count++;
    }
    printf("\nTotal payment is: $%6.2lf\n\n",total_pay);
}

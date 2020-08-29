#include <stdio.h>
void main()
{
    int num, h,a;
    double r,pay, to_pay=0.0;
    printf("Enter the number of employee: ");
    scanf("%d",&num);
    for(a=1;a<=num;a++)
    {
        printf("Information of Employee %d \n",a);
        printf("--------------------------");
        printf("\nHours: ");
        scanf("%d",&h);
        printf("Rate: ");
        scanf("%lf",&r);
        pay=h*r;
        printf("\nPay is $%6.2lf \n\n\n",pay);
        to_pay=to_pay+pay;
    }
    printf("All employee processed.\n");
    printf("total payment is $%6.2lf\n\n",to_pay);

}

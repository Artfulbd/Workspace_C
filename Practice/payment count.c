#include<stdio.h>
void main()
{
    int count=0;
    int hours;
    double pay, rate;
    while(count<3)
          {
           printf("\nInformation of employee %d - \n",count+1);
            printf("Hours: ");
            scanf("%d",&hours);
            printf("Rate: ");
            scanf("%lf",&rate);
            pay=hours*rate;
            printf("\nPay $%6.2lf\n\n",pay);
            count+=1;
          }
          printf("All employee processed. \n");
}

#include <stdio.h>
#include <string.h>
main()
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char week[7][10];
    int date, mon, year,i,r,s=0;
    strcpy(week[0],"Sunday");
    strcpy(week[1],"Monday");
    strcpy(week[2],"Tuesday");
    strcpy(week[3],"Wednesday");
    strcpy(week[4],"Thursday");
    strcpy(week[5],"Friday");
    strcpy(week[6],"Saturday");
    printf("Enter date month and year (dd/mm/yyyy) : ");
    scanf("%d  %d  %d",&date,&mon,&year);
    if((year% 400==0)||((year%4==0)&&(year%100!=0)))
    {
        month[1]=29;
    }
    for(i=0;i<mon-1;i++)
    {
        s=s+month[i];
        s=s+(date+year+(year/4)-2);
        s=s%7;
    }
    printf("\n The day is : %s\n",week[s]);
}

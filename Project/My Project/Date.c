#include <stdio.h>
#include <math.h>
main()
{
    double a1,a2,a3;
    int a,d,m,l=17,f=20,r1,r;
    printf(" Enter first two digit of year : ");
    //scanf("%d",&f);
    printf(" Enter last two digit of year : ");
    //scanf("%d",&l);
    printf(" Enter date and month(dd/mm):\t");
    scanf("%d %d",&d,&m);
    switch(m)
    {
    case 1:
        d=11;
        break;
    case 2:
        d=12;
        break;
    case 3:
        d=1;
        break;
    case 4:
        d=2;
        break;
    case 5:
        d=3;
        break;
    case 6:
        d=4;
        break;
    case 7:
        d=5;
        break;
    case 8:
        d=6;
        break;
    case 9:
        d=7;
        break;
    case 10:
        d=8;
        break;
    case 11:
        d=9;
        break;
        default: printf("You entered wrong..!");
    }
     /*m;pif((year% 400==0)||((year%4==0)&&(year%100!=0)))
    {
        f=f-1;
        l=l-1
    }*/
    a1=floor((13*m-1)/5);
    a2=floor(l/4);
    a3=floor(f/4);
    a=d+a1+l+a2+a3-2*f;
    if(a<0)
    {
        r=(a%-7)+7;
    }
    else
    {
        r=a%7;
    }
    //r=a-7*(a/7);


    printf("\n\tr= %d",r);
    printf("\n\ta= %d",a);
    switch (r)
    {
    case 0:
        printf("Sunday.");
        break;
     case 1:
        printf("Monday.");
        break;
    case 2:
        printf("Tuesday.");
        break;
    case 3:
        printf("Wednesday.");
        break;
    case 4:
        printf("Thursday.");
        break;
    case 5:
        printf("Friday.");
        break;
    case 6:
        printf("Saturday.");
        break;
    default:
        printf("Wrong");
    }

}


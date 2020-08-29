#include<stdio.h>
#include<math.h>
main()
{
    double a,b,c,d,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=sqrt(pow(b,2)-4*a*c);
    r1=(-b+d)/(2*a);
    r2=(-b-d)/(2*a);
    if(a!=0&&d>0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
}

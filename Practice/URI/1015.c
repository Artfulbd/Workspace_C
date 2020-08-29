#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    printf("%.4f\n",sqrt(pow((c-a),2)+pow((d-b),2)));
}

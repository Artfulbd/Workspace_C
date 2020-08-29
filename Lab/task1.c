#include <stdio.h>
#define pi 3.1416
void areaPeri(int *r);
main()
{
    int a;
    printf("Enter radius: ");
    scanf("%d",&a);
    areaPeri(&a);
}
void areaPeri(int *r)
{
    printf("Area is: %f",*r**r*pi);
    printf("\nPerimeter is: %f",2*pi**r);
}

#include<stdio.h>
struct shape
    {
        double length;
        double width;

    };
int findPerimeter(struct shape R);
int findArea(struct shape R);
main()
{
    struct shape z;
    printf("Enter length of rectangle: ");
    scanf("%lf",&z.length);
    printf("Enter area of rectangle: ");
    scanf("%lf",&z.width);
    printf(" Area of the rectangle: %d\n",findArea(z));
    printf(" Perimeter of the rectangle: %d\n",findPerimeter(z));
}
int findPerimeter(struct shape R)
{
    return 2*(int)(R.length+R.width);
}
int findArea(struct shape R)
{
    return (int)R.length*R.width;
}

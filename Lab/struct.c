#include<stdio.h>
struct Shape
{
	float length,width;
};
float findArea(struct Shape r);
float findPerimeter(struct Shape r);
main()
{
    struct Shape g;
    printf("Enter length of rectangle: ");
    scanf("%f",&g.length);
    printf("Enter width of rectangle: ");
    scanf("%f",&g.width);
    printf("The area of the rectangle: %.2f\n",
           findArea(g));
    printf("The perimeter of the rectangle: %.2f\n",findPerimeter(g));
}
float findArea(struct Shape r)
{
    return r.length*r.width;
}
float findPerimeter(struct Shape r)
{
    return 2*(r.length+r.width);
}



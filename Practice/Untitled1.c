#include<stdio.h>
struct Shape
{
	float length,width;
}s;
float findArea();
float findPerimeter();
main()
{
    printf("Enter length of rectangle: ");
    scanf("%f",&s.length);
    printf("Enter width of rectangle: ");
    scanf("%f",&s.width);
    printf("The area of the rectangle: %.2f\n",findArea());
    printf("The perimeter of the rectangle: %.2f\n",findPerimeter());
}
float findArea()
{
    return s.length*s.width;
}
float findPerimeter()
{
    return 2*(s.length+s.width);
}


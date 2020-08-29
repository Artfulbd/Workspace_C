#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("\na=%d is greater then b=%d\n\n",a,b);
    }
    else
    {
        printf("\nb=%d is greater then a=%d\n\n",b,a);
    }

}

#include <Stdio.h>
void main()
{
    int a, b , s,r ;
    printf("Enter three number: \n");
    scanf("%d %d %d", &a, &b, &s);
    r=(a+b+(a*b*s)*(a-b))/2;
    printf("\n%d eh o maior",r);
}

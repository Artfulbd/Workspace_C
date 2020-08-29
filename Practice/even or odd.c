#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        c=1;
    }
    else{c=0;}
    if(c==1)
    {
        printf("%d is Even",a);
    }
    else{printf("%d is Odd",a);}
    printf("Hiiiiiiiiiiiiiiiiii");
    return 0;
}

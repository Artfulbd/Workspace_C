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
        printf("Even");
    }
    else{printf("Odd");}
    return 0;
}

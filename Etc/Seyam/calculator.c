#include<stdio.h>
int main()
{
    int a, b, sum, mul, div, sub;
    char n;
    printf("Enter value 1:");
    scanf("%d", &a);
    printf("Enter value 2:");
    scanf("%d", &b);
    printf("Enter operator:");
    fflush(stdin);
    scanf("%c", &n);

    switch(n)
    {
    case '+':
    {
        printf("The sum of %d + %d = %d", a,b,a+b);
        break;
    }

    case '-':
        if(a>b)
        {
            {
                printf("The dif of %d - %d = %d", a,b,a-b);
                break;
            }
        }
        else printf("Wrong input!");
        break;
    case '/':
        if(a>b)
        {

            {
                printf("The div of %d / %d = %d", a,b,a/b);
                break;
            }
        }
        else printf("Wrong input!");
        break;
    case '*':
    {
        printf("The product of %d * %d = %d", a,b,a*b);
        break;
    }
    default:
        printf("Wrong input!");
    }

}

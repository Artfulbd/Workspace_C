#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    int ans;
    if(n == 0)
        ans = 1;
    else
        ans = n * factorial (n-1);
    return ans;
}

main()
{
    char in;
    printf("\n\n         Calculator\n\n");
    printf("          Enter \" + \"  symbol for addition \n");
    printf("          Enter \" - \"  symbol for Subtraction \n");
    printf("          Enter \" * \"  symbol for Multiplication \n");
    printf("          Enter \" / \"  symbol for Division \n");
    printf("          Enter \" % \"  symbol for Modulus \n");
    printf("          Enter \" ^ \"  symbol for Power \n");
    printf("          Enter \" ! \"  symbol for Factorial\n");
    printf("\n\t:   ");
    scanf("%c",&in);
    switch(in)
    {
    case '+':
    {
        int n,i;
        float t=0,s;
        printf("Enter how many numbers Do you want to add: ");
        scanf("%d",&n);
        printf("Enter Numbers one by one :\n\n");
        for(i=0; i<n; i++)
        {
            printf("\t\t\t");
            scanf("%f",&s);
            t+=s;
        }
        printf("---------------------------------");
        printf("\n  Sum of %d numbers   =  %.2f\n",n,t);
        break;

    }
    case '-':
    {
        int s, t;
        printf("Enter first number: ");
        scanf("%d",&s);
        printf("Enter second number: ");
        scanf("%d",&t);
        if(s>t)
        {
            printf(" Subtraction    : %d\n",s-t);
        }
        else
        {
            printf("The second value is greater then first!\n");
            printf(" Subtraction    : %d\n",s-t);
        }
        break;

    }
    case '*':
    {
        int s, t;
        printf("Enter first number: ");
        scanf("%d",&s);
        printf("\nEnter second number: ");
        scanf("%d",&t);
        printf(" Multiplication : %d\n",s*t);
        break;

    }
    case '/':
    {
        int s, t;
jump1:
        printf("Enter dividend: ");
        scanf("%d",&s);
        printf("\nEnter divisor: ");
        scanf("%d",&t);
        if(s>t)
        {
            if((s/t)==t)
            {
                printf("  The second value is greater then first!\n");
                printf("\n  Enter Again ");
                goto jump1;
            }
            else
            {
                printf(" Quotient of %d by %d is : %d\n",s,t,s/t);
            }

        }
        else
        {
            printf("  The second value is greater then first!\n");
            printf("\n  Enter Again \n");
            goto jump1;
        }
        break;
    }
    case '%':
    {

        int s, t;
jump2:
        printf("Enter dividend: ");
        scanf("%d",&s);
        printf("\nEnter divisor: ");
        scanf("%d",&t);
        if(s>t)
        {
            printf(" Modulus   : %d\n",s%t);
        }
        else
        {
            printf("  The second value is greater then first!\n");
            printf("\n  Enter Again ");
            goto jump2;
        }
        break;
    }
    case '^':
    {
        double n,p;
        printf("\n  Enter Number: ");
        scanf("%lf",&n);
        printf("\n  Enter power: ");
        scanf("%lf",&p);
        printf("\n%lf to the power %lf is %lf",n,p,pow(n,p));
        break;
    }
    case '!':
    {
        int i;
jump3:
        printf("\n  Enter number for factorial: ");
        scanf("%d",&i);
        if(i<1)
        {
            printf("\n  You entered a negative number, Enter positive.");
            goto jump3;
        }
        printf("Factorial of %d = %d", i, factorial(i));
        break;
    }
    default:
    {
        printf("\n\n   You entered wrong !!! ");
    }
    }
}


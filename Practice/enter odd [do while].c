#include<stdio.h>
int main()
{
    int num;

    do
    {
        printf("Enter a odd number:");
        scanf("%d",&num);

    }
    while(num%2!=0);
    {
        printf("\nU didn't enter odd.\n");
    }
    return 0;
}


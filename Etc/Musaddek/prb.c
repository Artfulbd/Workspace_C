#include<stdio.h>
main()
{
    int j, k, n;
    printf("Enter your choice:");
    scanf("%d", &j);
    n=j/10;
    switch(n)
    {
    case 10:
    case 9:
        printf("Grade is A\n");
        break;
    case 8:
        printf("Grade is B\n");
        break;
    case 7:
        printf("Grade is C\n");
        break;
    case 6:
        printf("Grade is D\n");
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
        printf("Grade is F\n");
        break;
    default:
        printf("\n Sorry, Wrong input.!!\n");
    }
}

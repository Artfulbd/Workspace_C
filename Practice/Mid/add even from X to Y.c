#include<stdio.h>
main()
{
    int i, X,Y,s=0;
    printf("Enter number for X an Y: \n");
    scanf("%d %d",&X,&Y);
    for(i=X;i<=Y;i++)
    {
        if(i%2==0)
        {
            s+=i;
        }
    }
    printf("Sum of all even numbers: %d",s);
}

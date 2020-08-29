//first n Palindrome numbers
#include<stdio.h>
main()
{
    int n,j,i,t=0,p=0;
    printf(" Enter N: ");
    scanf("%d",&n);
    printf(" First %d Palindrome numbers are:\n",n);
    for(j=0; p<n; j++)
    {
        for(i=j; i>0; i/=10)
        {
            t*=10;
            t+=i%10;
        }
        if(t==j)
        {
            printf("\t %d\n",t);++p;
        }
        t=0;
    }

}

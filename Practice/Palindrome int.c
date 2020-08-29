#include<stdio.h>
main()
{
    int m,n,j,i,t=0;
    printf(" Enter M: ");
    scanf("%d",&m);
    printf(" Enter N: ");
    scanf("%d",&n);
    printf(" Palindrome numbers between %d and %d are:\n",m,n);
    for(j=m; j<=n; ++j)
    {
        for(i=j; i>0; i/=10)
        {
            t*=10;
            t+=i%10;
        }
        if(t==j)
        {
            printf("\t %d\n",t);
        }
        t=0;
    }

}

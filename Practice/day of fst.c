#include<stdio.h>
main()
{
    int i,t,n=0,l=0,g=0;
    char *p[]= {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    printf("\n\tEnter year: ");
    scanf("%d",&t);
    i=1900;
    while(i<=t)
    {
        if(i>1900)
        {
            n++;
            if(l!=0)
            {
                n++;
                l=0;
            }
            if(i%4 == 0 || (i%100 ==0 && i%400 == 0))++l;

        }
        if(n==7) n=0;
        else if(n>7) n=n-7;
        i++;
    }
    //printf("\n\n\t1st January of %d\n\n",n);
    printf("\n\n\t1st January of %d is %s\n\n",t,p[n]);
}

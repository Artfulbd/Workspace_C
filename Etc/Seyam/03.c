#include<stdio.h>
int add(int [], int s,int m);
main()
{
    int x,n,s;
    printf(" Enter array size: ");
    scanf("%d",&s);
    int a[s],i;
    printf("Enter integers:\n");
    for(i=0;i<s;i++)
    {
        printf("\t%d: ",i);
        scanf("%d",&a[i]);
    }
    printf(" Enter border number: ");
    scanf("%d",&x);
    printf(" Total number of integers that are greater than or equal to %d is %d\n",x,add(a,s,x));
}
int add(int a[], int s,int m)
{
    int i,c=0;
    for(i=0;i<s;i++)
    {
            if(a[i]>=m)
            {
                c+=a[i];
            }
    }
    return c;
}

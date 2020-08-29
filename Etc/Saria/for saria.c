#include <stdio.h>
main()
{
    int s,i,t,c=0;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int a[s];
    for(i=0; i<s; i++)
    {
        printf("Enter elements at[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter a number to find: ");
    scanf("%d",&t);
    for(i=0; i<s; i++)
    {
        if(a[i]==t)
        {
            c=i;
        }
    }
    if(c!=0)
    {
        printf("\n Found in index %d\n\n",c);
    }
    else
    {
        printf("\n Not found \n\n");
    }
}


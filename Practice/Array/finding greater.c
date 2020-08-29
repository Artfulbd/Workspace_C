#include <stdio.h>
main()
{
    int i,j,t,c=0,s=5;
    int a[s];
    for(i=0; i<s; i++)
    {
        printf("Enter elements at a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        printf("check outer\n\n");
        for(j=i+1;j<s;j++)
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
            printf("check inner\n");
        }

    }
     printf("\nThe largest element is %d!\n", a[0]);

}


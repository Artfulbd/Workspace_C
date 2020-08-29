#include <stdio.h>
main()
{
    int i,s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        printf("Enter elements at a[%d]: ",i);
        scanf("%d",&a[i]);
         if(a[i]<0)
        {
            a[i]=1;
        }
    }

    for(i=0;i<s;i++)
    {
        printf("Entered elements at a[%d]: %d\n",i,a[i]);
    }
}

#include <stdio.h>
main()
{
    int arr[4],i,j,t;
    for(i=0;i<4;i++)
    {
        printf("Enter elements at arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0,j=4-1;i<j;i++,j--)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    printf("\nReversed array: ");
    for(i=0;i<4;i++)
    {
        printf("%d\t",arr[i]);
    }

}

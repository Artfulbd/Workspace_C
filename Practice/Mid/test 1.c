#include <stdio.h>
main()
{
    int i, j, t, s;

    printf("How many numbers do you want to input ? \n");
    scanf("%d", &s);
    int arr [s];
    printf("Enter the numbers:\n");
    for(i=0; i<s; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<s; i++)
    {
        for(j=i+1; j<s; j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("\n\n\t%d",arr[s-1]);
}

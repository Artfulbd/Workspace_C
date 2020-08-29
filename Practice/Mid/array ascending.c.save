#include <stdio.h>
main()
{
    int i, j, n=6,hold=0;
    int arr[]={4,2,1,9,13,3};
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                hold=arr[i];
                arr[i]=arr[j];
                arr[j]=hold;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("Elements at arr[%d]: %d\n",i,arr[i]);
    }

}

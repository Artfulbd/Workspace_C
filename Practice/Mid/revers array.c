#include <stdio.h>
main()
{
    int i,n,j,r=0;
    printf("Enter size of array:  ");
    scanf("%d",&n);
    int A[n],R[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value at A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        R[j]=A[i];
    }
        printf("-----------------------\n");
    for(i=0;i<n;i++)
    {
        printf("Reversed array is A[%d]: %d\n",i,R[i]);
    }
}

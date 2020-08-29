#include<stdio.h>
void removeFromArray ( int A[ ], int N, int V);
main()
{
    int i,N;
    printf("  How many integers do you want to input: ");
    scanf("%d",&N);
    int A[N],V;
    for(i=0; i<N; i++)
    {
        printf(" Enter elements at a[%d]: ",i);
        scanf("%d",&A[i]);
    }
    printf("\n\n");
    printf(" Enter number to remove: ");
    scanf("%d",&V);
    removeFromArray(A, N, V);


}
void removeFromArray ( int A[ ], int N, int V)
{
    int i;
    for(i=0; i<N; i++)
    {
        if(A[i]==V)
        {
            while(i<N)
            {
                A[i]=A[i+1];
                i++;
            }
            A[N-1]=0;
            i=0;
            break;
        }
    }
    if(i==0)
    {
        printf("\n\n Printing the modified array after deleting %d -\n",V);
        for(i=0; i<N; i++)
        {
            printf(" Element at A[%d]: %d\n",i,A[i]);
        }
    }
    else printf("\n Sorry. %d is not in your array.!!\n",V);
}

#include<stdio.h>
void right_rotate ( int A[ ] , int N);
main()
{
    int N,i;
    printf("  How many number do want to input: ");
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        printf(" Enter Element at A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    right_rotate(A,N);
}
void right_rotate ( int A[ ] , int N)
{
    int i,t=0;
     for(i=0;i<N/2;i++)
    {
        t=A[i];
        A[i]=A[N-(i+1)];
        A[N-(i+1)]=t;
    }
    printf("\n\n  After rotating -\n");
    for(i=0;i<N;i++)
    {
        printf(" Element at A[%d]: %d\n",i,A[i]);
    }
}

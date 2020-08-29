///Write down a function that will take an integer N as parameter and will determine
///whether the number N is a perfect number or not. Return 1 from the function
///if N is a perfect number, and 0otherwise. In your main function take an integer
///as input and using the function determine whether the number is a perfect number or not.
///Display “YES” if it is a perfect number and “NO” otherwise.
#include<stdio.h>
int check_perfect(int N);
main()
{
    int N,c;
    printf(" Enter a number to check perfect number: ");
    scanf("%d",&N);
    c=check_perfect(N);

    if(c==1) printf("\n  YES\n");
    else printf("\n  NO\n");
}
int check_perfect(int N)
{
    int s=0,i;
    for(i=1; i<N; i++)
    {
        if(N%i==0)
        {
            s+=i;
        }
    }
    if(s==N) return 1;
    else return 0;
}

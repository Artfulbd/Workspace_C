
#include <stdio.h>
//#define nai -1;
int sr(int ar[], int ,int);
void main()
{
    int find,r,t=-1;
    int arr [5]= {5,10,15,20,25};
    printf ("\nEnter the number that you want to find: \n");
    scanf ("%d", &find);
    r=sr(arr,5,find);
    if (r<5)
    {
        printf("\n\t%d",r);
    }
    else{printf(" %d",t);}
}

int sr(int ar[], int n,int t)
{
    int i,s=0;
    for (i=0;i<n;i++)
    {
        if(ar[i]==t)
        {
            s=i;
            break;
        }
    }
    return s;
}

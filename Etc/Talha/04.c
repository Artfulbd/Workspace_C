#include<stdio.h>
int countSearchKey(int arr[],int size,int key);
main()
{
    int s;
    printf(" Enter array size: ");
    scanf("%d",&s);
    int a[s],i,k;
    printf(" Array elements:\n");
    for(i=0;i<s;i++)
    {
            printf("\t");
            scanf("%d",&a[i]);
    }printf(" Search key: ");
    scanf("%d",&k);
    countSearchKey(a,s,k);
}
int countSearchKey(int arr[],int size,int key)
{
    int i,c=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("\n Search key appears %d times\n",c);
    }
    else
    {
        printf("\n %d is not found in your array.!!\n",key);
    }
}

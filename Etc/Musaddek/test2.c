#include<stdio.h>
int countSearchkey(int arr[],int size, int key);
main()
{
    int size,i ,key;
    printf("enter array size: ");
    scanf("%d",&size);
    printf("enter Array elements: ");
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search key: ");
    scanf("%d",&key);
    int count=countSearchkey(a,size,key);
    printf("Search key appears %d time\n",count);
}
int countSearchkey(int arr[],int size, int key)
{
    int i, count =0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
    }
    return count;
}

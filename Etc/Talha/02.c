#include <stdio.h>

main()
{
    int s;
    printf(" Enter Size of the array: ");
    scanf("%d",&s);
    int a[s],i,j=0,e=0,o=0;
    printf(" Input elements in array: \n");
    for(i=0; i<s; i++)
    {
        printf("\t");
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    int e1[e],o1[o],k=0,l=0;
    for(i=0; i<s; i++)
    {
        if(a[i]%2==0)
        {
            e1[k]=a[i];
            k++;
        }
        else
        {
            o1[l]=a[i];
            l++;
        }
    }
    if(e!=0)
    {
        printf("\n  Printing even via e1 array: ");
        for(i=0; i<e; i++)
        {
            printf("%d ",e1[i]);
        }
    }
    else
    {
        printf("\n There are no even numbers in your array.!!");
    }
    if(o!=0)
    {
        printf("\n  Printing odd via o1 array: ");
        for(i=0; i<o; i++)
        {
            printf("%d ",o1[i]);
        }
    }
    else
    {
        printf("\n There are no odd numbers in your array.!!");
    }

}

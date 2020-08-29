#include <stdio.h>
main()
{
    int i,s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        printf("Enter elements at a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    int count=0;
    for(i=0;i<s;i++)
    {
        if(a[i]%2==0)
        {
            count = 0;
        }
        else
        {
            count++;
        }
    }
    if(count == 0)
    {
        printf("\nAll even.");
    }
     if(count == s)
    {
        printf("\n All odd.");
    }
    else
    {
        printf("\n %d is even.",s-count);
        printf("\n %d is odd. ", count);
    }
}


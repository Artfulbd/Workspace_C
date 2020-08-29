#include<stdio.h>
main()
{
    int size,c=0;
    printf("Enter the length of the array: ");
    scanf("%d",&size);
    int i, arr[size];

    for(i=0; i<size; i++)
    {
         printf("Enter elements arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
        }

    }
    if(c==0)
    {
        printf("\nAll odd\n");
    }
    if(c==size)
        {
        printf("\nAll Even!\n");
    }
    else
    {
        printf("\n%d is Odd\n",size-c);
        printf("\n%d is Even\n",c);
    }

}

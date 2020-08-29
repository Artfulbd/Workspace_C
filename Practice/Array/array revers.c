#include <stdio.h>
main()
{
    int s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int i,j, a[s],r[s];
    for(i=0;i<s;i++)
    {
        printf("Enter elements  at a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n Reversed array is: ");
    for(i=0,j=s-1;i<s;i++,j--)
    {
         r[j]=a[i];
    }
   // printf("\n Reversed array is: ");
    for(i=0;i<s;i++)
    {
        printf("%d  ",r[i]);
    }
    printf("\n");
}

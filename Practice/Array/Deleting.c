#include <stdio.h>

int main()
{
    int i,j,d;
    printf(" Enter size: ");
    scanf("%d",&j);
    int a[j];
    for(i=0;i<j;i++)
    {
        printf(" Enter number at %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n\n Enter index to delete: ");
    scanf("%d",&d);
    for(i=d;i<j;i++)
    {
        a[i]=a[i+1];
    }
    //j--;
    printf("\n\n Printing after deleting :\n");
    for(i=0;i<j;i++)
    {
        printf(" Number at %d :  %d\n",i,a[i]);
    }

}

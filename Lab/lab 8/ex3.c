#include <stdio.h>
int main()
{
    int start,end, i;
    printf("Enter s: ");
    scanf("%d",&start);
    printf("Enter e: ");
    scanf("%d",&end);
    i=start;
    if(start<=end)
    {
        while(i<=end)
        {
            printf("%d \n",i);
            i++;
        }
    }
    else
    {
        printf("Vul hoisa");
    }


    return 0;
}

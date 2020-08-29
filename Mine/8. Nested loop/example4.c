#include <stdio.h>
int main()
{
    int x;
    for (x=0; x<=20 ; x++)
    {
        printf("%d I will be printed\n",x);
        //continue;
        if (x==10)
        {
            //continue;
           // break;
            printf("I will never be printed\n");
        }
        //continue;
    }
    printf("\nWhatever it is, I will always be printed\n");
    return 0;
}

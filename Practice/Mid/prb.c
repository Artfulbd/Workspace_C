#include <stdio.h>
main()
{
    int i; //= 0;
    /*while (i<10)
    {
        //continue;
        printf("Do you see me?%d\n",i);
        if(i==5)
        {
            printf("Thanks for watching!");
            //break;
            continue;
        }
        i++;
    }*/
    for(i=0;i<10;i++)
    {
        printf("Do you see me?%d\n",i);
        if(i==5)
        {
            printf("Thanks for watching!\n");
            //break;
            continue;
        }
        puts("Test");
    }
}

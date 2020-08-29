#include<stdio.h>
#include<windows.h>
main()
{
    int s,i,j;
    printf("\n\n After how many sec do you want to set alarm???");
    printf("\n  : ");
    scanf("%d",&s);
    for(i=0; i<=s; i++)
    {
        if(i==s)
        {
            for(j=0; j<4; j++)
            {
                Beep(4000,200);
                Beep(4000,200);
                Beep(4000,600);
            }
        }
        else
        {
             Beep(0,1000);
        }
    }
}

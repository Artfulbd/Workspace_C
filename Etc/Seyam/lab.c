#include <stdio.h>
#include <stdlib.h>
typedef struct co
{
    int x,y;
}m;
m near(m atm,m nsu);
main()
{
    int r,i, f;
    system("color f5");
    m atm[3],nsu,d[3];
    for(i=0; i<3; i++)
    {
        printf("Enter X coordinate for no.%d ATM: ",i+1);
        scanf("%d",&atm[i].x);
        printf("Enter Y coordinate for no.%d ATM: ",i+1);
        scanf("%d",&atm[i].y);
        puts(" ");
    }
    printf("\nEnter X coordinate for NSU: ");
    scanf("%d",&nsu.x);
    printf("Enter Y coordinate for NSU: ");
    scanf("%d",&nsu.y);
    for(i=0; i<3; i++)
    {
        d[i]=near(atm[i],nsu);
    }

    r=(d[1].x + d[2].x + abs( d[1].x - d[2].x))/2;
    f=(r + d[3].x +abs(r - d[3].x ))/2;
    if(f==d[1].x)
    {
        system("color b5");
        printf("\n\tNearest a ATM booth to NSU is booth 1,\n\tDistance is x=%d and y=%d",d[1].x,d[1].y);
    }
    else if(f==d[2].x)
    {
        system("color b5");
        printf("\n\tNearest a ATM booth to NSU is booth 2,\n\tDistance is x=%d and y=%d",d[2].x,d[2].y);
    }
    else
    {
        system("color b5");
        printf("\n\tNearest a ATM booth to NSU is booth 3,\n\tDistance is x=%d and y=%d",d[3].x,d[3].y);
    }
}
m near(m atm,m nsu)
{
     m dis;
     dis.x=atm.x-nsu.x;
     dis.y=atm.y-nsu.y;
     return dis;
}

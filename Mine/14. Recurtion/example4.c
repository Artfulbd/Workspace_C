#include <stdio.h>
void kill_me(int);
void main ()
{
    int x = 1;
    kill_me (x);
}
void kill_me(int x)
{
    printf("\n%d",x);
    if (x==5)
        return;
    else
        kill_me(x+1);
}

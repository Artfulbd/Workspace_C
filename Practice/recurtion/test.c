#include <Stdio.h>
int re(int );
main()
{
    int i=6;
    printf("Factorial is: \"%d\"\n",re(i));
}
int re(int x)
{
    int ans;
    if(x!=0)
    {
        ans=x*re(x-1);
        return ans;
    }
    else
    {
        return 1;
    }
}

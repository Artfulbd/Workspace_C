//returning an address
#include <stdio.h>
int *return_add();
void main ()
{
    int i, *p;
    p=return_add();
    for(i=0; i<5; i++)
    {
        printf ("\nThe value of even [%d] = %d\n", i, *(p+i));
        //printf ("\nThe value of even [%d] = %d\n", i, *p);
        //p++;
        //printf ("\nThe value of even [%d] = %d\n", i , p[i]);
    }
}
int *return_add()
{
    static int even[5] = {2,4,6,8,10};
    return even;
}

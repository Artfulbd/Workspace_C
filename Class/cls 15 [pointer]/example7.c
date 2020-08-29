//pointer function
#include <stdio.h>
void f1()
{
    printf( "Hello world\n");
}

void f2(int x)
{
    printf( "%d\n", x );
}

float f3(int x, int y)
{
    float z;
    z = (float) (x+y) / 2;
    return z;
}

int main()
{
    float avg;
    void (*fp0) ();
    void (*fp1)(int);
    float (*fp2)(int, int);
    fp0 = &f1;
    fp1 = &f2;
    fp2 = &f3;
    fp0 ();
    fp1(2);
    avg = fp2(5,7);
    printf ("The average is : %.2f", avg);
    return 0;
}

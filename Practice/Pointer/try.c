#include <stdio.h>
const int b =12;
void main ()
{
    int i,ar[6]={12, 34,69,74,35,37,41};
    int *p[6];
    for(i=0;i<6;i++)
    {
        printf("Value ar[%d]: %d\n",i, ar[i]);
    }
    for(i=0;i<6;i++)
    {
        p[i]=&ar[i];
    }
    for(i=0;i<6;i++)
    {
        printf("\n\nPointer array p[%d]-\n value: %d\naddress: %p",i,*p[i],p[i]);
    }
}

#include <stdio.h>
int *pointer();
void main ()
{
    int i,*a= pointer();
    for(i=0;i<5;i++)
    {
        printf(" Printing value of[%d]: %d\n",i,*(a+i));
    }

}
int *pointer()
{
    static int ar[5]={12,23,34,45,56};
    return ar;
}

#include <stdio.h>
void f1()
{
    printf("Hello world.\n");
}

float f2(int a, int b)
{
    float k= (float) (a+b)/2;
    return k;
}
void f3(int a)

{
    printf("\n Value : %d\n",a);
}

main()
{
    int (*a) ();
    float (*b) (int, int);
    void (*c) ( int);
    a=&f1;
    b=&f2;
    c=&f3;
    a ();
    c ( 145);
    float avg=b (5,6);
    printf("Average %.2f", avg);
}



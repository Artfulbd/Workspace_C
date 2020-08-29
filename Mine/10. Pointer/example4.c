#include <stdio.h>
void main ()
{
    int arr [5] = {5,10,15,20,25};
    int a,*ptr;
    ptr = arr;
    a=*ptr++;
    printf ("\na1= %d",a);
    a=*++ptr;
    printf ("\na2= %d",a);
    a=++*ptr;
    printf ("\na3= %d",a);
    a=*ptr--;
    printf ("\na4= %d",a);
    a=*--ptr;
    printf ("\na5= %d",a);
    a=--*ptr;
    printf ("\na6= %d",a);
}

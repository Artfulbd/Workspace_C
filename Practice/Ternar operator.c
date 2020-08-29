#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two number fist a then b : \n");
    scanf("%d %d",&a,&b);
    a>b?   printf("\nA=%d boro",a)   :     printf("\nB=%d boro",b);

    c=     (a>b)  ?  a  :  b;


    printf("\n%d",c);
}

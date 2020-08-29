#include <stdio.h>
#include<stdlib.h>

int main() {

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    b=(a+b+abs(a-b))/2;
    c=(b+c+abs(b-c))/2;
    printf("%d eh o maior\n",c);
    return 0;
}



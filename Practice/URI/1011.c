#include <stdio.h>

int main() {

    int j,q,i;
    float p,t=0;
    for(i=0;i<2;i++)
    {
        scanf("%d %d %f",&j,&q,&p);
        t+=q*p;
    }
    printf("VALOR A PAGAR: R$ %.2f\n",t);
    return 0;
}


#include <stdio.h>

int main() {

    float f,s;
    char n[10];
    gets(n);
    scanf("%f %f",&f,&s);
    printf("TOTAL = R$ %.2f\n",((s*15)/100)+f);
    return 0;
}


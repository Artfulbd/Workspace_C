#include<stdio.h>
int* getRandom();

int main () {
   int *p;
   p = getRandom();
   printf("address of %d\n",p);
   printf("value at *p : %d\n", *p );

 return 0;
}

int* getRandom( ) {
    static int j;
    j=rand()%10;
    printf("value of j: %d\n",j);
    printf("Address of j: %d\n", &j);

  return &j;
}

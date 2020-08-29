#include <stdio.h>
main()
{
    int a=100,*p;
    p=&a;
    //int a=100,*p=&a;
    printf("value of A                     1: %d"   ,a  );
    printf("\nPrinting value by pointer      2: %d" ,*p );
    printf("\nPrinting address of          A 3: %p" ,&a );
    printf("\nPrinting value of pointer   *p 4: %x" ,p  );
    printf("\nPrinting value of pointer   *p 5: %d" ,p  );
    printf("\nPrinting address of pointer *p 6: %p" ,&p );
    printf("\nPrinting address of pointer *p 7: %d" ,&p );

}

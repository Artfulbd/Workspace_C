#include <stdio.h>
  main()
{
    long n, t, digit, sum = 0;
 
    printf("Enter the number \n");
    scanf("%ld", &n);
    t = n;
    while (n > 0)
    {
        digit = n % 10;
        s += digit;
        n/= 10;
    }
    printf("Given number = %ld\n", t);
    printf("Sum of the digits %ld = %ld\n", t, s);
}

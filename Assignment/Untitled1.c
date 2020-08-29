#include <stdio.h>
int addNumbers(int n) {
    if (n != 0)
        return n + addNumbers(n - 5);
    else
        return n;
}

int main()
{
    printf("Sum = %d", addNumbers(100));
    return 0;
}

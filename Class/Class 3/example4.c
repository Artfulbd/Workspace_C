//Rules of Evaluating Expressions

#include <stdio.h>

void main() {
int z = 8, a = 3, b = 9, w=2, y = -5;
float result;

result = z - (a+(float)b/2) + w * -y;

printf("\nThe result of the expression is %6.2f", result);

}

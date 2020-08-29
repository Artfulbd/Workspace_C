#include <stdio.h>
#include <stdlib.h>

void main () {
printf("\nstring to integer: %d\n", atoi ("123a456zeba"));
printf("\nstring to float: %.2f\n", atof ("123456.5678zeba"));
printf("\nstring to float: %.2f\n", atof ("12ddfd3456.5678zeba"));
}

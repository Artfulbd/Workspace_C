#include <stdio.h>
#include <string.h>
int main() {
  char string1[20];
  char string2[20];

  strcpy(string1, "joyful");
  strcpy(string2, "joyous");
  printf("Return Value is : %d\n", strncmp( string1, string2,1));
  printf("Return Value is : %d\n", strncmp( string1, string2,2));
  printf("Return Value is : %d\n", strncmp( string1, string2,3));
  printf("Return Value is : %d\n", strncmp( string1, string2,4));

return 0;
}

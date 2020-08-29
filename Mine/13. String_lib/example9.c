#include <stdio.h>
#include <string.h>
int main() {
  char string1[20];
  char string2[20];

  strcpy(string1, "marigold");
  strcpy(string2, "tulip");
  printf("Return Value is : %d\n", strcmp( string1, string2));

  strcpy(string1, "end");
  strcpy(string2, "end");
  printf("Return Value is : %d\n", strcmp( string1, string2));

  strcpy(string1, "shrimp");
  strcpy(string2, "crab");
  printf("Return Value is : %d\n", strcmp( string1, string2));

  strcpy(string1, "thrill");
  strcpy(string2, "throw");
  printf("Return Value is : %d\n", strcmp( string1, string2));

  strcpy(string1, "joy");
  strcpy(string2, "joyous");
  printf("Return Value is : %d\n", strcmp( string1, string2));


}



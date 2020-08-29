#include <stdio.h>
void f1 (char str[]);
int main(){
char arr []= "black deserted rose";
f1(arr);
return 0;
}

void f1 (char str[]){
    int i;
    puts (str);
  //  puts ("\n");
    for (i=0; str[i]!= '\0'; i++) {
      putchar (str[i]);
    }
   // puts ("\n");
}

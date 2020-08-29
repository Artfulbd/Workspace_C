#include <stdio.h>
int main(){
    char name[20];
    printf("Enter name: ");
    char ch;
    int i = 0;
    //gets(name);
    while ((ch = getchar ())!= '\n'){
        name [i++] = ch;
    }
    name [i] = '\0';
    printf("Your name is %s.",name);
    return 0;
}

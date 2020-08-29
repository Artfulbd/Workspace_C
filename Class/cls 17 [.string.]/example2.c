#include <stdio.h>
#include <string.h>

int main()
{
    char src[40];
    char dest[8];
    strcpy(src, "hello zebaaaaaaaaaaaaaaaaa");
    printf("Copied string in src: %s\n", src);
    strncpy(dest, src, 7);
    dest [7]='\0';
    printf("Final copied string dest: %s\n", dest);

    return(0);
}

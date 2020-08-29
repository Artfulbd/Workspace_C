#include <stdio.h>
int main ()
{
    FILE *new;
    char ch, *p;
    char str [80];
    printf ("Enter a string: \n");
    gets (str);

    new = fopen ("test.txt","w"); // put "a" , "w+" , "a+" and "r+" to see the difference
    if (new == NULL)
    {
        printf ("\nError. No file found.");
    }
    p = str;
    while (*p)
    {
        if (fputc(*p,new)==EOF) // returning error -1
            printf ("\nError writing file");
        p++;
    }
    fclose (new);
//again open the file to read
    new = fopen ("test.txt","r"); // put "w+" , "a+" and "r+" to see the difference
    if (new == NULL)
    {
        printf ("\nError. No file found.");
    }
    for ( ; ; )
    {
        if ((ch=fgetc(new))==EOF)
           {
               break;
           }
        putchar(ch);
    }
    fclose (new);
    return 0;
}

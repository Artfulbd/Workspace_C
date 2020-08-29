#include <stdio.h>
int main ()
{
    FILE *fp;
    fp = fopen ("seek.txt","w");
    fputs ("HELLO NIL SHAGOR", fp);
    if (fp == NULL)
    {
        printf ("\nError. No file found.");
    }
    fclose (fp);
    fp = fopen ("seek.txt","r");
    fseek (fp,6,0);
//printf ("%c",getc(fp));
    char ch = fgetc(fp); //present position of file pointer
    putchar (ch);
    printf ("\n");
    fseek (fp,3,1);
    ch = fgetc(fp); //present position of file pointer
    putchar (ch);
    printf ("\n");
    fseek (fp,-10,1);
    ch = fgetc(fp); //present position of file pointer
    putchar (ch);
    printf ("\n");
    fseek (fp,-5,SEEK_END);
    ch = fgetc(fp); //present position of file pointer
    putchar (ch);
    printf ("\n");
    return 0;
}

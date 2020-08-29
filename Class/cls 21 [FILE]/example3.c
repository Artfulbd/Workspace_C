#include <stdio.h>
int main ()
{
    FILE *new;
    new = fopen ("E:\\New folder\\new.txt","w");
//new = fopen ("F:\\newf.txt","w");
//new = fopen ("newf.txt","w");
    printf ("\nNew file created.");
    fclose (new);

    new = fopen ("E:\\New folder\\new.txt","r");
//new = fopen ("new.txt","r"); //file name didnt match
//new = fopen ("newf.txt","r");
    if (new == NULL)
    {
        printf ("\nError. No file found.");
    }
    fclose (new);
    return 0;
}

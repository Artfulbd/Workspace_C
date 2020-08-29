#include <stdio.h>
main()
{
    char name[20]; //, date[10];
    int date;
    puts("Enter your Name and date.");
    /*gets(name);
    gets(date);
    puts("\n");
    puts(name);*/
    scanf("%s %d",name,&date);
    //fflush(stdin);
    //scanf("%[^\n]s ",date);
    printf("Your NAme is -\t%s \n\tand\nyour birth date is - %d",name,date);
}



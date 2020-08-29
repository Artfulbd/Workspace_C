#include<stdio.h>
main()
{
    FILE *fp;
    char ch;
    printf("output\n");
    fp=fopen("shipu.txt","r");
    if(fp==NULL)
    {
        printf("\n Error! No file found.\n");
    }
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}


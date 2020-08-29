#include<stdio.h>
main()
{
    FILE *fp;
    char ch;
    fp=fopen("shipu.txt","w");
    printf("Input line and press EOF ");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
}


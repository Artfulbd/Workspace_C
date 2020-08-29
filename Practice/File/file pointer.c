#include <stdio.h>
main()
{
        char a[30],b,*p,*q;
        p=a;
        q=&b;
        FILE *fp;
        puts("Enter anything. ");
        gets(a);
        if((fp=fopen("pointer.txt","w"))==NULL)
        {
            puts("Error..!File does not exist.");
        }
        while(*p)
        {
            if(fputc(*p,fp)==EOF)

                {printf("Error writing fie");}

            p++;
        }
        fclose(fp);

         if((fp=fopen("pointer.txt","r"))==NULL)
        {
            puts("Error..!File not found.");
        }
       while(*q)
        {
            if((*q=fgetc(fp))==EOF)
            {
                //printf("Error reading fie");
                break;
            }
            putchar(*q);q++;

        }
        fclose(fp);
}


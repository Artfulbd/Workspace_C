#include <stdio.h>
#include <string.h>
#include <conio.h>
main ()
{
    char name[25],name2[25],pass[21],check[21],note[20000],npass[21];
    char n1[]="menu",n2[]="notes",n3[]="n",n4[]="m";
    printf("\n\n    Enter note name to change password :\n");
    printf("\t: ");
    gets(name);
    strcpy(name2,name);
    strcat(name,".txt");

    FILE *fp,*fp2;
    if((fp=fopen(name,"r"))==NULL)
    {
        printf("There is no file called \"%s\" ..!!!",name2);
    }
    else
    {
        system("cls");
        printf("\n File matched ..\n");
        fscanf(fp,"%s\n",pass);
        int f=0;
        do
        {
            if(f==0)
            {
                printf("\n  Enter password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            else
            {
                system("cls");
                puts("\n\n  Wrong keyword.");
                printf("\n  Renter your password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            printf("\t: ");
            fflush(stdin);
            gets(check);
            f++;

        }
        while(strcmp(pass,check)!=0&&f<3);

        if(strcmp(pass,check)==0)
        {
            system("cls");
            puts("\n  Password matched ");
            printf("\n  Enter new password for  \" %s \": ",name2);
            fflush(stdin);
            gets(npass);

            fp2=fopen("c.txt","w");

            fprintf(fp2,"%s\n",npass);
            fscanf(fp,"%[^\n]s",note);
            fprintf(fp2,"%s",note);


            fclose(fp);
            fclose(fp2);
            remove(name);
            rename("c.txt",name);
            printf("\n\n   Successfully changed. ");
        }
        else
        {
            fclose(fp);
            system("cls");
            printf("\n\n                   ************************");
            puts("\n                   * PASSWORD NOT MATCHED *");
            printf("                   ************************");
            note1();
        }

    }


}


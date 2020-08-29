#include <stdio.h>
#include <string.h>
#include <conio.h>
main ()
{
    int dlt;
    char name[25],name2[25],pass[21],check[21],note[20000],note2[7000];
    char n1[]="menu",n2[]="notes",n3[]="n",n4[]="m";
    printf("\n\n    Enter name for your notepad :            (20 character most)\n");
    printf("\t: ");
    gets(name);
    strcpy(name2,name);
    strcat(name,".txt");

    FILE *fp, *fp1;
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
            fclose(fp);
            system("cls");
            fp1=fopen(name,"a+");
            puts("\n       Password matched. ");
            fclose(fp1);

            dlt = remove(name);
            printf("\n%d",dlt);

            if(dlt == 0)
            {
                fclose(fp);
                system("cls");
                printf("\n\n    ## File deleted successfully");
            }
            else
            {
                system("cls");
                printf("\n\n    ##  Error: unable to delete the file");
                note1();
            }

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

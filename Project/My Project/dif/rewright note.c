#include<stdio.h>
#include<string.h>
main()
{
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

        if(f<2)
        {
            system("cls");
            fp1=fopen(name,"a+");
            puts("\n       Password matched. ");
            printf("\n   Write down the note, you want to add with previous: ");
            fflush(stdin);
            gets(note2);
            fprintf(fp1," %s",note2);
            fclose(fp1);
            fscanf(fp,"%[^\n]s",note);
            printf("\n Note after writing new texts : %s\n\n",note);

        }
        else
        {
            system("cls");
            printf("\n\n                   ************************");
            puts("\n                   * PASSWORD NOT MATCHED *");
            printf("                   ************************");
            //note1();
            main();
        }

        fclose(fp);
    }
}

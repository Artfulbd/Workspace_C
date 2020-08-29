#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
    char name[25],name2[25],pass[21],check[21],note[20000];
    char n1[]="menu",n2[]="notes",n3[]="n",n4[]="m";
    printf("\n\n    Enter name for your notepad :            (20 character most)\n");
    printf("\t: ");
    gets(name);
    strcpy(name2,name);
    strcat(name,".txt");

    FILE *fp;
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
        while(strcmp(pass,check)!=0&&(f<3));

        if(f<4)
        {
            system("cls");
            puts("\n  Password matched ");
            fscanf(fp,"%[^\n]s",note);
            printf("\n Note: %s\n\n",note);
        }
        else
        {
            system("cls");
            puts("\n\n  Password Not matched.");
            note1();
        }

        fclose(fp);
    }
    printf("\n\n\n   Do you want to read another go to note menu?\n");
jump0:
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"t")==0||strncmp(e,"try again",3)==0)
    {
        system("cls");
        findnote();
    }
    else if(strcmp(name,n1)==0||strcmp(name,n2)==0||strcmp(name,n3)==0||strcmp(name,n4)==0||strncmp(name,"note",3)==0)
    {
        system("cls");
        note1();
    }
    else
    {
        system("cls");
        puts("Wrong command");
        puts("Spouse for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("Enter your command ..");
        goto jump0;
    }




}

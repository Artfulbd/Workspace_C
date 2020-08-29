#include<stdio.h>
#include<string.h>
#include<conio.h>
int count()
{
    char ch;
    int l=0;
    FILE *fp;
    fp = fopen("Contact.txt","r");
    if ( fp )
    {
        while ((ch=getc(fp)) != EOF)
        {
            if(ch == '\n')
            {
                l++;
            }
        }
    }
    fclose(fp);
    return l/3;

}

main()
{

    char name[20];
    printf("\n\n    1. Add a note. (there are %d contact on your phonebook, you can add %d more. \n",r,50-r);
    printf("    2. Check a note.\n");;
    printf("    3. Erase a note.\n");
    printf("    4. Change password.\n");
    printf("    5. Return to Utility menu.\n");
    printf("\n what do you want ?? ...  ");
    fflush(stdin);
    gets(name);
    for(i=0; name[i]!='\0'; i++)
    {
        if(name[i]<96 && name[i]>65)
        {
            name[i]=name[i]+32;
        }
    }

    if(strcmp("add",name)==0||strcmp(name,"1")==0)
    {
        system("cls");
        printf("  Add. ");
    }
    else if(strcmp("check",name)==0||strncmp("check",name,3)==0||strcmp(name,"2")==0)
    {
        system("cls");
        printf("  Check ");
    }
    else if(strcmp("erase",name)==0||strncmp("erase",name,3)==0||strcmp(name,"3")==0)
    {
        system("cls");
        printf("  Delete ");
    }
    else if(strncmp("change",name,3)==0||strncmp("password",name)==0||strcmp("4",name)==0)
    {

        system("cls");
        puts("Password");
    }
    else if(strncmp("return",name,3)==0||strcmp(name,"5")==0||strncmp("utility",name,3)==0||strcmp("u",name)==0||strcmp("r",name)==0)
    {
        system("cls");
        printf("  Return main");
    }
    else
    {
        system("cls");
        printf("\n\n\tSorry.. I couldn't understand your command.\n");
        printf("    Spouse for Check a contact, write \"check\" or \"che\" or \"4\" and so on. ");
        printf("\n   Will you please enter your command again?? ..");
        note();
    }

}


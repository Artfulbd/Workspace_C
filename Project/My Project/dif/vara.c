#include<stdio.h>
#include<string.h>
main()
{
    printf("\n Bashundhora gate, Mehedi Mart,Appolo Hospital or Bisso road(Rail gate) \n\n");
    char s[30],t[30];
    int i,f=0;
    printf("\n   Where are you now ??..\n");
jump:
    fflush(stdin);
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]<96 && s[i]>65)
        {
            s[i]=s[i]+32;
        }
    }
    if(strcmp(s,"bashundhora")==0||strcmp(s,"basundhara")==0||strcmp(s,"basundhara")==0||strcmp(s,"gate")==0||strcmp(s,"main")==0)
    {
        strcpy(s,"Bashundhora gate");
        printf("\n Grameen phone office, Mehedi Mart, North south university, C block Mosjid, Boro Mosjid, Ghatpar or 300 fit \n");
        puts("\n   Where do you want to go ??..");
jump1:
        fflush(stdin);
        gets(t);
        for(i=0; t[i]!='\0'; i++)
        {
            if(t[i]<96 && t[i]>65)
            {
                t[i]=t[i]+32;
            }
        }
        if(strcmp(t,"grameen phone office")==0||strcmp(t,"grameen phone")==0||strcmp(t,"gra")==0)
        {
            f=1;
            strcpy(t,"Grameen phone office");
        }
        else if(strcmp(t,"mehedi mart")==0||strcmp(t,"mehedi")==0||strcmp(t,"m")==0)
        {
            f=4;
            strcpy(t,"Mehedi mart");
        }
        else if(strcmp(t,"north south university")==0||strcmp(t,"north south")==0||strcmp(t,"n")==0)
        {
            f=2;
            strcpy(t,"North south university");
        }
        else if(strcmp(t,"c block mosjid")==0||strcmp(t,"mosjid")==0||strcmp(t,"c")==0)
        {
            f=3;
            strcpy(t,"C block mosjid");
        }
        else if(strcmp(t,"boro mosjid")==0||strcmp(t,"boro")==0||strcmp(t,"b")==0)
        {
            f=3;
            strcpy(t,"Boro mosjid");
        }
        else if(strcmp(t,"ghatpar")==0||strcmp(t,"g")==0)
        {
            f=6;
            strcpy(t,"Ghatpar");
        }
        else if(strcmp(t,"300 fit")==0||strcmp(t,"300")==0||strcmp(t,"3")==0||strcmp(t,"f")==0)
        {
            f=2;
            strcpy(t,"300 Feet");
        }
        else
        {
            system("cls");
            printf("\n Sorry. I can't understand.");
            printf("\n Grameen phone office, Mehedi Mart, North south university, C block Mosjid, Boro Mosjid, Ghatpar or 300 fit \n");
            printf("\n Spouse for Grameen phone office write  \"grameen phone office\" or  \"grameen phone\" or \"gra\".\n for Ghatpar write \"ghatpar\" or  \"g\".");
            printf("\n  Please enter where to go again ..");
            goto jump1;
        }
    }
    else if(strcmp(s,"appolo")==0||strcmp(s,"appolo hospital")==0||strcmp(s,"a")==0||strcmp(s,"hospital")==0||strcmp(s,"h")==0)
    {
        strcpy(s,"Appolo Hospital");
        printf("\n Viqarunneca school, Mehedi Mart, North south university, Convention center, Ghatpar or 300 fit \n");
        puts("\n   Where do you want to go ??..");
jump2:
        fflush(stdin);
        gets(t);
        for(i=0; t[i]!='\0'; i++)
        {
            if(t[i]<96 && t[i]>65)
            {
                t[i]=t[i]+32;
            }
        }
        if(strcmp(t,"viqarunneca school")==0||strcmp(t,"school")==0||strcmp(t,"viq")==0||strcmp(t,"v")==0||strcmp(t,"s")==0)
        {
            f=2;
            strcpy(t,"Viqarunneca school");
        }
        else if(strcmp(t,"mehedi mart")==0||strcmp(t,"mehedi")==0||strcmp(t,"m")==0)
        {
            f=2;
            strcpy(t,"Mehedi mart");
        }
        else if(strcmp(t,"north south university")==0||strcmp(t,"north south")==0||strcmp(t,"n")==0||strcmp(t,"north")==0)
        {
            f=2;
            strcpy(t,"North south university");
        }
        else if(strcmp(t,"convention center")==0||strcmp(t,"convention")==0||strcmp(t,"c")==0)
        {
            f=2;
            strcpy(t,"Convention center");
        }
        else if(strcmp(t,"ghatpar")==0||strcmp(t,"g")==0)
        {
            f=4;
            strcpy(t,"Ghatpar");
        }
        else if(strcmp(t,"300 fit")==0||strcmp(t,"300")==0||strcmp(t,"3")==0||strcmp(t,"f")==0)
        {
            f=3;
            strcpy(t,"300 Feet");
        }
        else
        {
            system("cls");
            printf("\n Sorry. I can't understand.");
            printf("\n Viqarunneca school, Mehedi Mart, North south university, Convention center, Ghatpar or 300 fit \n");
            printf("\n Spouse for Viqarunneca school write  \"viqarunneca school\" or  \"v\" or \"viq\".\n for Ghatpar write \"ghatpar\" or  \"g\".");
            printf("\n  Please enter where to go again ..");
            goto jump2;
        }
    }
    else if(strcmp(s,"bisso road")==0||strcmp(s,"bisso")==0||strcmp(s,"r")==0||strcmp(s,"road")==0)
    {
        strcpy(s,"Bisso road(Rail gate)");
        printf("\n Appolo Hospital, Mehedi Mart, North south university, Convention center, Ghatpar or 300 fit \n");
        puts("\n   Where do you want to go ??..");
jump3:
        fflush(stdin);
        gets(t);
        for(i=0; t[i]!='\0'; i++)
        {
            if(t[i]<96 && t[i]>65)
            {
                t[i]=t[i]+32;
            }
        }
        if(strcmp(t,"Appolo Hospital")==0||strcmp(t,"appolo")==0||strcmp(t,"hospital")==0||strcmp(t,"a")==0||strcmp(t,"h")==0)
        {
            f=5;
            strcpy(t,"Appolo Hospital,");
        }
        else if(strcmp(t,"mehedi mart")==0||strcmp(t,"mehedi")==0||strcmp(t,"m")==0)
        {
            f=5;
            strcpy(t,"Mehedi mart");
        }
        else if(strcmp(t,"north south university")==0||strcmp(t,"north south")==0||strcmp(t,"n")==0)
        {
            f=6;
            strcpy(t,"North south university");
        }
        else if(strcmp(t,"convention center")==0||strcmp(t,"convention")==0||strcmp(t,"c")==0)
        {
            f=4;
            strcpy(t,"Convention center");
        }
        else if(strcmp(t,"ghatpar")==0||strcmp(t,"g")==0)
        {
            f=6;
            strcpy(t,"Ghatpar");
        }
        else if(strcmp(t,"300 fit")==0||strcmp(t,"300")==0||strcmp(t,"3")==0||strcmp(t,"f")==0)
        {
            f=2;
            strcpy(t,"300 Feet");
        }
        else
        {
            system("cls");
            printf("\n Sorry. I can't understand.");
            printf("\n Appolo Hospital, Mehedi Mart, North south university, Convention center, Ghatpar or 300 fit \n");
            printf("\n Spouse for Appolo Hospital, write  \"appolo Hospital,\" or  \"hospital,\" or \"a\" or \"h\".\n for Ghatpar write \"ghatpar\" or  \"g\".");
            printf("\n  Please enter where to go again ..");
            goto jump3;
        }
    }
    else if(strcmp(s,"mehedi mart")==0||strcmp(s,"mart")==0||strcmp(s,"m")==0||strcmp(s,"mehedi")==0)
    {
        strcpy(s,"Mehedi Mart");
        printf("\n Appolo Hospital, Bank asia, North south university, Convention center, Ghatpar or 300 fit \n");
        puts("\n   Where do you want to go ??..");
jump4:
        fflush(stdin);
        gets(t);
        for(i=0; t[i]!='\0'; i++)
        {
            if(t[i]<96 && t[i]>65)
            {
                t[i]=t[i]+32;
            }
        }
        if(strcmp(t,"Appolo Hospital")==0||strcmp(t,"appolo")==0||strcmp(t,"hospital")==0||strcmp(t,"a")==0||strcmp(t,"h")==0)
        {
            f=5;
            strcpy(t,"Appolo Hospital,");
        }
        else if(strcmp(t,"bank asia")==0||strcmp(t,"asia")==0||strcmp(t,"b")==0)
        {
            f=2;
            strcpy(t,"Bank asia");
        }
        else if(strcmp(t,"north south university")==0||strcmp(t,"north south")==0||strcmp(t,"n")==0)
        {
            f=2;
            strcpy(t,"North south university");
        }
        else if(strcmp(t,"convention center")==0||strcmp(t,"convention")==0||strcmp(t,"c")==0)
        {
            f=5;
            strcpy(t,"Convention center");
        }
        else if(strcmp(t,"ghatpar")==0||strcmp(t,"g")==0)
        {
            f=2;
            strcpy(t,"Ghatpar");
        }
        else if(strcmp(t,"300 fit")==0||strcmp(t,"300")==0||strcmp(t,"3")==0||strcmp(t,"f")==0)
        {
            f=3;
            strcpy(t,"300 Feet");
        }
        else
        {
            system("cls");
            printf("\n Sorry. I can't understand.");
            printf("\n Appolo Hospital, Bank asia, North south university, Convention center, Ghatpar or 300 fit \n");
            printf("\n Spouse for Appolo Hospital, write  \"appolo Hospital,\" or  \"hospital,\" or \"a\" or \"h\".\n for Bank asis write \"bank asia\" or  \"b\" or  \"asia\".");
            printf("\n  Please enter where to go again ..");
            goto jump4;
        }
    }
    else
    {

        system("cls");
        printf("\n Sorry. I can't understand.");
        printf("\n Bashundhora gate, Mehedi Mart,Appolo Hospital or Bisso road(Rail gate) \n");
        printf("\n Spouse for Appolo Hospital, write  \"appolo Hospital,\" or  \"hospital,\" or \"a\" or \"h\".\n for Bashundhara main gate write \"bashundhara\" or  \"main gate\" or  \"main\".");
        printf("\n  Please enter again, where to go ..\n");
        goto jump;

    }
    switch (f)
    {
    case 1:
    {
        printf("Rent from   %s   to   %s   is 10 Taka.",s,t);
        break;
    }
    case 2:
    {
        printf("Rent from   %s   to   %s   is 15 Taka.",s,t);
        break;
    }
    case 3:
    {
        printf("Rent from   %s   to   %s   is 20 Taka.",s,t);
        break;
    }
    case 4:
    {
        printf("Rent from   %s   to   %s   is 25 Taka.",s,t);
        break;
    }
    case 5:
    {
        printf("Rent from   %s   to   %s   is 35 Taka.",s,t);
        break;
    }
    default :
    {
        printf("Rent from   %s   to   %s   is 40 Taka.",s,t);

    }
    }
}

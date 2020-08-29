#include <stdio.h>
#include<string.h>
main()
{
    struct items
    {
        char n[30];
        char l[60];
    } item[19];
    int i;
    char test[30];
    printf("\n       I will find exact location for you. ");
    printf("\n\n  North south university, Independent university, Appolo hospital, Eye hospitals, Mehedi Mart, Grameenphone House,\n  Jamuna Amusement Park, Hurdco International School, Southeast Bank Limited, NCC Bank Limited,Bank Asia Limited,\n  Basundhara Group, Walton Headquarter, East West Media Group Ltd., Sisana Garden, Safwan Park, Kagojer Ishkool,\n  Bangladesh Pratidin, or Dot Interior. \n");
    printf("\n    Just say name to search?? ..  ");
jump:
    fflush(stdin);
    gets(test);
    if(strncmp(test,"North",4)==0||strncmp(test,"Independent",4)==0||strncmp(test,"Appolo",4)==0||strncmp(test,"Eye hospitals",4)==0||strncmp(test,"Mehedi Mart",4)==0||strncmp(test,"Grameenphone",4)==0||strncmp(test,"Jamuna",4)==0||strncmp(test,"Southeast",4)==0||strncmp(test,"NCC Bank",4)==0||strncmp(test,"Bank Asia",4)==0||strcmp(test,"Basundhara")==0||strncmp(test,"Walton",4)==0||strncmp(test,"East West",4)==0||strncmp(test,"Sisana Garden",4)==0||strncmp(test,"Safwan Park",4)==0||strncmp(test,"Kagojer",4)==0||strncmp(test,"Bangladesh",4)==0||strncmp(test,"Dot Interior",4)==0)
    {
        FILE *fp;
        if((fp=fopen("add.txt","r"))!=NULL)
        {
            for(i=0; i<19; i++)
            {
                fscanf(fp,"\n%[^\n]s",item[i].n);
                fscanf(fp,"\n%[^\n]s ",item[i].l);

                if((strncmp(item[i].n,test,4)==0))
                {
                    printf("\n\n Name: \"%s\"\n Address: %s\n",item[i].n,item[i].l);
                }
            }
            fclose(fp);
        }
        else
        {
            printf("Error in file opening.!!! ");

        }

    }
    else
    {
        system("cls");
        printf("\n  Sorry. I could not Understand.\n");
        printf("\n\n  North south university, Independent university, Appolo hospital, Eye hospitals, Mehedi Mart, Grameenphone House,\n  Jamuna Amusement Park, Hurdco International School, Southeast Bank Limited, NCC Bank Limited,Bank Asia Limited,\n  Basundhara Group, Walton Headquarter, East West Media Group Ltd., Sisana Garden, Safwan Park, Kagojer Ishkool,\n  Bangladesh Pratidin, or Dot Interior. \n");
        printf("\n Spouse for Appolo hospital, enter  \"Appolo hospital\", or first 4 character of your choice,\n like, for NCC Bank Limited write \"NCC \" (put a space after NCC for 4th character) and so on. \n");
        printf("\n   Will you please enter name again .. ");
        goto jump;
    }
}



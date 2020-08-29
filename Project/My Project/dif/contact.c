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
        struct contact
    {
        char n[20];
        char num[18];
    } con[50];
    char name[20],ch;
    int i,n,r,f=1;

jump:
    r=0;
    r=count();
    printf("\n\n    1. Create a contact. (there are %d contact on your phonebook, you can add %d more. \n",r,50-r);
    printf("    2. Check a contact.\n");;
    printf("    3. Erase a contact.\n");
    printf("    4. Show all contact.\n");
    printf("    5. Return to Utility menu.\n");
    printf("\n   *************************************\n");
    printf("   * To delete all contact press \" # \" * \n");
    printf("   *************************************\n ");
    printf("\n what do you want ?? ...  ");
    fflush(stdin);
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]<96 && name[i]>65)
        {
            name[i]=name[i]+32;
        }
    }

    if(strcmp("create",name)==0||strncmp("create",name,3)==0||strcmp(name,"1")==0)
    {
        system("cls");
        printf("\n\n    There are %d contact on your phonebook, you can add %d more. \n",r,50-r);
        printf("\n   How many contact do you want to input ?? ");
        scanf("%d",&n);
        FILE *fp;
        if((fp=fopen("Contact.txt","a"))==NULL)
        {
            printf("\n\n   Error in writing.!!!");
            goto jump;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                fflush(stdin);
                printf("\n\n   Enter name: ");
                scanf("%[^\n]s",con[i].n);
                fprintf(fp,"%s\n",con[i].n);
                printf("   Enter phone number: ");
                fflush(stdin);
                gets(con[i].num);
                fprintf(fp,"%s\n\n",con[i].num);
                printf("\n");
            }

        }
        fclose(fp);
        printf("   Contact saved. ");
        goto jump;
    }
    else if(strcmp("check",name)==0||strncmp("check",name,3)==0||strcmp(name,"2")==0)
    {
        system("cls");
        FILE *fp;
        if((fp=fopen("Contact.txt","r"))==NULL)
        {
            printf("\n\n   Error.!!! File dose not exist. ");
            goto jump;
        }
        else
        {
            printf("\n\n  Write down the name you want to search ?? ...  ");
            fflush(stdin);
            gets(name);
            i=0;
            while(i<r)
            {
                fflush(stdin);
                fscanf(fp,"\n%[^\n]s",con[i].n);
                fscanf(fp,"\n%s",con[i].num);
                if(strcmp(con[i].n,name)==0)
                {
                    f=0;
                    printf("\n Name: %s\n",con[i].n);
                    printf(" Contact umber: %s\n",con[i].num);
                    break;
                }
                i++;
            }
            fclose(fp);
            if(f!=0)
            {
                printf("\n No match found.!!!\n\n\n\n");
            }
            goto jump;
        }


    }
    else if(strcmp("erase",name)==0||strncmp("erase",name,3)==0||strcmp(name,"3")==0)
    {
        system("cls");
        FILE *fp;
        FILE *fp2;
        if((fp2=fopen("c.txt","w"))==NULL)
        {
            printf("\n\n   Error in writing.!!!");
            goto jump;
        }
        else
        {
            if((fp=fopen("Contact.txt","r"))==NULL)
            {
                printf("\n\n   Error in writing.!!!");
                goto jump;
            }
            else
            {
                printf("\n\n  Write down the name you want to delete ?? ...  ");
                fflush(stdin);
                gets(name);
                for(i=0; i<r; i++)
                {
                    fflush(stdin);
                    fscanf(fp,"\n%[^\n]s",con[i].n);
                    fscanf(fp,"\n%s",con[i].num);
                    if(strcmp(con[i].n,name)==0)
                    {
                        continue;
                    }
                    else

                    {
                        fprintf(fp2,"%s\n",con[i].n);
                        fprintf(fp2,"%s\n\n",con[i].num);
                    }
                }
                fclose(fp);
                fclose(fp2);
                remove("Contact.txt");
                rename("c.txt","Contact.txt");
                printf("\n\n   Successfully deleted.");
                goto jump;

            }

        }

    }
    else if(strncmp("show",name,3)==0||strcmp("all",name)==0||strcmp(name,"4")==0)
    {
        system("cls");
        FILE *fp;
        if((fp=fopen("Contact.txt","r"))==NULL)
        {
            printf("\n\n   Error in writing.!!!");
            goto jump;
        }
        else
        {
            for(i=0; i<r; i++)
            {
                fflush(stdin);
                fscanf(fp,"\n%[^\n]s",con[i].n);
                printf("\n Name: %s\n",con[i].n);
                fscanf(fp,"\n%s",con[i].num);
                printf(" Contact umber: %s\n\n",con[i].num);
            }

        }
        fclose(fp);
        goto jump;
    }
    else if(strncmp("return",name,3)==0||strcmp(name,"5")==0||strncmp("utility",name,3)==0||strcmp("u",name)==0||strcmp("r",name)==0)
    {
        system("cls");
        goto jump;
    }
     else if(strcmp("#",name)==0)
     {

         FILE *fp;
        if((fp=fopen("Contact.txt","w"))==NULL)
        {
            printf("\n\n   Already all contacts are deleted.!!!");
            goto jump;
        }
        else
        {
            system("cls");
            printf("\n\n   Delete successful..!!! ");
            fclose(fp);
            goto jump;
        }
     }
    else
    {
        system("cls");
        printf("\n\n\tSorry.. I couldn't understand your command.\n");
        printf("    Spouse for Check a contact, write \"check\" or \"che\" or \"4\" and so on. ");
        printf("\n   Will you please enter your command again?? ..");
        goto jump;
    }

}

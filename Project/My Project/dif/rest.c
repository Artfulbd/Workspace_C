#include<stdio.h>
#include<string.h>
#include<conio.h>

main()
{
    typedef struct items
    {
        char i1[10];
        char i2[15];
        char i3[15];
        char i4[15];
        char i5[15];
    } item;
    struct details
    {
        char n[20];
        char r [20];
        char l[20];
        item it;
    } dt[16];

    int i,j;
    char test[15];
    printf("\n       I will find some restaurant for you. ");
    printf("\n\n  Fast food, Chinese, Pizza, Thigh food  or Bangali food. \n");
    printf("  Just say what do you like?? ..  ");
jump:
    fflush(stdin);
    gets(test);
    if(strcmp(test,"Fast food")==0||strcmp(test,"Chinese")==0||strcmp(test,"Pizza")==0||strcmp(test,"Thigh food")==0||strcmp(test,"Bangali food")==0)
    {
        printf("\n\n  For %s, check those restaurants given below ..\n\n",test);



        FILE *fp;
        if((fp=fopen("rest.txt","r"))!=NULL)
        {
            for(i=0; i<16; i++)
            {
                fscanf(fp,"\n%[^\n]s",dt[i].it.i1);
                fscanf(fp,"\n%s",dt[i].it.i2);
                fscanf(fp,"\n%s",dt[i].it.i3);
                fscanf(fp,"\n%[^\n]s ",dt[i].it.i4);
                fscanf(fp,"\n%[^\n]s",dt[i].it.i5);
                fscanf(fp,"\n%[^\n]s",dt[i].n);
                fscanf(fp,"\n%[^\n]s",dt[i].r);
                printf("%d",dt[i].r[0]);
                fscanf(fp,"\n%[^\n]s",dt[i].l);
                if(strcmp(test,dt[i].it.i1)==0||strcmp(test,dt[i].it.i2)==0||strcmp(test,dt[i].it.i3)==0||strcmp(test,dt[i].it.i4)==0||strcmp(test,dt[i].it.i5)==0)
                {
                    printf("Restaurant name: %s\nRating: %s\n And it is at %s\n\n",dt[i].n,dt[i].r,dt[i].l);
                }
            }
        }
        else
        {
            printf("Error in file opening.!!! ");
        }
        fclose(fp);
    }
    else
    {
        system("cls");
        printf("\n  Sorry. I could not Understand.\n");
        printf("\n Spouse for fast food, enter  \"Fast food\", for pizza  \"Pizza\"  and so on \"Chinese\" ,\"Thigh food\", \"Bangali food\". \n");
        printf(" Will you please enter your choice again .. ");
        goto jump;
    }


}


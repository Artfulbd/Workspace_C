#include <stdio.h>
#include<string.h>
main()
{
    struct items
    {
        char n[25];
        char c[30];
        int p;
        char w[40];
    } item[22];
    int i,j;
    char test[25];
    printf("\n       I will find some Web sight for you. ");
    printf("\n\n  Eye shadow, Mascara, Face color, Perfecting base, Orgasm blush, Moisturizer, Foundation,\n Eye intentensifieror, Balance pressed powder, Creamy concealer kit, Eyebrow pencil, Kajol, Perfume,\n Nail polishes, Waterproof mascara, Micro finish powder, Makeup blender, Lip liner, Lipstick, Eye liner,\n Face primer, Creamy concealer kit or Lip and cheek stain. \n");
    printf("\n    Just say what do you like to search?? ..  ");
jump:
    fflush(stdin);
    gets(test);
    if(strncmp(test,"Eye shadow",6)==0||strncmp(test,"Mascara",6)==0||strncmp(test,"Face color",6)==0||strncmp(test,"Perfecting base",6)==0||strncmp(test,"Orgasm Blush",6)==0||strncmp(test,"Moisturizer",6)==0||strncmp(test,"Foundation",6)==0||strncmp(test,"Eye intentensifieror",6)==0||strncmp(test,"Balance pressed powder",6)==0||strncmp(test,"Eyebrow pencil",6)==0||strcmp(test,"Kajol")==0||strncmp(test,"Perfume",6)==0||strncmp(test,"Nail polishes",6)==0||strncmp(test,"Waterproof mascara",6)==0||strncmp(test,"Micro finish powder",6)==0||strncmp(test,"Makeup blender",6)==0||strncmp(test,"Lip liner",6)==0||strncmp(test,"Lipstick",6)==0||strncmp(test,"Eye liner",6)==0||strncmp(test,"Face primer",6)==0||strncmp(test,"Lip and cheek stain",6)==0||strncmp(test,"Creamy Concealer kit",6)==0)
    {
        FILE *fp;
        if((fp=fopen("online.txt","r"))!=NULL)
        {
            for(i=0; i<22; i++)
            {
                fscanf(fp,"\n%[^\n]s",item[i].n);
                fscanf(fp,"\n%[^\n]s ",item[i].c);
                fscanf(fp,"\n%d",&item[i].p);
                fscanf(fp,"\n%[^\n]s",item[i].w);

                if((strncmp(item[i].n,test,6)==0))
                {
                    printf("\n\n \"%s\"   is best for   %s\n",item[i].c,item[i].n);
                    printf(" It is about %d taka\n",item[i].p);
                    printf(" And you can get it from %s\n\n",item[i].w);
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
        printf("\n\n  Eye shadow, Mascara, Face color, Perfecting base, Orgasm blush, Moisturizer, Foundation,\n Eye intentensifieror, Balance pressed powder, Creamy concealer kit, Eyebrow pencil, Kajol, Perfume,\n Nail polishes, Waterproof mascara, Micro finish powder, Makeup blender, Lip liner, Lipstick, Eye liner,\n Face primer, Creamy concealer kit or Lip and cheek stain. \n");
        printf("\n Spouse for Orgasm Blush, enter  \"Orgasm Blush\", or first 6 character of your choice,\n like, for Face color write \"Face c\" and so on. \n");
        printf("\n   Will you please enter your choice again .. ");
        goto jump;
    }
}



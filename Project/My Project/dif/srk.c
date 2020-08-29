#include<stdio.h>
#include<string.h>
main()
{
    char n[15];
    float h;
    printf("\n\n Do you know SRK ??    (if know enter \"y\" if not enter \"n\")\n");
jump:
    printf("   :  ");
    fflush(stdin);
    gets(n);
    if(strcmp(n,"y")==0)
    {
        printf("\n\t Now answer a few questions.\n\n");
jump1:
        printf("\t  Do you any backbone problem?? ");
        printf("   :  ");
        fflush(stdin);
        gets(n);
        if(strcmp(n,"y")==0)
        {
            system("cls");
            printf("\n\n This program is not for you. It is harmful for for your body.\n\n");
            fflush(stdin);
            gets(n);
            //funny();
        }
        else if(strcmp(n,"n")==0)
        {
            system("cls");
jump2:
            printf("\n\n\t  Do you have any neck problem?? ");
            printf("   :  ");
            fflush(stdin);
            gets(n);
            if(strcmp(n,"y")==0)
            {
                system("cls");
                printf("\n\n This program is not for you. It is harmful for for your body.\n\n");
                fflush(stdin);
                gets(n);
                //funny();
            }
            else if(strcmp(n,"n")==0)
            {
                system("cls");
jump3:
                printf("\n\n\t  OK. How tall are you ??       (in feet)\n");
                printf("   :  ");
                scanf("%f",&h);
                if(h>5&&h<8)
                {
                    system("cls");
                   printf("\n\t   You can give pose like SRK.\n\t   You are prefect for this.\n");
                    printf("\t   Enjoy some movies of SRK. Then you will get it.!!!");
                    printf("\n    SRK POZE\n");
                    printf("                       ****  \n");
                    printf("                      ******   \n");
                    printf("                     **   **   \n");
                    printf("                      *** **   \n");
                    printf("                       ****   \n");
                    printf("  * **             **********                *       \n");
                    printf("   ****          ***************              *****    \n");
                    printf("     ***      ********** **********         **** *    \n");
                    printf("       ****************    ********************      \n");
                    printf("        *      **********  *****    ****   **       \n");
                    printf("                **********  ****   \n");
                    printf("                  ***************   \n");
                    printf("                   **************   \n");
                    printf("                    *************   \n");
                    printf("                     ************   \n");
                    printf("                      **********   \n");
                    printf("                       **********   \n");
                    printf("                      ***********   \n");
                    printf("                      ************   \n");
                    printf("                     *************   \n");
                    printf("                      ************   \n");
                    printf("                       ***********   \n");
                    printf("                         **** ****   \n");
                    gets(n);

                }
                else if(h<5.5&&h>0.0)
                {
                    system("cls");
                    printf("\n\n    This program is not for you. Hang yourself daily.\n\n");
                    fflush(stdin);
                    gets(n);
                    //funny();
                }
                else
                {
                    system("cls");
                    printf("\n  You entered wrong.Spouse if your hight 5 feet and 9 inch, then write \"5.9\".\n");
                    goto jump3;

                }
            }

            else
            {
                system("cls");
                printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
                goto jump2;
            }

        }
        else
        {
            system("cls");
            printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
            goto jump1;
        }
    }
    else if(strcmp(n,"n")==0)
    {
        printf("\n\n This program is not for you. First make sure you know about SRK, then come on.\n\n");
        gets(n);
        //funny();
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
        goto jump;
    }


}

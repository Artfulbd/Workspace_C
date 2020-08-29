#include<stdio.h>
#include<string.h>
main()
{
    int t,m=0,h=0,gn=0;
    char n1[30],n[35],g[15],in[20];
    printf("\n  What is your name? ");
    fflush(stdin);
    gets(n1);

jump0:
    printf("\n Enter gender: ");
    fflush(stdin);
    gets(g);
    if(strcmp(g,"male")==0||strcmp(g,"m")==0)
    {
        strcpy(n,"Mr.");
        strcat(n,n1);
        goto jump;
    }
    else if(strcmp(g,"female")==0||strcmp(g,"f")==0)
    {
        strcpy(n,"Mrs.");
        strcat(n,n1);
        gn=1;
        goto jump;
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write male or female or first character.");
        goto jump0;
    }
jump:
    printf("\n OK, now answer a few questions.");
jump1:
    printf("\n\n    How are you %s ?? \t\t (if fine enter \"f\" if not enter \"n\")\n",n);
    printf("   : ");
    fflush(stdin);
    gets(in);
    if(strcmp(in,"f")==0)
    {
        m++;
        system("cls");
    }
    else if(strcmp(in,"n")==0)
    {
        system("cls");
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"f\" or \"n\" .\n");
        goto jump1;
    }
jump2:
    printf("\n\n   Do you like to watch movie? \t\t (if like enter \"l\" if not enter \"n\")\n");
    printf("   : ");
    fflush(stdin);
    gets(in);
    if(strcmp(in,"l")==0)
    {
        m++;
        system("cls");
    }
    else if(strcmp(in,"n")==0)
    {
        system("cls");
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"l\" or \"n\".\n");
        goto jump2;
    }
    if(gn==0)
    {
jump3:
        printf("\n\n   Do you have any girlfriend?? \t\t (if yes enter \"y\" if not enter \"n\")\n");
        printf("   : ");
        fflush(stdin);
        gets(in);
        if(strcmp(in,"y")==0)
        {
            m++;
            system("cls");
        }
        else if(strcmp(in,"n")==0)
        {
            system("cls");
        }
        else
        {
            system("cls");
            printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
            goto jump3;
        }
    }
    else
    {
jump30:
        printf("\n\n   Do you have any boyfriend?? \t\t (if yes enter \"y\" if not enter \"n\")\n");
        printf("   : ");
        fflush(stdin);
        gets(in);
        if(strcmp(in,"y")==0)
        {
            m++;
            system("cls");
        }
        else if(strcmp(in,"n")==0)
        {
            system("cls");
        }
        else
        {
            system("cls");
            printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
            goto jump30;
        }
    }
jump4:
    printf("\n\n   OK. Do u like to talk with unknown peoples?? \t\t (if yes enter \"y\" if not enter \"n\")\n");
    printf("   : ");
    fflush(stdin);
    gets(in);
    if(strcmp(in,"y")==0)
    {
        m++;
        system("cls");
    }
    else if(strcmp(in,"n")==0)
    {
        system("cls");
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
        goto jump4;
    }
jump5:
    printf("\n\n   Physically you are well or not?? \t\t (if well enter \"y\" if not enter \"n\")\n");
    printf("   : ");
    fflush(stdin);
    gets(in);
    if(strcmp(in,"y")==0)
    {
        m++;
        system("cls");
    }
    else if(strcmp(in,"n")==0)
    {
        h++;
        system("cls");
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"y\" or \"n\" .\n");
        goto jump5;
    }
jump6:
    printf("\n\n   Do you have lots of friends?? \t\t (if have, enter \"y\" if not enter \"n\")\n");
    printf("   : ");
    fflush(stdin);
    gets(in);
    if(strcmp(in,"y")==0)
    {
        m++;
        system("cls");
    }
    else if(strcmp(in,"n")==0)
    {
        system("cls");
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
        goto jump6;
    }
jump7:
    printf("\n\n   Do you like to smile all time??? \t\t (if like, enter \"y\" if not enter \"n\")\n");
    printf("   : ");
    fflush(stdin);
    gets(in);
    if(strcmp(in,"y")==0)
    {
        m++;
        system("cls");
    }
    else if(strcmp(in,"n")==0)
    {
        system("cls");
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
        goto jump7;
    }
jump8:
    printf("\n\n   Do u like to sing songs ??? \t\t (if like, enter \"y\" if not enter \"n\")\n");
    printf("   : ");
    fflush(stdin);
    gets(in);
    if(strcmp(in,"y")==0)
    {
        m++;
        system("cls");
    }
    else if(strcmp(in,"n")==0)
    {
        system("cls");
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
        goto jump8;
    }
jump9:
    printf("\n\n   prb prb prb ??? \t\t (if like, enter \"y\" if not enter \"n\")\n");
    printf("   : ");
    fflush(stdin);
    gets(in);
    if(strcmp(in,"y")==0)
    {
        m++;
        system("cls");
    }
    else if(strcmp(in,"n")==0)
    {
        system("cls");
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
        goto jump9;
    }
    printf("\n\t%d",m);
    if(m<10&&m>6)
    {
        printf("\n\n\n   Good %s . You are the happiest person ever int the world. You have everything.\n   Try to keep your good habits until you die.",n);
        if(h=1)
        {
            printf("\n   Go to the doctor first, to solve your physical problem.\n");
            h=0;
        }
        printf("\n   We do not need magic to change the world, we carry all the power\n   we need inside ourselves already: we have the power to imagine better\n\n\n");
        printf("\n   Don't ever let somebody tell you ... you can't do something. Not\n   You got a dream. You gotta protect it. People   can't do something\n   themselves, they want to tell you can't do it.If you want something,\n   go get it.\n\n\n");
    }
    else if(m>3&&m<7)
    {
        printf("\n\n\n   %s . You are not so happy. Try to upgrade yourself. This world is so beautiful then you think.\n",n);
        if(h=1)
        {
            printf("\n   Go to the doctor first, to solve your physical problem\n");
            h=0;
        }
        printf("\n   We do not need magic to change the world, we carry all the power\n   we need inside ourselves already: we have the power to imagine better.\n");
        printf("\n   Don't ever let somebody tell you ... you can't do something. Not\n   You got a dream. You gotta protect it. People   can't do something\n   themselves, they want to tell you can't do it.If you want something,\n   go get it.\n\n\n");
    }
    else
    {
        printf("\n\n\n   %s . You are not happy. Try to upgrade yourself. This world is so beautiful then you think.\n",n);
        if(h=1)
        {
            printf("\n   Go to the doctor first, to solve your physical problem\n");
            h=0;
        }
        printf("\n   We do not need magic to change the world, we carry all the power\n   we need inside ourselves already: we have the power to imagine better\n");
        printf("\n   Don't ever let somebody tell you ... you can't do something. Not\n   You got a dream. You gotta protect it. People   can't do something\n   themselves, they want to tell you can't do it.If you want something,\n   go get it.\n\n\n");
    }
}

}


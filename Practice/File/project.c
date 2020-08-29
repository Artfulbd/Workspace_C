#include<stdio.h>
#include<conio.h>
void now();
void book();
void price();
void up();
void about();
void exitt();
void m1();
void m2();
void m3();
void m4();
void m5();
int c,f=0;
int *p=&c;
void main()
{
    printf("\n\n        .....Welcome.....\n");
    printf("\n        1. Now showing\n");
    printf("        2. Book tickets\n");
    printf("        3. Ticket price\n");
    printf("        4. Upcoming movies\n");
    printf("        5. About\n");
    printf("        6. Exit\n");
    printf("\n   Please enter your choice: ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    {
        system("cls");
        now();
        break;
    }
    case 2:
    {
        system("cls");
        f=1;
        now();
        book();
        break;
    }
    case 3:
    {
        system("cls");
        price();
        break;
    }
    case 4:
    {
        system("cls");
        up();
        break;
    }
    case 5:
    {
        system("cls");
        about();
        break;
    }
    case 6:
    {
        system("cls");
        exitt();
        break;
    }

    default:
    {
        printf("\n  You entered wrong keyword!! ");
    }
    }

}
void now()
{
    printf("\n\tmovie 1\n");
    printf("\tmovie 2\n");
    printf("\tmovie 3\n");
    printf("\tmovie 4\n");
    printf("\tmovie 5\n");
    printf("\n\n   Please enter your choice: ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    {
        system("cls");
        m1();
        break;
    }
    case 2:
    {
        system("cls");
        m2();
        break;
    }
    case 3:
    {
        system("cls");
        m3();
        break;
    }
    case 4:
    {
        system("cls");
        m4();
        break;
    }
    case 5:
    {
        system("cls");
        m5();
        break;
    }
    default:
    {
        printf("\n  You entered wrong keyword!! ");
    }


    }

}
void m1()
{
    if(f==0)
    {
        printf("\n    Spiderman \n");
        printf("\n    Cast:    ");
        printf("\n    Drctr ");
        printf("\n    Prdcr ");
        printf("\n    Link ");
        printf("\n    IMDB: ");
        printf("\n    Runtime ");
        printf("\n    Story: ");
        printf("\n    Critic choice: ");
        f=0;
    }
  jump:
    printf("\n    price: \n1.VIP\n2.bal\n2.chal\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {
jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*700);
jump02:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump02;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump01;
        }
    }
    else if(c==2&&c>0)
    {
jump11:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*400);
jump12:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump12;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump11;
        }
    }
    else if(c==3&&c>0)
    {
jump21:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*300);
jump22:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump22;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump21;
        }
    }
    else
    {
        system("cls");
        printf("\n You entered wrong\n");
        goto jump;
    }

}
void m2()
{
   if(f==0)
    {
        printf("\n    Spiderman \n");
        printf("\n    Cast:    ");
        printf("\n    Drctr ");
        printf("\n    Prdcr ");
        printf("\n    Link ");
        printf("\n    IMDB: ");
        printf("\n    Runtime ");
        printf("\n    Story: ");
        printf("\n    Critic choice: ");
        f=0;
    }
  jump:
    printf("\n    price: \n1.VIP\n2.bal\n2.chal\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {
jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*700);
jump02:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump02;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump01;
        }
    }
    else if(c==2&&c>0)
    {
jump11:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*400);
jump12:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump12;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump11;
        }
    }
    else if(c==3&&c>0)
    {
jump21:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*300);
jump22:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump22;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump21;
        }
    }
    else
    {
        system("cls");
        printf("\n You entered wrong\n");
        goto jump;
    }

}
void m3()
{
   if(f==0)
    {
        printf("\n    Spiderman \n");
        printf("\n    Cast:    ");
        printf("\n    Drctr ");
        printf("\n    Prdcr ");
        printf("\n    Link ");
        printf("\n    IMDB: ");
        printf("\n    Runtime ");
        printf("\n    Story: ");
        printf("\n    Critic choice: ");
        f=0;
    }
  jump:
    printf("\n    price: \n1.VIP\n2.bal\n2.chal\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {
jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*700);
jump02:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump02;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump01;
        }
    }
    else if(c==2&&c>0)
    {
jump11:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*400);
jump12:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump12;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump11;
        }
    }
    else if(c==3&&c>0)
    {
jump21:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*300);
jump22:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump22;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump21;
        }
    }
    else
    {
        system("cls");
        printf("\n You entered wrong\n");
        goto jump;
    }

}
void m4()
{
   if(f==0)
    {
        printf("\n    Spiderman \n");
        printf("\n    Cast:    ");
        printf("\n    Drctr ");
        printf("\n    Prdcr ");
        printf("\n    Link ");
        printf("\n    IMDB: ");
        printf("\n    Runtime ");
        printf("\n    Story: ");
        printf("\n    Critic choice: ");
        f=0;
    }
  jump:
    printf("\n    price: \n1.VIP\n2.bal\n2.chal\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {
jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*700);
jump02:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump02;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump01;
        }
    }
    else if(c==2&&c>0)
    {
jump11:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*400);
jump12:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump12;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump11;
        }
    }
    else if(c==3&&c>0)
    {
jump21:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*300);
jump22:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump22;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump21;
        }
    }
    else
    {
        system("cls");
        printf("\n You entered wrong\n");
        goto jump;
    }

}
void m5()
{
 if(f==0)
    {
        printf("\n    Spiderman \n");
        printf("\n    Cast:    ");
        printf("\n    Drctr ");
        printf("\n    Prdcr ");
        printf("\n    Link ");
        printf("\n    IMDB: ");
        printf("\n    Runtime ");
        printf("\n    Story: ");
        printf("\n    Critic choice: ");
        f=0;
    }
  jump:
    printf("\n    price: \n1.VIP\n2.bal\n2.chal\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {
jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*700);
jump02:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump02;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump01;
        }
    }
    else if(c==2&&c>0)
    {
jump11:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*400);
jump12:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump12;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump11;
        }
    }
    else if(c==3&&c>0)
    {
jump21:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket, cost %d",c,c*300);
jump22:
            printf("\nExit or go to main menu? (for exit press 1,for main menu press 2");
            scanf("%d",p);
            if(c==1)
            {
                system("cls");
                exitt();
            }
            else if(c==2)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\n You entered wrong\n");
                goto jump22;
            }
        }
        else
        {
            printf("\nSorry!!Limit crossed. Enter your choice again.");
            goto jump21;
        }
    }
    else
    {
        system("cls");
        printf("\n You entered wrong\n");
        goto jump;
    }

}

void book()
{
    printf("\n\tDone 2\n");
}
void price()
{
    printf("\n\tDone 3\n");
}
void up()
{
    printf("\n\tDone 4\n");
}
void about()
{
    printf("\n\tDone 5\n");
}
void exitt()
{
    printf("\n\n\t Thanks.\n");
}


#include<stdio.h>
#include<conio.h>
void now();
void price();
void up();
void about();
void exitt();
void m1();
void m2();
void m3();
void m4();
void m5();
int c,f=0,h;
int *p=&c;
char z[10],*t[]= {"Morning Show","Noon show","Afternoon show","Evening Show"};
void main()
{
jump:
    printf("\n\n        '...............................................................................");
    printf("\n\n        '...............................................................................");
    printf("\n\n        '...........................WELCOME TO MOVIEPLEX.................................");
    printf("\n\n        '...............................................................................");
    printf("\n\n        '...............................................................................");
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
        system("cls");
        printf("\n  You entered wrong keyword!! ");
        goto jump;
    }
    }

}
void now()
{
    printf("\n\tSpider-Man: Homecoming    : 1\n");
    printf("\tDunkirk                   : 2\n");
    printf("\tAnnabelle: Creation       : 3\n");
    printf("\tThe Mummy                 : 4\n");
    printf("\tVoyangkor Sundor          : 5\n");
jump:
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
        system("cls");
        printf("\n  You entered wrong keyword!! ");
        goto jump;
    }


    }

}
void m1()
{
    if(f==0)
    {
        printf("\n    Spider-Man: Homecoming \n\n");
        printf("\n    Cast: Tom Holland\n\tMichael Keaton\n\tJon Favreau\n\tZendaya\n\tDonald Glover\n\tTyne Daly\n\tMarisa Tomei\n\tRobert Downey Jr.    \n");
        printf("\n    Director: Jon Watts.  \n");
        printf("\n    Trailer Link:https://www.youtube.com/watch?v=39udgGPyYMg. \n");
        printf("\n    IMDB rating: 7.9/10. \n");
        printf("\n    Runtime:2h 13min. \n");
        printf("\n    Story: Thrilled by his experience with the Avengers, young Peter Parker returns home to live with his Aunt May. Under the watchful eye of mentor Tony Stark, Parker starts to embrace his newfound identity as Spider-Man. He also tries to return to his normal daily routine -- distracted by thoughts of proving himself to be more than just a friendly neighborhood superhero. Peter must soon put his powers to the test when the evil Vulture emerges to threaten everything that he holds dear. \n");
        printf("\n    Critic choice: 92%% Good.\n");
        printf("\n    Budget:175 million USD ");
        f=0;
    }
jump:
    printf("\n Time slot:\n");
    printf("\n 1:  10.30 am-12.30 pm : Morning Show");
    printf("\n 2:  01.00 pm-02.30 pm : Noon show");
    printf("\n 3:  03.00 am-05.30 pm : Afternoon show");
    printf("\n 4:  06.00 am-08.30 pm : Evening Show\n");


    printf("\n\nEnter show time:           (enter 1 or 2, or 3 as you wish)\n");
    scanf("%d",&h);
    h=h-1;
    printf("\n    price: \n\t   1.VIP=700tk.\n\t   2.Premium=400tk.\n\t   3.Normal=300tk.\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {

jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*700);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*400);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*300);
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
        printf("\n    Dunkirk \n");
        printf("\n    Cast: Fionn Whitehead\n\tTom Glynn-Carney\n\tJack Lowden\n\tHarry Styles\n\tAneurin Barnard\n\tTom Hardy. \n");
        printf("\n    Director: Christopher Nolan \n");
        printf("\n    Link: https://www.youtube.com/watch?v=F-eMt3SrfFU. \n");
        printf("\n    IMDB: 8.4/10. \n");
        printf("\n    Runtime: 106 minutes. \n");
        printf("\n    Story:In May 1940, Germany advanced into France, trapping Allied troops on the beaches of Dunkirk. Under air and ground cover from British and French forces, troops were slowly and methodically evacuated from the beach using every serviceable naval and civilian vessel that could be found. At the end of this heroic mission, 330,000 French, British, Belgian and Dutch soldiers were safely evacuated. \n ");
        printf("\n    Critic choice: 93%% Good. \n");
        printf("\n    Budget: 100 million USD. \n");
        f=0;
    }
jump:
    printf("\n Time slot:\n");
    printf("\n 1:  10.30 am-12.30 pm : Morning Show");
    printf("\n 2:  01.00 pm-02.30 pm : Noon show");
    printf("\n 3:  03.00 am-05.30 pm : Afternoon show");
    printf("\n 4:  06.00 am-08.30 pm : Evening Show\n");


    printf("\n\nEnter show time:           (enter 1 or 2, or 3 as you wish)\n");
    scanf("%d",&h);
    h=h-1;
    printf("\n    price: \n\t   1.VIP=700tk.\n\t   2.Premium=400tk.\n\t   3.Normal=300tk.\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {

jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*700);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*400);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*300);
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
        printf("\n    Annabelle: Creation \n");
        printf("\n    Cast: Stephanie Sigman\n\tTalitha Bateman\n\tAnthony LaPaglia\n\tMiranda Otto\n    ");
        printf("\n    Director: David F. Sandberg. \n");
        printf("\n    Link: https://www.youtube.com/watch?v=KisPhy7T__Q. \n");
        printf("\n    IMDB: 7/10. \n");
        printf("\n    Runtime: 109 minutes \n");
        printf("\n    Story: Former toy maker Sam Mullins and his wife, Esther, are happy to welcome a nun and six orphaned girls into their California farmhouse. Years earlier, the couple's 7-year-old daughter Annabelle died in a tragic car accident. Terror soon strikes when one child sneaks into a forbidden room and finds a seemingly innocent doll that appears to have a life of its own. \n");
        printf("\n    Critic choice: 67%% Good. \n");
        printf("\n    Budget:	$15 million. \n");
        f=0;
    }
jump:
    printf("\n Time slot:\n");
    printf("\n 1:  10.30 am-12.30 pm : Morning Show");
    printf("\n 2:  01.00 pm-02.30 pm : Noon show");
    printf("\n 3:  03.00 am-05.30 pm : Afternoon show");
    printf("\n 4:  06.00 am-08.30 pm : Evening Show\n");


    printf("\n\nEnter show time:           (enter 1 or 2, or 3 as you wish)\n");
    scanf("%d",&h);
    h=h-1;
    printf("\n    price: \n\t   1.VIP=700tk.\n\t   2.Premium=400tk.\n\t   3.Normal=300tk.\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {

jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*700);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*400);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*300);
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
        printf("\n    The Mummy \n");
        printf("\n    Cast: Tom Cruise\n\tAnnabelle Wallis\n\tSofia Boutella\n\tJake Johnson\n\tCourtney B. Vance\n\tRussell Crowe   \n");
        printf("\n    Director: Alex Kurtzman. \n");
        printf("\n    Trailer Link: https://www.youtube.com/watch?v=IjHgzkQM2Sg. \n");
        printf("\n    IMDB: 5.6/10. \n");
        printf("\n    Runtime: 110 minutes. \n");
        printf("\n    Story:Nick Morton is a soldier of fortune who plunders ancient sites for timeless artifacts and sells them to the highest bidder. When Nick and his partner come under attack in the Middle East, the ensuing battle accidentally unearths Ahmanet, a betrayed Egyptian princess who was entombed under the desert for thousands of years. With her powers constantly evolving, Morton must now stop the resurrected monster as she embarks on a furious rampage through the streets of London. \n");
        printf("\n    Critic choice: 16%% Good. \n");
        printf("\n    Budget:	$125–195 million. \n");
        f=0;
    }
jump:
    printf("\n Time slot:\n");
    printf("\n 1:  10.30 am-12.30 pm : Morning Show");
    printf("\n 2:  01.00 pm-02.30 pm : Noon show");
    printf("\n 3:  03.00 am-05.30 pm : Afternoon show");
    printf("\n 4:  06.00 am-08.30 pm : Evening Show\n");


    printf("\n\nEnter show time:           (enter 1 or 2, or 3 as you wish)\n");
    scanf("%d",&h);
    h=h-1;
    printf("\n    price: \n\t   1.VIP=700tk.\n\t   2.Premium=400tk.\n\t   3.Normal=300tk.\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {

jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*700);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*400);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*300);
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
        printf("\n  Voyangkor Sundor  \n");
        printf("\n    Cast:  Ashna Habib Bhabna\n\tParambrata Chatterjee\n\tFaruk Ahmed .   \n");
        printf("\n    Director:  Animesh Aich. \n");
        printf("\n    Link: https://www.youtube.com/watch?v=YsL2v0I6vbU. \n");
        printf("\n    IMDB: 5.0/10. \n");
        printf("\n    Runtime: 114 Min. \n");
        printf("\n    Story: its a Horror Movie. \n");
        printf("\n    Critic choice: 22%% Good. \n");
        printf("\n    Budget: 4cr. \n");
        f=0;
    }
jump:
    printf("\n Time slot:\n");
    printf("\n 1:  10.30 am-12.30 pm : Morning Show");
    printf("\n 2:  01.00 pm-02.30 pm : Noon show");
    printf("\n 3:  03.00 am-05.30 pm : Afternoon show");
    printf("\n 4:  06.00 am-08.30 pm : Evening Show\n");


    printf("\n\nEnter show time:           (enter 1 or 2, or 3 as you wish)\n");
    scanf("%d",&h);
    h=h-1;
    printf("\n    price: \n\t   1.VIP=700tk.\n\t   2.Premium=400tk.\n\t   3.Normal=300tk.\n");
    printf("Which kind of ticket do you want to buy: ");
    scanf("%d",p);
    if(c==1&&c>0)
    {

jump01:
        printf("\nHow many tickets do you want to buy?   (not more then 5)\n");
        scanf("%d",p);
        if(c<6&&c>0)
        {
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*700);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*400);
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
            printf("\nYou successfully buy %d ticket at %s , cost %d tk",c,t[h],c*300);
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

void price()
{
    printf("\n\tV.I.P:\n\tPer ticket price 700only.\n");
    printf("\n\tPremium :\n\tPer ticket price 400only.\n");
    printf("\n\tNormal :\n\tPer ticket price 300only.\n");
    fflush(stdin);
    gets(z);
    system("cls");
    main();
}
void up()
{
    printf("\n\tMovie Name: Justice League\n");
    printf("\n\tRelease date: November 17, 2017 (USA)\n");
    printf("\n\tFilm series: Justice League Film Series \n\n\n");
    printf("\n\tFilm Name:Thor: Ragnarok \n");
    printf("\n\tRelease date: November 3, 2017 (USA)\n");
    printf("\n\tFilm series: Thor Film Series \n");
    fflush(stdin);
    gets(z);
    system("cls");
    main();
}
void about()
{
    printf("\n\tAbout Star Movieplex:\n\tThe most update Multiplex Cinema Theatre in Bangladesh\n\tMOVIEPLEX : Show Motion Limited, incorporated in 19th July 2017, pioneered the modern Multiplex Movie Theater industry with Movieplex brand in Bangladesh.\n\tThe Most update Multiplex Cinema Theatre in Bangladesh MOVIEPLEX : Show Motion Limited, incorporated in 19th July 2017, pioneered the modern Multiplex Movie Theater industry with Movieplex brand in Bangladesh. With lucid vision for the entertainment development in the country, the local and foreign promoters of Show Motion Ltd. started the first international quality state-of-the-art multiplex cinema theatre on 8th August 2017 in Bangladesh at Bashundhara City Mall at Panthapath, Dhaka.\n\tMovieplex now has Five fully digital cinema screens with state-of-the-art 3D Projection Technology, Silver Screens, Dolby-Digital Sound and stadium seating. With a total capacity of 1,600 seats the theater has large lobby with full concession stands serving pop-corns, soft drinks, ice-creams and many other items. In addition to scheduled shows, Movieplex also caters to special corporate bookings, red-carpet premieres and private events. Visit www.movieplexbd.com for updated movie schedules and online ticket purchase.\n\tOur Goal\n\tOur goal is to provide the most modern, comfortable, cinema viewing experience of Hollywood and quality Dhallywood releases for a locally adjusted price for our youth and family centered audiences in Dhaka . We aim to be the highest-value entertainment provider in Bangladesh with integrity & professionalism in every step.\n");
    fflush(stdin);
    gets(z);
    system("cls");
    main();
}
void exitt()
{
    printf("\n\n\t Thanks Sir for Visiting our movieplex.\n");
}


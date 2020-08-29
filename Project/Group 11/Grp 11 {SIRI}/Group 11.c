#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
char *command1(char name []);
void option1();
void utility();
void note1();
void etc();
void country();
void funny();
void exitt();
void start();
void even();
void prime();
void calculator();
void bmi();
void bmi2(float);
void contact();
void addnote();
void findnote();
void modnote();
void dltnote();
void chngpass();
void alarm();
void rest();
void address();
void vara();
void traffic();
void shop();
void mood();
void srk();
int lcm(int a, int b);
int factorial(int n);
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
    return 0;
}


char e[10];

int main()
{
    printf("\n\n               ... Pleasing welcome ...\n\n");
    option1();
    start();
    return 0;
}
void option1()
{
    printf("    1. Utility      (You can measure prime number, day of dates and also have some utility options.) \n");
    printf("    2. Notes        (Here you can write anything and save it.)\n");
    printf("    3. Our Country  (About our Bangladesh.)\n");
    printf("    4. Searching    (I can tell you about rickshaw rent, traffic update, find address and so more.)\n");
    printf("    5. Funny        (I Have something funny for you)\n\n");
    puts("  ..In this program you can use small letter or capital letter or mixed, anything you want..\n\t\t\t\t(or you can use only first character of your command)");
    printf("\n    6. Close the program..?\n");
}

char *command1(char name [30])
{
    int i;
    for(i=0; name[i]!='\0'; i++)
    {
        if(name[i]<91 && name[i]>64)
        {
            name[i]=name[i]+32;
        }
    }
    return name;
}
void utility()
{
    char name[30];
    printf("\n\n");
    printf("    1. Contact\n");
    printf("    2. Measure BMI\n");
    printf("    3. Check even or odd\n");
    printf("    4. Calculator.\n");
    printf("    5. Finding prime number\n");
    printf("    6. Get L.C.M. of two number\n");
    printf("    7. Alarm\n\n");
    printf("    8. Return main menu ?\n\n");
    puts("  Enter what do you want??\n");
    printf("   : ");
    fflush(stdin);
    gets(name);
    command1(name);
    char m1[]="contact",m2[]="c",m3[]="my",m4[]="my contact",m5[]="1";
    char n1[]="measure",n2[]="bmi",n3[]="b",n4[]="m",n5[]="2";
    char c1[]="check",c2[]="even",c3[]="odd",c4[]="c",c5[]="o",c6[]="3";
    char s1[]="calculate", s2[]="count",s3[]="c",s4[]="cou",s5[]="4";
    char f1[]="find",f2[]="prime",f3[]="f",f4[]="p",f5[]="5";
    char l1[]="lcm",l2[]="l.c.m.",l3[]="fl.c.m",l4[]="l",l5[]="6";
    char e1[]="return",e2[]="main",e3[]="r",e4[]="m",e5[]="8",e6[]="y";
    if(strcmp(name,m1)==0 || strcmp(name,m2)==0||strcmp(name,m3)==0||strncmp(name,"contact",3)==0||strcmp(name,m4)==0||strcmp(name,m5)==0)
    {
        system("cls");
        contact();
    }
    else if(strcmp(name,"7")==0||strncmp(name,"alarm",3)==0||strcmp(name,"a")==0)
    {
        system("cls");
        alarm();
    }
    else if(strcmp(name,n1)==0||strcmp(name,n2)==0||strcmp(name,n3)==0||strcmp(name,n4)==0||strncmp(name,"measure",3)==0||strcmp(name,n5)==0)
    {
        system("cls");
        bmi();
    }
    else if(strcmp(name,c1)==0||strcmp(name,c2)==0||strcmp(name,c3)==0||strcmp(name,c4)==0||strcmp(name,c5)==0||strcmp(name,c6)==0||strncmp(name,"check",3)==0||strncmp(name,"even",3)==0)
    {
        system("cls");
        even();
    }
    else if(strcmp(name,s1)==0||strcmp(name,s2)==0||strcmp(name,s3)==0||strcmp(name,s4)==0||strcmp(name,s5)==0||strncmp(name,"calculate",3)==0)
    {
        system("cls");
        calculator();
    }
    else if(strcmp(name,f1)==0||strcmp(name,f2)==0||strcmp(name,f3)==0||strcmp(name,f4)==0||strcmp(name,f5)==0||strncmp(name,"find",3)==0||strncmp(name,"prime",3)==0)
    {
        system("cls");
        prime();
    }
    else if(strcmp(name,l1)==0||strcmp(name,l2)==0||strcmp(name,l3)==0||strcmp(name,l4)==0||strcmp(name,l5)==0||strcmp(name,"get")==0||strcmp(name,"g")==0)
    {
        system("cls");
        int n1, n2,r;
        char m1[]="menu",m2[]="utility",m3[]="u",m4[]="m";
jump1:
        printf("\n\n   To find L.C.M.\n\n");
        printf("   Tell me the first number : ");
        scanf("%d",&n1);
        printf("\n   What is the second number?  : ");
        scanf("%d",&n2);
        if(n1 > n2)
        {

            r= lcm(n2, n1);
        }
        else
        {
            r=lcm(n1, n2);
        }
        printf("\n\n  LCM of %d and %d is %d", n1, n2, r);
        printf("\n\n\n   Do you want to find another L.C.M. or go to utility menu?\n");
jump0:
        printf("   : ");
        fflush(stdin);
        gets(e);
        command1(e);
        if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"f")==0||strcmp(e,"l")==0||strcmp(e,"lcm")==0||strncmp(e,"find",3)==0||strncmp(e,"l.c.m",3)==0)
        {
            system("cls");
            printf("\n\n  LCM of %d and %d is %d.\n", n1, n2, r);
            goto jump1;
        }
        else if(strcmp(e,m1)==0||strncmp(e,m2,3)==0||strcmp(e,m3)==0||strcmp(e,m4)==0||strcmp(e,"no")==0||strcmp(e,"n")==0)
        {
            system("cls");
            utility();
        }
        else
        {
            system("cls");
            puts("\n   Wrong command");
            puts("\n   Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
            puts("Enter your command ..");
            goto jump0;
        }

    }
    else if(strcmp(name,e1)==0||strcmp(name,e2)==0||strcmp(name,e3)==0||strcmp(name,e4)==0||strcmp(name,e5)==0||strncmp(name,"return",3)==0||strcmp(name,"main menu")==0||strncmp(name,"yes",3)==0||strcmp(name,e6)==0)
    {
        system("cls");
        printf("\n\n");
        puts("\n       ...Welcome again...\n");
        option1();
        start();
    }
    else
    {
        system("cls");
        printf("\n   Sorry sir! I can't understand what do you want, will you please write your command again ..\n\n");
        printf("  2     Suppose for access your contact, write \"contact\" or \"1\" or key character..\n\n");
        utility();

    }

}
void etc()
{
    char name[30];
    printf("\n\n");
    printf("    1. Restaurant                           {Hungry?? I have something for you.}\n");
    printf("    2. Find an Address (in Bashundhora R\\A) {I can  find it for you.}\n");
    printf("    3. Rickshaw rent (in Bashundhora R\\A)   {I can tell you the exact rent.}\n");
    printf("    4. Traffic update.                      {I can tell you about your city's traffic.}\n");
    printf("    5. Online shopping.                     {Like Cosmetics?? I can find it for you.}\n");
    printf("\n Suppose for restaurant enter \"restaurant\" or Key character of its, for Rickshaw\n rent enter \"rickshaw\" ,or \"rent\" ,or first three character of your command.");
    printf("\n\n    6. Go back to main menu ?\n");
    puts("\n\n  Enter what do you want to do??");
    printf("   : ");
    fflush(stdin);
    gets(name);
    command1(name);
    char m1[]="restaurant",m2[]="r",m3[]="1";
    char n1[]="address",n2[]="find",n3[]="f",n4[]="a",n5[]="2";
    char c1[]="rickshaw",c2[]="rent",c3[]="3";
    char s1[]="traffic", s2[]="update",s3[]="t",s4[]="u",s5[]="4";
    char f1[]="online",f2[]="shopping",f3[]="shop",f4[]="s",f5[]="o",f6[]="5";
    char e1[]="go",e2[]="back",e3[]="g",e4[]="b",e5[]="6",e6[]="y";
    if(strcmp(name,m1)==0 || strcmp(name,m2)==0||strcmp(name,m3)==0||strncmp(name,"restaurant",3)==0)
    {
        system("cls");
        rest();
    }
    else if(strcmp(name,n1)==0||strcmp(name,n2)==0||strcmp(name,n3)==0||strcmp(name,n4)==0||strncmp(name,"address",3)==0||strncmp(name,"find",3)==0||strcmp(name,n5)==0)
    {
        system("cls");
        address();
    }
    else if(strcmp(name,c1)==0||strcmp(name,c2)==0||strcmp(name,c3)==0||strncmp(name,"rickshaw",3)==0||strncmp(name,"rent",3)==0)
    {
        system("cls");
        vara();
    }
    else if(strcmp(name,s1)==0||strcmp(name,s2)==0||strcmp(name,s3)==0||strcmp(name,s4)==0||strcmp(name,s5)==0||strncmp(name,"traffic",3)==0||strncmp(name,"update",3)==0)

    {
        system("cls");
        traffic();
    }
    else if(strcmp(name,f1)==0||strcmp(name,f2)==0||strcmp(name,f3)==0||strcmp(name,f4)==0||strcmp(name,f5)==0||strcmp(name,f6)==0||strncmp(name,"online",3)==0||strncmp(name,"shopping",3)==0)
    {
        system("cls");
        shop();
    }
    else if(strcmp(name,e1)==0||strcmp(name,e2)==0||strcmp(name,e3)==0||strcmp(name,e4)==0||strcmp(name,e5)==0||strncmp(name,"back",3)==0||strcmp(name,"main menu")==0||strcmp(name,"yes")==0||strcmp(name,e6)==0)
    {
        system("cls");
        printf("\n\n");
        puts("\n       ...Welcome again...\n");
        option1();
        start();
    }
    else
    {
        system("cls");
        printf("\n   Sorry sir! I can't understand what do you want, will you please write your command again ..\n\n");
        printf(" Suppose for access your contact, write \"contact\" or \"1\" or key characte..\n\n");
        etc();
    }
}

void exitt()
{
    system("cls");
    printf("\n\n\n\n\n");
    printf("\t  ***** *  *     *    *   *  *  *  *****     *****  *****  **** \n");
    printf("\t    *   *  *    * *   **  *  * *   *         *      *   *  *   *\n");
    printf("\t    *   ****   ****   * * *  **    *****     ****   *   *  **** \n");
    printf("\t    *   *  *  *    *  *  **  * *       *     *      *   *  *   *\n");
    printf("\t    *   *  * *      * *   *  *  *  *****     *      *****  *   *\n");
    printf("\n");
    printf("\t                *   *  *****  ***  *   *  *****                \n");
    printf("\t                *   *  *       *   **  *  *                    \n");
    printf("\t                *   *  *****   *   * * *  * ***                \n");
    printf("\t                *   *      *   *   *  **  *   *                \n");
    printf("\t                 ***   *****  ***  *   *  *****            \n\n\n");

}
void start()
{
    char name[30];
    puts("\n    Enter your command.");
    printf("   : ");
    fflush(stdin);
    gets(name);
    command1(name);
    char m1[]="utility",m2[]="u",m3[]="1";
    char n1[]="note",n2[]="notes",n3[]="n",n4[]="2";
    char c1[]="Our country",c2[]="Country",c3[]="o",c4[]="c",c5[]="3";
    char s1[]="quarry", s2[]="search",s3[]="s",s4[]="q",s5[]="Search anything",s6[]="4";
    char f1[]="funny",f2[]="funny things",f3[]="f",f4[]="5";
    char e1[]="close",e2[]="exit",e3[]="e",e4[]="c",e5[]="6",e6[]="y";
    if(strcmp(name,m1)==0 || strcmp(name,m2)==0||strcmp(name,m3)==0||strncmp(name,"utility",3)==0)
    {
        system("cls");
        utility();
    }
    else if(strcmp(name,n1)==0||strcmp(name,n2)==0||strcmp(name,n3)==0||strcmp(name,n4)==0||strncmp(name,"note",3)==0)
    {
        system("cls");
        note1();
    }
    else if(strcmp(name,c1)==0||strcmp(name,c2)==0||strcmp(name,c3)==0||strcmp(name,c4)==0||strcmp(name,c5)==0||strncmp(name,"our",3)==0||strncmp(name,"country",3)==0)
    {
        system("cls");
        country();
    }
    else if(strcmp(name,s1)==0||strcmp(name,s2)==0||strcmp(name,s3)==0||strcmp(name,s4)==0||strcmp(name,s5)==0||strcmp(name,s6)==0||strncmp(name,"quarry",3)==0||strncmp(name,"search",3)==0)
    {
        system("cls");
        etc();
    }
    else if(strcmp(name,f1)==0||strcmp(name,f2)==0||strcmp(name,f3)==0||strcmp(name,f4)==0||strncmp(name,"funny",3)==0||strncmp(name,"things",3)==0)
    {
        system("cls");
        funny();
    }
    else if(strcmp(name,e1)==0||strcmp(name,e2)==0||strcmp(name,e3)==0||strcmp(name,e4)==0||strcmp(name,e5)==0||strncmp(name,"exit",3)==0||strncmp(name,"exit",2)==0||strncmp(name,"close",3)==0||strcmp(name,e6)==0)
    {
jump:
        printf("\n\n   Are you sure for closing the program..?");
        puts("   (Yes or no)");
        char x[5], y1[]="yes",y2[]="Yes",y3[]="y",y4[]="Y",n1[]="No",n2[]="N",n3[]="no",n4[]="n";
        fflush(stdin);
        printf("   :  ");
        gets(x);
        command1(x);
        if(strcmp(x,y1)==0||strcmp(x,y2)==0||strcmp(x,y3)==0||strcmp(x,y4)==0)
        {
            exitt();
        }
        else if(strcmp(x,n1)==0||strcmp(x,n2)==0||strcmp(x,n3)==0||strcmp(x,n4)==0)
        {
            system("cls");
            puts("\n   Thanks for your countermarch..");
            puts("\n        ...Welcome again...\n");
            option1();
            start();

        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\t     Sorry!!\n");
            goto jump;
        }
    }
    else
    {
        system("cls");
        printf("\n   Sorry sir! I can't understand what do you want, will you please write your command again ..\n\n");
        printf(" Suppose for search or quarry about anything, write \"quarry\" or \"search\" or");
        printf("\"search anything\" or \"4\" or \"qua\" or \"qu\"\n or key character.\n\n");
        option1();
        start();
    }

}
void note1()
{
    char name[20];
    printf("\n\n    1. Add a note.\n");
    printf("    2. Check a note.\n");;
    printf("    3. Modify a note.\n");
    printf("    4. Erase a note.\n");
    printf("    5. Change password.\n");
    printf("    6. Return to main menu.\n");
    printf("\n what do you want ?? ...  ");
    printf("   : ");
    fflush(stdin);
    gets(name);
    command1(name);
    char e1[]="return",e2[]="back",e3[]="r",e5[]="6",e6[]="y";
    if(strcmp("add",name)==0||strcmp(name,"1")==0)
    {
        system("cls");
        addnote();
    }
    else if(strcmp("check",name)==0||strncmp("check",name,3)==0||strcmp(name,"2")==0)
    {
        system("cls");
        findnote();
    }
    else if(strncmp("modify",name,3)==0||strncmp("m",name,3)==0||strcmp(name,"3")==0)
    {
        system("cls");
        modnote();
    }
    else if(strcmp("erase",name)==0||strcmp("e",name)==0||strcmp(name,"4")==0)
    {
        system("cls");
        dltnote();
    }
    else if(strncmp("change",name,3)==0||strncmp("password",name,3)==0||strcmp("5",name)==0||strcmp("p",name)==0)
    {

        system("cls");
        chngpass();
    }
    else if(strncmp(name,e1,3)==0||strcmp(name,e2)==0||strcmp(name,e3)==0||strcmp(name,e5)==0||strcmp(name,"main")==0||strcmp(name,"menu")==0||strcmp(name,"yes")==0||strcmp(name,e6)==0)
    {
        system("cls");
        printf("\n\n");
        puts("\n       ...Welcome again...\n");
        option1();
        start();
    }
    else
    {
        system("cls");
        printf("\n\n\tSorry.. I could not understand your command.\n");
        printf("    Suppose for Check a contact, write \"check\" or \"che\" or \"4\" and so on. ");
        printf("\n   Will you please enter your command again?? ..");
        note1();
    }

}
void addnote()
{
    char name[25],pass[21],note[20000];
    char n1[]="menu",n2[]="note",n3[]="n",n4[]="m";
    printf("\n\t Enter name for your notepad :            (20 character most)\n");
    printf("   : ");
    gets(name);
    strcat(name,".txt");
    FILE *fp;
    if((fp=fopen(name,"w"))!=NULL)
    {
        puts("\n    Enter a password for your file and preserve it:            (20 character most) ");
        printf("   : ");
        fflush(stdin);
        gets(pass);
        printf("\n\n  Enter your note:         (2000 character most)\n");
        printf("   : ");
        fflush(stdin);
        gets(note);
        fprintf(fp,"%s\n",pass);
        fprintf(fp,"%s",note);
        fclose(fp);
        printf("\n  Note saved.");
        printf("\n\n\n   Do you want to add another or go to note menu?\n");
jump0:
        printf("   : ");
        fflush(stdin);
        gets(e);
        command1(e);
        if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"t")==0||strncmp(e,"try again",3)==0)
        {
            system("cls");
            addnote();
        }
        else if(strcmp(e,n1)==0||strncmp(e,n2,3)==0||strcmp(e,n3)==0||strcmp(e,n4)==0||strcmp(e,"no")==0||strcmp(e,"n")==0)
        {
            system("cls");
            note1();
        }
        else
        {
            system("cls");
            puts("\n   Wrong command");
            puts("\n   Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
            puts("\t  Enter your command ..");
            goto jump0;
        }
    }
    else
    {
        printf("\n\n An Error .. Unable to create note. ");
    }
}
void findnote()
{
    char name[25],name2[25],pass[21],check[21],note[20000];
    char n1[]="menu",n2[]="notes",n3[]="n",n4[]="m";
    printf("\n\n    Enter note name to find your note :\n");
    printf("\t: ");
    gets(name);
    strcpy(name2,name);
    strcat(name,".txt");

    FILE *fp;
    if((fp=fopen(name,"r"))==NULL)
    {
        printf("\n\t There is no file called \"%s\" ..!!!",name2);
    }
    else
    {
        system("cls");
        printf("\n  File matched ..\n");
        fscanf(fp,"%s\n",pass);
        int f=0;
        do
        {
            if(f==0)
            {
                printf("\n  Enter password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            else
            {
                system("cls");
                puts("\n\n  Wrong keyword.");
                printf("\n  Renter your password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            printf("\t: ");
            fflush(stdin);
            gets(check);
            f++;

        }
        while(strcmp(pass,check)!=0&&f<3);

        if(strcmp(pass,check)==0)
        {
            system("cls");
            puts("\n  Password matched ");
            fscanf(fp,"%[^\n]s",note);
            printf("\n\n  Note name:  %s",name2);
            printf("\n Note: %s\n\n",note);
        }
        else
        {
            fclose(fp);
            system("cls");
            printf("\n\n                   ************************");
            puts("\n                   * PASSWORD NOT MATCHED *");
            printf("                   ************************");
            note1();
        }
        fclose(fp);

    }
    printf("\n\n\n   Do you want to read another or go to note menu?\n");
jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"t")==0||strncmp(e,"try again",3)==0)
    {
        system("cls");
        findnote();
    }
    else if(strcmp(e,n1)==0||strcmp(e,n2)==0||strcmp(e,n3)==0||strcmp(e,n4)==0||strncmp(e,"note",3)==0||strcmp(e,"n")==0)
    {
        system("cls");
        note1();
    }
    else
    {
        system("cls");
        puts("\n   Wrong command");
        puts("\n   Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\t  Enter your command ..");
        goto jump0;
    }
}
void modnote()
{
    char name[25],name2[25],pass[21],check[21],note[20000],note2[7000];
    char n1[]="menu",n2[]="notes",n3[]="n",n4[]="m";
    printf("\n\n    Enter note name to modify your note :\n");
    printf("\t: ");
    gets(name);
    strcpy(name2,name);
    strcat(name,".txt");

    FILE *fp, *fp1;
    if((fp=fopen(name,"r"))==NULL)
    {
        printf("There is no file called \"%s\" ..!!!",name2);
    }
    else
    {
        system("cls");
        printf("\n File matched ..\n");
        fscanf(fp,"%s\n",pass);
        int f=0;
        do
        {
            if(f==0)
            {
                printf("\n  Enter password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            else
            {
                system("cls");
                puts("\n\n  Wrong keyword.");
                printf("\n  Renter your password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            printf("\t: ");
            fflush(stdin);
            gets(check);
            f++;
        }
        while(strcmp(pass,check)!=0&&f<3);

        if(strcmp(pass,check)==0)
        {
            fclose(fp);
            system("cls");
            fp1=fopen(name,"a+");
            puts("\n       Password matched. ");
            printf("\n Note name: %s",name2);
            printf("\n\n   Write down the note, you want to add with previous: ");
            fflush(stdin);
            gets(note2);
            fprintf(fp1," %s",note2);
            fclose(fp1);
            fp=fopen(name,"r");
            fscanf(fp,"%[^\n]s\n",note);
            fscanf(fp,"\n%[^\n]s",note);
            printf("\n  Note after writing new texts : %s \n\n",note);
            fclose(fp);

        }
        else
        {
            fclose(fp);
            system("cls");
            printf("\n\n                   ************************");
            puts("\n                   * PASSWORD NOT MATCHED *");
            printf("                   ************************");
            note1();
        }

    }
    printf("\n\n\n   Do you want to modify another note or go to note menu?\n");
jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strncmp(e,"modify",3)==0||strcmp(e,"m")==0||strcmp(e,"t")==0||strncmp(e,"another",3)==0)
    {
        system("cls");
        modnote();
    }
    else if(strcmp(e,n1)==0||strcmp(e,n2)==0||strcmp(e,n3)==0||strcmp(e,n4)==0||strncmp(e,"note",3)==0)
    {
        system("cls");
        note1();
    }
    else
    {
        system("cls");
        puts("\n   Wrong command");
        puts("\n   Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\t  Enter your command ..");
        goto jump0;
    }
}

void dltnote()
{
    int dlt;
    char name[25],name2[25],pass[21],check[21];
    char n1[]="menu",n2[]="notes",n3[]="n",n4[]="m";
    printf("\n\n    Enter name of note you want to delete :\n");
    printf("\t: ");
    gets(name);
    strcpy(name2,name);
    strcat(name,".txt");

    FILE *fp, *fp1;
    if((fp=fopen(name,"r"))==NULL)
    {
        printf("\n\tThere is no file called \"%s\" ..!!!",name2);
    }
    else
    {
        system("cls");
        printf("\n File matched ..\n");
        fscanf(fp,"%s\n",pass);
        int f=0;
        do
        {
            if(f==0)
            {
                printf("\n  Enter password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            else
            {
                system("cls");
                puts("\n\n  Wrong keyword.");
                printf("\n  Renter your password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            printf("\t: ");
            fflush(stdin);
            gets(check);
            f++;
        }
        while(strcmp(pass,check)!=0&&f<3);

        if(strcmp(pass,check)==0)
        {
            fclose(fp);
            system("cls");
            fp1=fopen(name,"a+");
            puts("\n       Password matched. ");
            fclose(fp1);

            dlt = remove(name);

            if(dlt == 0)
            {
                system("cls");
                printf("\n\n    ## File deleted successfully\n");
            }
            else
            {
                system("cls");
                printf("\n\n    ##  Error: unable to delete the file\n");
                note1();
            }

        }
        else
        {
            fclose(fp);
            system("cls");
            printf("\n\n                   ************************");
            puts("\n                   * PASSWORD NOT MATCHED *");
            printf("                   ************************");
            note1();

        }

    }
    printf("\n\n\n   Do you want to delete another note or go to note menu?\n");
jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strncmp(e,"delete",3)==0||strcmp(e,"d")==0||strcmp(e,"t")==0||strncmp(e,"another",3)==0)
    {
        system("cls");
        dltnote();
    }
    else if(strcmp(e,n1)==0||strcmp(e,n2)==0||strcmp(e,n3)==0||strcmp(e,n4)==0||strncmp(e,"note",3)==0)
    {
        system("cls");
        note1();
    }
    else
    {
        system("cls");
        puts("\n   Wrong command");
        puts("\n   Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\t   Enter your command ..");
        goto jump0;
    }
}

void chngpass()
{
    char name[25],name2[25],pass[21],check[21],note[20000],npass[21];
    char n1[]="menu",n2[]="notes",n3[]="n",n4[]="m";
    printf("\n\n    Enter note name to change password :\n");
    printf("\t: ");
    gets(name);
    strcpy(name2,name);
    strcat(name,".txt");

    FILE *fp,*fp2;
    if((fp=fopen(name,"r"))==NULL)
    {
        printf("There is no file called \"%s\" ..!!!",name2);
    }
    else
    {
        system("cls");
        printf("\n File matched ..\n");
        fscanf(fp,"%s\n",pass);
        int f=0;
        do
        {
            if(f==0)
            {
                printf("\n  Enter password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            else
            {
                system("cls");
                puts("\n\n  Wrong keyword.");
                printf("\n  Renter your password");
                printf(" (%d trial left, out of 3)\n",3-f);
            }
            printf("\t: ");
            fflush(stdin);
            gets(check);
            f++;

        }
        while(strcmp(pass,check)!=0&&f<3);

        if(strcmp(pass,check)==0)
        {
            system("cls");
            puts("\n  Password matched ");
            printf("\n  Enter new password for  \" %s \": ",name2);
            fflush(stdin);
            gets(npass);

            fp2=fopen("c.txt","w");

            fprintf(fp2,"%s\n",npass);
            fscanf(fp,"%[^\n]s",note);
            fprintf(fp2,"%s",note);


            fclose(fp);
            fclose(fp2);
            remove(name);
            rename("c.txt",name);
            printf("\n\n   Successfully changed. ");
        }
        else
        {
            fclose(fp);
            system("cls");
            printf("\n\n                   ************************");
            puts("\n                   * PASSWORD NOT MATCHED *");
            printf("                   ************************");
            note1();
        }

    }
    printf("\n\n\n   Do you want to change another note's password or go to note menu?\n");
jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strncmp(e,"password",3)==0||strcmp(e,"c")==0||strcmp(e,"p")==0||strncmp(e,"another",3)==0)
    {
        system("cls");
        chngpass();
    }
    else if(strcmp(e,n1)==0||strcmp(e,n2)==0||strcmp(e,n3)==0||strcmp(e,n4)==0||strncmp(e,"note",3)==0||strcmp(e,"n")==0)
    {
        system("cls");
        note1();
    }
    else
    {
        system("cls");
        puts("\n   Wrong command");
        puts("\n   Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\t   Enter your command ..");
        goto jump0;
    }

}

void country()
{
    printf("\n\n\t  BANGLADESH\n");
jump:
    printf("\n   1.The Bangali Language Movement");
    printf("\n   2.Politics: 1954-1970");
    printf("\n   3.Independence movement");
    printf("\n   4.Formal Declaration of Independence");
    printf("\n   5.Pakistani capitulation and aftermath");
    printf("\n\n    What do you want to know about?? ");
    printf("\n  6.Return to main menu:  \n\n");
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"the")==0||strncmp(e,"bangali",3)==0||strcmp(e,"b")==0||strcmp(e,"l")==0||strncmp(e,"language",3)==0||strcmp(e,"1")==0)
    {
        system("cls");
        printf("\n    The Bangali Language Movement");
        printf("\n\n The Bengali Language Movement, also known as the Language Movement Bhasha Andolon,\n  was a political effort in Bangladesh (then known as East Pakistan), advocating the recognition\n  of the Bengali language as an official language of Pakistan. Such recognition would allow Bengali\n  to be used in government affairs. Movement was led by Mufti Nadimul Quamar Ahmed. When the state\n  of Pakistan was formed in 1947, its two regions, East Pakistan (also called East Bengal) and West\n  Pakistan, were split along cultural, geographical, and linguistic lines. On 23 February 1948, the\n  Government of Pakistan ordained Urdu as the sole national language, sparking extensive protests among\n  the Bengali-speaking majority of East Pakistan. Facing rising sectarian tensions and mass discontent\n  with the new law, the government outlawed public meetings and rallies. The students of the University\n  of Dhaka and other political activists defied the law and organised a protest on 21 February 1952.\n  The movement reached its climax when police killed student demonstrators on that day. The deaths provoked\n  widespread civil unrest led by the Awami Muslim League, later renamed the Awami League. After years of conflict,\n  the central government relented and granted official status to the Bengali language in 1956. On 17 November 1999,\n  UNESCO declared 21 February International Mother Language Day for the whole world to celebrate, in tribute to the\n  Language Movement and the ethno-linguistic rights of people around the world.");
        printf("\n\n Enter anything to go to country menu: ");
        fflush(stdin);
        gets(e);
        system("cls");
        country();
    }
    else if (strncmp(e,"politics",3)==0||strcmp(e,"p")==0||strncmp(e,"1954",3)==0||strcmp(e,"19")==0||strcmp(e,"2")==0)
    {
        system("cls");
        printf("\n    Politics: 1954-1970");
        printf("\n\n Great differences began developing between the two wings of Pakistan. While the\n west had a minority share of Pakistan's total population, it had the largest share of\n revenue allocation, industrial development, agricultural reforms and civil\n development projects. Pakistan's military and civil services were dominated by the\n Punjabis. Only one regiment in the Pakistani Army was Bengali. Many Bengali\n Pakistanis did not share the natural enthusiasm for the Kashmir issue, which they\n felt was leaving East Pakistan more vulnerable and threatened as a result.\n\n In 1966, Sheikh Mujibur Rahman, the leader of the Awami League proclaimed a\n 6-point plan titled Our Charter of Survival at a national conference of opposition\n political parties at Lahore, in which he demanded self-government and considerable\n political, economic and defence autonomy for East Pakistan in a\n Pakistani federation with a weak central government. This led to the historic six \n point movement.\n\n In early 1968, the Agartala Conspiracy Case was filed against Sheikh Mujib and 34\n others, with the allegation that the accused were planning to liberate the East \n Pakistan. However, as the trial progressed, a mass uprising formed in protest against\n  this accusation and demanded the freeing of all the prisoners. On 15\n February 1969, one of the prisoners, Zahurul Haq, was shot dead at point blank\n range, which further enraged the public leading the government to decide to\n withdraw the case on 22 February. The mass uprising subsequently culminated in the\n  Uprising of 69.\n\nOn 25 March 1969, General Ayub Khan handed the state power to General Yahya\n Khan. Subsequently, all sorts of political activities in the country were postponed by\n  the new military President. Nevertheless, some students kept the movement\n  going clandestinely. A new group called \"15 February Bahini\" was\n formed under the leadership of Serajul Alam Khan and Kazi Aref Ahmed, who were\n members of the \"Swadhin Bangla Nucleus\".\n\nLater in 1969, Yahya Khan announced a fresh election date for 5 October 1970.\n Displeasure on the west in the issues of economic and cultural domination resulted\n  into the emergence of Awami League as the strongest political voice of\n  East Pakistan. In his historic speech before hundred thousands of people at\n the Suhrawardy Udyan on March 7, 1971, the president of Awami League and the\n father of the nation Bangabandhu Sheikh Mujibur Rahman, called upon all the\n people of East Pakistan to launch a decisive struggle against the Pakistani\n occupation and take an all-out preparation for the War of Liberation.\n\n");
        printf("\n\n    Enter anything to go to country menu: ");
        fflush(stdin);
        gets(e);
        system("cls");
        country();
    }
    else if(strncmp(e,"movement",3)==0||strncmp(e,"independence",3)==0||strcmp(e,"i")==0||strcmp(e,"m")==0||strcmp(e,"3")==0)
    {
        system("cls");
        printf("\n    Independence movement");
        printf("\n\n After the Awami League won all the East Pakistan seats as well as a majority of the\n Pakistan's National Assembly in the 1970–71 elections, West Pakistan opened talks\n with the East on constitutional questions about the division of power between the\n central government and the provinces, as well as the formation of a national\n government headed by the Awami League.\n\n The talks proved unsuccessful, however, and on 1 March 1971, Pakistani President\n Yahya Khan indefinitely postponed the pending National Assembly session,\n precipitating massive civil disobedience in East Pakistan.\n\n On 2 March 1971, a group of students, led by A S M Abdur Rob, a student leader,\n raised the new (proposed) flag of Bangladesh under the direction of the Swadhin \n Bangla Nucleus. They demanded that Sheikh Mujibur Rahman declare the\n independence of Bangladesh immediately but Mujibur Rahman refused to agree\n to\n this demand. Rather, he decided that he would declare his next steps at a public\n  meeting to be held on 7 March.\n\n On 3 March, student leader, Shahjahan Siraj, read the 'Sadhinotar Ishtehar'\n (Declaration of independence) at Paltan Maidan in front of Bangabandhu Sheikh\n Mujib at a public gathering under the direction of the Swadhin Bangla Nucleus.\n\n On 7 March, there was a public gathering in Suhrawardy Udyan to hear updates on\n the ongoing movement from Bangabandhu Sheikh Mujib, the leader of the\n movement that time. Although he avoided directly referring to independence, as the\n  talks were still underway, he warned his listeners to prepare for any imminent\n war. The speech is considered a key moment in the war of liberation,\n and is remembered for the phrase,\n\n\"Ebarer Shongram Amader Muktir Shongram, Ebarer Shongram Shadhinotar Shongram....\n Our struggle this time is a struggle for our freedom, our struggle this time is a struggle for our \n independence....\"\n\n");
        printf("\n\n  Enter anything to go to country menu: ");
        fflush(stdin);
        gets(e);
        system("cls");
        country();
    }
    else if(strncmp(e,"declaration",3)==0||strcmp(e,"d")==0||strcmp(e,"f")==0||strcmp(e,"4")==0||strncmp(e,"formal",3)==0)
    {
        system("cls");
        printf("\n    Formal Declaration of Independence");
        printf("\n\n In the early hours of 26 March 1971, a military crackdown by the Pakistan army\n began. The Bangabandhu Sheikh Mujibur Rahman was arrested and the political\n leaders dispersed, mostly fleeing to neighbouring India where they organised a\n provisional government. Before being arrested by the Pakistani Army, Sheikh\n Mujibur Rahman passed a hand written note which contained the Bangladeshi\n Declaration of Independence. This note was widely circulated and transmitted by the\n then East Pakistan Rifles' wireless transmitter. The world press reports from\n late March 1971 also make sure that Bangladesh's declaration of independence by\n Bangabandhu was widely reported throughout the world. Bengali Army officer Major\n Ziaur Rahman captured the Kalurghat Radio Station in Chittagong and read\n the declaration of independence of Bangladesh during the evening hours on\n 27 March.\n\n This is Swadhin Bangla Betar Kendra. I, Major Ziaur Rahman, at the direction of\n Bangobondhu Mujibur Rahman, hereby declare that the Independent People's\n Republic of Bangladesh has been established. At his direction, I have taken command\n as the temporary Head of the Republic. In the name of Sheikh Mujibur \nRahman, I call upon all Bengalees to rise against the attack by the West Pakistani\n Army. We shall fight to the last to free our motherland. Victory is, by the Grace of\n Allah, ours. Joy Bangla.\n\n The Provisional Government of the People's Republic of Bangladesh was formed on\n 10 April in Meherpur (later renamed as Mujibnagar, a town adjacent to the Indian border).\n\n Sheikh Mujibur Rahman was announced to be the Head of the State.\n Tajuddin Ahmed became the Prime Minister, Syed Nazrul Islam became the\n acting President and Khondaker Mostaq Ahmed the Foreign Minister. There\n the war plan was sketched out with Bangladesh armed forces established and named\n \"Muktifoujo\". Later these forces were named \"Muktibahini\" (freedom\n fighters). M. A. G. Osmani was appointed as the Chief of the Armed Forces.\n\n For military purposes, Bangladesh was divided into 11 sectors under 11 sector\n commanders. In addition to these sectors, later in the war, three special forces were\n formed: Z Force, S Force and K Force. These three forces names were\n derived from the initial letters of the commander's name. The training and most of\n the arms and ammunitions were arranged by the Meherpur government which was\n supported by India. As fighting grew between the Pakistan Army and the\n Bengali Mukti Bahini, an estimated ten million Bengalis, mainly Hindus, sought\n refuge in the Indian states of Assam, Tripura and West Bengal.\n\nThe crisis in East Pakistan produced new strains in Pakistan's troubled relations with\n India. The two nations had fought a war in 1965, mainly in the west, but the\n pressure of millions of refugees escaping into India in autumn 1971, as well as\n Pakistani aggression, reignited Indian hostilities with Pakistan. Indian\n sympathies lay with East Pakistan, and on 3 December 1971, India intervened on the\n side of the Bangladeshis which led to a short, but violent, two-week war\n known as the Indo-Pakistani War of 1971.\n\n");
        printf("\n\n  Enter anything to go to country menu: ");
        fflush(stdin);
        gets(e);
        system("cls");
        country();
    }
    else if(strncmp(e,"pakistan",3)==0||strncmp(e,"capitulation",3)==0||strcmp(e,"c")==0||strcmp(e,"a")==0||strncmp(e,"aftermath",3)==0||strcmp(e,"5")==0)
    {
        system("cls");
        printf("\n    Pakistani capitulation and aftermath");
        printf("\n\n On 16 December 1971, Lt. Gen A. A. K. Niazi, CO of Pakistan Army forces located in East Pakistan signed\n the Instrument of Surrender and the nation of Bangla Desh\n \"Country of Bengal\" was finally established the following day. At the time of\n surrender only a few countries had provided diplomatic recognition to the new\n nation. Over 90,000 Pakistani troops surrendered to the Indian forces making it the\n largest surrender since World War II. The new country changed its name to\n Bangladesh on 11 January 1972 and became a parliamentary democracy under a\n constitution. Shortly thereafter on 19 March Bangladesh signed a friendship treaty\n with India. Bangladesh sought admission in the UN with most voting in its favour, but\n China vetoed this as Pakistan was its key ally. The United States, also a key ally\n of Pakistan, was one of the last nations to accord Bangladesh recognition.\n To ensure a smooth transition, in 1972 the Simla Agreement was signed between India\n and Pakistan. The treaty ensured that Pakistan recognised the independence\n of Bangladesh in exchange for the return of the Pakistani Pows.\n India treated all the Pows in strict accordance with the Geneva Convention, rule\n 1925. It released more than 93,000 Pakistani Pows in five months.\n\n Furthermore, as a gesture of goodwill, nearly 200 soldiers who were sought for war\n crimes by Bengalis were also pardoned by India. The accord also gave back\n more than 13,000 km2 (5,019 sq mile) of land that Indian troops had seized in West\n Pakistan during the war, though India retained a few strategic areas, most notably\n Kargil (which would in turn again be the focal point for a war between the two\n nations in 1999).\n\n");
        printf("\n\n  Enter anything to go to country menu: ");
        fflush(stdin);
        gets(e);
        system("cls");
        country();
    }
    else if(strncmp(e,"return",3)==0||strcmp(e,"r")==0||strncmp(e,"main",3)==0||strncmp(e,"menu",3)==0||strcmp(e,"6")==0)
    {
        system("cls");
        printf("\n\n");
        puts("\n       ...Welcome again...\n");
        option1();
        start();

    }
    else
    {
        system("cls");
        puts("Wrong command");
        puts("Suppose for Formal Declaration of Independence write \"declaration\" \"formal\" \"4\" or key character of command.");
        goto jump;
    }


}

void funny()
{
    char name[30];
    printf("\n\n");
    printf("      1. Finding mood                        {I can measure your mood, try it}\n");
    printf("      2. SRK pose                            {I can  check that are you able to give a pose like SRK or not}\n");
    printf("\n\t Suppose to measure your mood, write \"finding\" or \"mood\" or \"1\" or key character..\n\n");
    printf("\n    3. Go back to main menu ?\n");
    puts("\n\n   What do you like to do??");
    printf("    : ");
    fflush(stdin);
    gets(name);
    command1(name);
    char m1[]="finding",m2[]="f",m3[]="mood";
    char n1[]="srk",n2[]="s",n3[]="pose",n4[]="p",n5[]="2";
    char e1[]="go",e2[]="back",e3[]="g",e4[]="b",e5[]="3",e6[]="y";
    if(strncmp(name,m1,3)==0 || strcmp(name,m2)==0||strncmp(name,m3,3)==0||strcmp(name,"1")==0||strcmp(name,"m")==0)
    {
        system("cls");
        mood();
    }
    else if(strcmp(name,n1)==0||strcmp(name,n2)==0||strcmp(name,n4)==0||strncmp(name,n3,3)==0||strcmp(name,n5)==0)
    {
        system("cls");
        srk();
    }
    else if(strcmp(name,e1)==0||strcmp(name,e2)==0||strcmp(name,e3)==0||strcmp(name,e4)==0||strncmp(name,"menu",3)==0||strcmp(name,e5)==0||strncmp(name,"back",3)==0||strncmp(name,"main",3)==0||strcmp(name,"yes")==0||strcmp(name,e6)==0)
    {
        system("cls");
        printf("\n\n");
        puts("\n       ...Welcome again...\n");
        option1();
        start();
    }
    else
    {
        system("cls");
        printf("\n   Sorry sir! I can't understand what do you want, will you please write your command again ..\n\n");
        printf("\t Suppose to measure your mood, write \"finding\" or \"mood\" or \"1\" or key character..\n\n");
        funny();
    }
}

void bmi()
{
    float hm,w,hf,r;
    printf("\n     To measure BMI,\n  Enter your weight :");
    scanf("%f",&w);
jump:
    puts("\t  Do you know your hight in meter ?");
    fflush(stdin);
    printf("   : ");
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0)
    {
        printf("\n Enter your hight in meter :  ");
        scanf("%f",&hm);
        r=w/pow(hm,2);
        printf("\n\tYour BMI is %.2f\n",r);
        bmi2(r);
    }
    else if(strcmp(e,"no")==0||strcmp(e,"nop")==0||strcmp(e,"n")==0)
    {
        puts("\n   No problem. Enter your hight in feet:      [5.10,  here 5 is feet 10 is inches]");
        printf("     : ");
        scanf("%f",&hf);
        hf=hf*0.3048;
        r=w/pow(hf,2);
        printf("\n\tYour BMI is %.2f\n",r);
        bmi2(r);
    }
    else
    {
        puts("  Sorry sir I can't understand your command. ");
        puts(" Use \"yes\",\"no\" or key character\n ");
        goto jump;
    }
    printf("\n\n\n   Do you want to try it again or go to utility menu?\n");
jump1:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"try")==0||strcmp(e,"try again")==0)
    {
        system("cls");
        bmi();
    }
    else if(strcmp(e,"u")==0 ||strncmp(e,"utility",3)==0)
    {
        system("cls");
        utility();
    }
    else
    {
        system("cls");
        puts("\n\tWrong command");
        puts("     Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("     Enter your command ..");
        goto jump1;
    }

}
void bmi2( float r)
{
    if(r<16)
    {
        printf("\n By your BMI you have severe thinness. It indicates that you are underweight, so you\n may need to put on some weight. You are recommended to ask your doctor or a dietitian\n for advice.");
    }
    else if(r>15 && r<18)
    {
        printf("\n By your BMI you have moderate thinness. You are being sick. Add healthy calories.\n You can increase calories by adding nut or seed toppings, cheese, and healthy side\n dishes.Try almonds, sunflower seeds, fruit, or whole-grain, wheat toast.");
    }
    else if(r>=17 && r<=18.5)
    {
        printf("\n By your BMI you have mid thinness. Add healthy calories. You don’t need to drastically\n change your diet. You can increase calories by adding nut or seed toppings, cheese, and\n healthy side dishes. Try almonds, sunflower seeds, fruit, or whole-grain, wheat toast.");
    }
    else if(r>18.5 && r<26)
    {
        printf("\n By your BMI you are at a healthy weight for your height. By maintaining a healthy weight,\n you lower your risk of developing serious health problems.Carry on.");
    }
    else if(r>25 && r<31)
    {
        printf("\n By your BMI you have overweight. You are carrying excess body fat. Being overweight is not\n just about how you look. Over time, it means that you have an increased risk of developing\n various health problems.Your health may be at risk.lose some weight for health reasons.\n Drink more water and cut out sugar-sweetened drinks,limit screen time,start your day with\n a healthy breakfast. Make a point of eating at least five fruits and vegetables a day,\n family meals are best.");
    }
    else if(r>30 && r<36)
    {
        printf("\n By your BMI you have obese class 1.You are carrying so much body fat. It is not just about\n how you look. Over time, it means that you have an increased risk of developing various health\n problems.Your health may be at risk. Go to a nutritionist and have your diet chart.");
    }
    else if(r>35 && r<41)
    {
        printf("\n By your BMI you have obese class 2. It indicates that you are highly overweight. You may be\n advised to lose some weight for health reasons. You are recommended to talk to your doctor or\n a dietitian for advice. ");
    }
    else
    {
        printf("\n By your BMI you have obese class 3.It indicates that you are heavily overweight. It is a significant\n adverse health conditions. Your health may be at risk if you do not lose weight. You are recommended\n to talk to your doctor or a dietitian for advice. Obesity surgery may be an appropriate option.");
    }
}

void even()
{
    int a,c;
    printf("\n\n\t  To check even or odd, enter a number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        c=1;
    }
    else
    {
        c=0;
    }
    if(c==1)

    {
        printf("\n\t   %d is Even",a);

    }
    else
    {
        printf("\n\t   %d is Odd",a);

    }
    printf("\n\n\tDo you want to try it again or go to utility menu?\n");
jump:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"try")==0||strcmp(e,"try again")==0)
    {
        system("cls");
        even();
    }
    else if(strcmp(e,"u")==0 ||strncmp(e,"utility",3)==0||strncmp(e,"no",1)==0)
    {
        system("cls");
        utility();
    }
    else
    {
        system("cls");
        puts("\n\n\tWrong command");
        puts("\n\tSuppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\n\t  Enter your command ..");
        goto jump;
    }

}
void prime()
{
    int n, i, t=0;
    printf("\n\t Enter a number to check: ");
    scanf(" %d",&n);
    for(i=2; i<=(n/2); i++)
    {
        if(n%i==0)
        {
            t=1;
            break;
        }
    }
    if(t==0 && n>0)
    {
        printf("\n   %d is a prime number.\n",n);
    }
    else
    {
        printf("\n   %d is not a prime number.\n",n);
    }
    printf("\n    Do you want to try it again or go to utility menu?\n");

jump:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"try")==0||strcmp(e,"try again")==0)
    {
        system("cls");
        prime();
    }
    else if(strcmp(e,"u")==0 ||strncmp(e,"utility",3)==0)
    {
        system("cls");
        utility();
    }
    else
    {
        system("cls");
        puts(" \t   Wrong command..!");
        puts("\t  Suppose for try again, write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\t   Enter your command ..");
        goto jump;
    }

}

void contact()
{
    struct contact
    {
        char n[20];
        char num[18];
    } con[50];
    char name[20],ch;
    int i,n,r,f=1,z=0;

jump:
    r=0;
    r=count();
    printf("\n\n    1. Create a contact. (there are %d contact on your phonebook, you can add %d more.)\n",r,50-r);
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
    command1(name);

    if(strcmp("create",name)==0||strncmp("create",name,3)==0||strcmp(name,"1")==0)
    {
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
            system("cls");
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
        system("cls");
        printf("\n   Contact successfully saved. ");
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
                    printf("\n   Contact number: %s\n",con[i].num);
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
                printf("\n\n   Error in accessing.!!!");
                goto jump;
            }
            else
            {
                printf("\n\n  Write down the name you want to delete ?? ...  ");
                fflush(stdin);
                gets(name);
                r=0;
                r=count();
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
                        z++;
                    }
                }
                if(z==r)
                {
                    printf("\n\n\t no contact found named %s",name);
                    fclose(fp);
                    fclose(fp2);
                    remove("Contact.txt");
                    rename("c.txt","Contact.txt");
                    goto jump;
                }
                else
                {
                    fclose(fp);
                    fclose(fp2);
                    remove("Contact.txt");
                    rename("c.txt","Contact.txt");
                    printf("\n\n   Successfully deleted.");
                    goto jump;
                }

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
                printf("  Contact number: %s\n\n",con[i].num);
            }

        }
        fclose(fp);
        goto jump;
    }
    else if(strncmp("return",name,3)==0||strcmp(name,"5")==0||strncmp("utility",name,3)==0||strcmp("u",name)==0||strcmp("r",name)==0)
    {
        system("cls");
        utility();
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
            printf("\n\n   All contacts deleted successfully..!!! ");
            fclose(fp);
            goto jump;
        }
    }
    else
    {
        system("cls");
        printf("\n\n\tSorry.. I couldn't understand your command.\n");
        printf("    Suppose for Check a contact, write \"check\" or \"che\" or \"4\" and so on. ");
        printf("\n   Will you please enter your command again?? ..");
        goto jump;
    }

}

void alarm()
{

    int s, i,j;
    printf("\n\n\tAlarm");
    printf("\n\n After how many sec do you want to set alarm???");
    printf("\n  : ");
    scanf("%d",&s);
    printf("\n   Don't do anything until your alarm rings.");

    for(i=0; i<=s; i++)
    {
        if(i==s)
        {
            for(j=0; j<4; j++)
            {
                Beep(4000,200);
                Beep(4000,200);
                Beep(4000,600);
            }
        }
        else
        {
            Beep(0,1000);
        }
    }
    printf("\n\n  Do you want to try it again or go to utility menu?\n");

jump:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"try")==0||strcmp(e,"try again")==0)
    {
        system("cls");
        alarm();
    }
    else if(strcmp(e,"u")==0 ||strncmp(e,"utility",3)==0||strncmp(e,"menu",3)==0||strncmp(e,"nop",1)==0)
    {
        system("cls");
        utility();
    }
    else
    {
        system("cls");
        puts("\n\t    Wrong command..!");
        puts("\n\n\tSuppose for try again, write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\n\t  Enter your command ..");
        goto jump;
    }
}

void rest()
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
        char l[35];
        item it;
    } dt[16];

    int i,j;
    char test[15];
    printf("\n       I will find some restaurant for you. ");
    printf("\n\n   Fast food, Chinese, Pizza, Thigh food  or Bangali food. \n");
    printf("\n\t    Just say what do you like?? ..  ");
jump:
    printf("   : ");
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
                fscanf(fp,"\n%[^\n]s",dt[i].l);
                if(strcmp(test,dt[i].it.i1)==0||strcmp(test,dt[i].it.i2)==0||strcmp(test,dt[i].it.i3)==0||strcmp(test,dt[i].it.i4)==0||strcmp(test,dt[i].it.i5)==0)
                {
                    printf(" Restaurant name: %s\n Rating: %s\n And it is at \"%s\".\n\n",dt[i].n,dt[i].r,dt[i].l);
                }
            }
        }
        else
        {
            printf("\n\t   Error in file opening.!!! ");
        }
        fclose(fp);
    }
    else
    {
        system("cls");
        printf("\n  Sorry. I could not Understand.\n");
        printf("\n Suppose for fast food, enter  \"Fast food\", for pizza  \"Pizza\"  and so on \"Chinese\" ,\"Thigh food\", \"Bangali food\". \n");
        printf(" Will you please enter your choice again .. ");
        goto jump;
    }

    printf("\n\n  Do you want to try this again or go to search menu??\n");

jump1:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"try")==0||strcmp(e,"try again")==0)
    {
        system("cls");
        rest();
    }
    else if(strcmp(e,"s")==0 ||strncmp(e,"search",3)==0||strncmp(e,"nop",1)==0)
    {
        system("cls");
        etc();
    }
    else
    {
        system("cls");
        puts("\n\t  Wrong command..!");
        puts("\n\n\tSuppose for try again, write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\n\t   Enter your command ..");
        goto jump1;
    }
}
void traffic()
{
    char f[25],t[25];
    int i,k,sf=0,st=0;
    static int j=2;
    printf("\n\n      Traffic update\n");
    printf("\n\n  Where are you now: ");
    fflush(stdin);
    scanf("%[^\n]s",f);
    printf("\n  OK. Now say where do you want to go ? ");
    fflush(stdin);
    scanf("%[^\n]s",t);
    for(i=0; f[i]!='\0'; i++)
    {
        sf=(sf+f[i])%10;
    }
    for(i=0; t[i]!='\0'; i++)
    {
        st=(st+t[i])%10;
    }
    j++;
    k=(sf*st)%(sf+st-j);
    switch(k)
    {
    case 1:
        printf("\n There are no delays to report in %s at this moment. Vehicles are moving freely\n in both directions. You can go easily. \n",t);
        break;
    case 2:
        printf("\n A slide traffic has been noticed, but vehicles are moving in both directions.\n You can go.\n");
        break;
    case 3:
        printf("\n On your way, there is so many traffic!! Because of rain water road is flooded\n and jammed. \n");
        break;
    case 4:
        printf("\n This road is under construction. Vehicles are moving very slowly. Road can be\n blocked anytime. \n");
        break;
    case 5:
        printf("\n Traffic is almost at a standstill at %s. \n",f);
        break;
    case 6:
        printf("\n There are no delays to report in %s at this moment.Vehicles are moving. \n",t);
        break;
    case 7:
        printf("\n On your way, large potholes and construction work on the four-lane highway has\n slowed down movement of vehicles. \n");
        break;
    case 8:
        printf("\n There are some delays in %s at this moment. On your way, there are so many potholes. Be careful while moving. \n",t);
        break;
    case 9:
        printf("\n On your way, vehicles are moving slowly. Because of rain water road is flooded.. \n");
        break;
    default:
        printf("\n Road is totally blocked.Because of rain water road is flooded. Traffic is almost\n at a standstill. \n");
    }
    printf("\n\n  Do you want to try it again or go to search menu?\n");

jump:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"t")==0||strncmp(e,"try",3)==0)
    {
        system("cls");
        traffic();
    }
    else if(strcmp(e,"s")==0 ||strncmp(e,"search",3)==0||strncmp(e,"nop",1)==0)
    {
        system("cls");
        etc();
    }
    else
    {
        system("cls");
        puts("\n\n       Wrong command..!");
        puts("\n   Suppose for try again, write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\n\tEnter your command ..");
        goto jump;
    }
}

void address()
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
    printf("   : ");
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
            printf("\n\n]t  Error in file opening.!!! ");

        }

    }
    else
    {
        system("cls");
        printf("\n  Sorry. I could not Understand.\n");
        printf("\n\n  North south university, Independent university, Appolo hospital, Eye hospitals, Mehedi Mart, Grameenphone House,\n  Jamuna Amusement Park, Hurdco International School, Southeast Bank Limited, NCC Bank Limited,Bank Asia Limited,\n  Basundhara Group, Walton Headquarter, East West Media Group Ltd., Sisana Garden, Safwan Park, Kagojer Ishkool,\n  Bangladesh Pratidin, or Dot Interior. \n");
        printf("\n Suppose for Appolo hospital, enter first word  \"Appolo \", or first 4 character of your choice,\n like, for NCC Bank Limited write \"NCC \" (put a space after NCC for 4th character,if first word have 3 character)\n  and so on. \n");
        printf("\n   Will you please enter name again .. ");
        goto jump;
    }
    printf("\n\n  Do you want to find another one or go to search menu??\n");

jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strncmp(e,"yes",2)==0||strncmp(e,"yap",2)==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"find")==0||strcmp(e,"find another")==0||strcmp(e,"f")==0)
    {
        system("cls");
        address();
    }
    else if(strcmp(e,"s")==0 ||strncmp(e,"search",3)==0||strncmp(e,"nop",1)==0)
    {
        system("cls");
        etc();
    }
    else
    {
        system("cls");
        puts("\n\t   Wrong command..!");
        puts("\n     Suppose for try again, write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\n\n     Enter your command again..");
        goto jump0;
    }

}
void vara()
{
    printf("\n Bashundhora main gate, Mehedi Mart,Appolo Hospital or Bisso road(Rail gate) \n\n");
    char s[30],t[30];
    int i,f=0;
    printf("\n   Where are you now ??..\n");
jump:
    printf("   : ");
    fflush(stdin);
    gets(s);
    command1(t);
    if(strcmp(s,"bashundhora")==0||strcmp(s,"basundhara")==0||strcmp(s,"basundhara")==0||strcmp(s,"gate")==0||strcmp(s,"main")==0)
    {
        strcpy(s,"Bashundhora gate");
        printf("\n  Grameen phone office, Mehedi Mart, North south university, C block Mosjid, Boro Mosjid, Ghatpar or 300 fit \n");
        puts("\n   Where do you want to go ??..");
jump1:
        printf("   : ");
        fflush(stdin);
        gets(t);
        command1(t);
        if(strcmp(t,"grameen phone office")==0||strcmp(t,"grameen phone")==0||strcmp(t,"gra")==0)
        {
            f=1;
            strcpy(t,"Grameen phone office");
        }
        else if(strcmp(t,"mehedi mart")==0||strcmp(t,"mehedi")==0||strcmp(t,"m")==0||strcmp(t,"mart")==0)
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
            printf("\n Suppose for Grameen phone office write  \"grameen phone office\" or  \"grameen phone\" or \"gra\".\n for Ghatpar write \"ghatpar\" or  \"g\".");
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
        printf("   : ");
        fflush(stdin);
        gets(t);
        command1(t);
        if(strcmp(t,"viqarunneca school")==0||strcmp(t,"school")==0||strcmp(t,"viq")==0||strcmp(t,"v")==0||strcmp(t,"s")==0)
        {
            f=2;
            strcpy(t,"Viqarunneca school");
        }
        else if(strcmp(t,"mehedi mart")==0||strcmp(t,"mehedi")==0||strcmp(t,"m")==0||strcmp(t,"mart")==0)
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
            printf("\n Suppose for Viqarunneca school write  \"viqarunneca school\" or  \"v\" or \"viq\".\n for Ghatpar write \"ghatpar\" or  \"g\".");
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
        printf("   : ");
        fflush(stdin);
        gets(t);
        command1(t);
        if(strcmp(t,"Appolo Hospital")==0||strcmp(t,"appolo")==0||strcmp(t,"hospital")==0||strcmp(t,"a")==0||strcmp(t,"h")==0)
        {
            f=5;
            strcpy(t,"Appolo Hospital,");
        }
        else if(strcmp(t,"mehedi mart")==0||strcmp(t,"mehedi")==0||strcmp(t,"m")==0||strcmp(t,"mart")==0)
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
            printf("\n Suppose for Appolo Hospital, write  \"appolo Hospital,\" or  \"hospital,\" or \"a\" or \"h\".\n for Ghatpar write \"ghatpar\" or  \"g\".");
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
        printf("   : ");
        fflush(stdin);
        gets(t);
        command1(t);
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
            printf("\n Suppose for Appolo Hospital, write  \"appolo Hospital,\" or  \"hospital,\" or \"a\" or \"h\".\n for Bank asis write \"bank asia\" or  \"b\" or  \"asia\".");
            printf("\n  Please enter where to go again ..");
            goto jump4;
        }
    }
    else
    {

        system("cls");
        printf("\n Sorry. I can't understand.");
        printf("\n Bashundhora gate, Mehedi Mart,Appolo Hospital or Bisso road(Rail gate) \n");
        printf("\n Suppose for Appolo Hospital, write  \"appolo Hospital,\" or  \"hospital,\" or \"a\" or \"h\".\n for Bashundhara main gate write \"bashundhara\" or  \"main gate\" or  \"main\".");
        printf("\n  Please enter again, where to go ..\n");
        goto jump;

    }
    switch (f)
    {
    case 1:
    {
        printf("\n\n Rent from   %s   to   %s   is 10 Taka.\n",s,t);
        break;
    }
    case 2:
    {
        printf("\n\n Rent from   %s   to   %s   is 15 Taka.\n",s,t);
        break;
    }
    case 3:
    {
        printf("\n\n Rent from   %s   to   %s   is 20 Taka.\n",s,t);
        break;
    }
    case 4:
    {
        printf("\n\n Rent from   %s   to   %s   is 25 Taka.\n",s,t);
        break;
    }
    case 5:
    {
        printf("\n\n Rent from   %s   to   %s   is 35 Taka.\n",s,t);
        break;
    }
    default :
    {
        printf("\n\n Rent from   %s   to   %s   is 40 Taka.\n",s,t);
    }
    }
    printf("\n\n  Do you want to try this again or go to search menu??\n");

jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"try")==0||strcmp(e,"try again")==0)
    {
        system("cls");
        vara();
    }
    else if(strcmp(e,"s")==0 ||strncmp(e,"search",3)==0||strncmp(e,"nop",1)==0)
    {
        system("cls");
        etc();
    }
    else
    {
        system("cls");
        puts("  Wrong command..!");
        puts("Suppose for try again, write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("Enter your command ..");
        goto jump0;
    }

}
void shop()
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
    printf("\n\n  Eye shadow, Mascara, Face color, Perfecting base, Orgasm blush, Moisturizer, Foundation,\n Eye intentensifieror, Balance pressed powder, Creamy concealer kit, Eyebrow pencil, Kajal for eyes, Perfume,\n Nail polishes, Waterproof mascara, Micro finish powder, Makeup blender, Lip liner, Lipstick, Eye liner,\n Face primer, Creamy concealer kit or Lip and cheek stain. \n");
    printf("\n    Just say what do you like to search?? ..  ");
jump:
    printf("   : ");
    fflush(stdin);
    gets(test);
    if(strncmp(test,"Eye shadow",6)==0||strncmp(test,"Mascara",6)==0||strncmp(test,"Face color",6)==0||strncmp(test,"Perfecting base",6)==0||strncmp(test,"Orgasm Blush",6)==0||strncmp(test,"Moisturizer",6)==0||strncmp(test,"Foundation",6)==0||strncmp(test,"Eye intentensifieror",6)==0||strncmp(test,"Balance pressed powder",6)==0||strncmp(test,"Eyebrow pencil",6)==0||strncmp(test,"Kajal for eyes",6)==0||strncmp(test,"Perfume",6)==0||strncmp(test,"Nail polishes",6)==0||strncmp(test,"Waterproof mascara",6)==0||strncmp(test,"Micro finish powder",6)==0||strncmp(test,"Makeup blender",6)==0||strncmp(test,"Lip liner",6)==0||strncmp(test,"Lipstick",6)==0||strncmp(test,"Eye liner",6)==0||strncmp(test,"Face primer",6)==0||strncmp(test,"Lip and cheek stain",6)==0||strncmp(test,"Creamy Concealer kit",6)==0)
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
                    printf("\n\n \"%s\"   is best for   %s.\n",item[i].c,item[i].n);
                    printf(" It is about %d taka.\n",item[i].p);
                    printf(" And you can get it from %s.\n\n",item[i].w);
                }
            }
            fclose(fp);
        }
        else
        {
            printf("\n\n\t  Error in file opening.!!! ");

        }

    }
    else
    {
        system("cls");
        printf("\n  Sorry. I could not Understand.\n");
        printf("\n\n  Eye shadow, Mascara, Face color, Perfecting base, Orgasm blush, Moisturizer, Foundation,\n Eye intentensifieror, Balance pressed powder, Creamy concealer kit, Eyebrow pencil, Kajal for eyes, Perfume,\n Nail polishes, Waterproof mascara, Micro finish powder, Makeup blender, Lip liner, Lipstick, Eye liner,\n Face primer, Creamy concealer kit or Lip and cheek stain. \n");
        printf("\n Suppose for Orgasm Blush, enter  \"Orgasm Blush\", or first 6 character of your choice,\n like, for Face color write \"Face c\" and so on. \n");
        printf("\n   Will you please enter your choice again .. ");
        goto jump;
    }
    printf("\n\n  Do you want to try this again or go to search menu??\n");

jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strncmp(e,"try again",3)==0||strcmp(e,"t")==0)
    {
        system("cls");
        shop();
    }
    else if(strcmp(e,"s")==0 ||strncmp(e,"search",3)==0||strncmp(e,"nop",1)==0)
    {
        system("cls");
        etc();
    }
    else
    {
        system("cls");
        puts("  Wrong command..!");
        puts(" Suppose for try again, write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("\nEnter your command ..");
        goto jump0;
    }
}

void mood()
{
    int t,m=0,h=0,gn=0;
    char n1[30],n[35],g[15],in[20];
    printf("\n\t  OK. You like to check your mood. Let me try..");
    printf("\n\n    What is your name? : ");
    fflush(stdin);
    gets(n1);
jump01:
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
        strcpy(n,"Miss.");
        strcat(n,n1);
        gn=1;
        goto jump;
    }
    else
    {
        system("cls");
        printf("\n    You entered wrong. Write male or female or first character.");
        goto jump01;
    }
jump:
    printf("\n OK, now answer a few questions.");
jump1:
    printf("\n\n    How are you %s ?? \t\t (if fine, enter \"f\" if not enter \"n\")\n",n);
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
    printf("\n\n   Do you like to watch movie? \t\t (if like, enter \"l\" if not enter \"n\")\n");
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
        printf("\n\n   Do you have any girlfriend?? \t\t (if yes, enter \"y\" if not enter \"n\")\n");
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
        printf("\n\n   Do you have any boyfriend?? \t\t (if yes, enter \"y\" if not enter \"n\")\n");
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
    printf("\n\n   OK. Do you like to talk with unknown peoples?? \t\t (if yes, enter \"y\" if not enter \"n\")\n");
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
    printf("\n\n   Physically you are well or not?? \t\t (if well, enter \"y\" if not enter \"n\")\n");
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
    printf("\n\n   Do you like to sing songs ??? \t\t (if like, enter \"y\" if not enter \"n\")\n");
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
    printf("\n\n   Are you at stress??? \t\t (if you are, enter \"y\" if not enter \"n\")\n");
    printf("   : ");
    fflush(stdin);
    gets(in);
    if(strcmp(in,"y")==0)
    {
        system("cls");
    }
    else if(strcmp(in,"n")==0)
    {
        m++;
        system("cls");
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
        goto jump9;
    }
    if(m<10&&m>6)
    {
        printf("\n\n   Good %s . You are the happiest person ever int the world. You have everything.\n   Try to keep your good habits until you die.",n);
        if(h=1)
        {
            printf("\n\n   Go to the doctor first, to solve your physical problem.\n");
            h=0;
        }
        printf("\n\n   We do not need magic to change the world, we carry all the power\n   inside ourselves to imagine better.\n");
        printf("\n\n   Don't ever let somebody to tell you ... you can't do something.    \n   You got a dream. You gotta protect it. People   don't try to do something\n   new by themselves and they do not encourage you to do so. If you want something,\n   go get it.\n\n\n");
    }
    else if(m>3&&m<7)
    {
        printf("\n\n   %s . You are not happy enough. Try to upgrade yourself. This world is so beautiful then you think.\n   Try to keep your good habits until you die.",n);
        if(h=1)
        {
            printf("\n\n   Go to the doctor first, to solve your physical problem.\n");
            h=0;
        }
        printf("\n\n   We do not need magic to change the world, we carry all the power\n   inside ourselves to imagine better.\n");
        printf("\n\n   Don't ever let somebody to tell you ... you can't do something.    \n   You got a dream. You gotta protect it. People   don't try to do something\n   new by themselves and they do not encourage you to do so. If you want something,\n   go get it.\n\n\n");
    }
    else
    {
        printf("\n\n   %s . You are not happy. Try to upgrade yourself. This world is so beautiful then you think.\n   Try to keep your good habits until you die.",n);
        if(h=1)
        {
            printf("\n\n   Go to the doctor first, to solve your physical problem.\n");
            h=0;
        }
        printf("\n\n   We do not need magic to change the world, we carry all the power\n   inside ourselves to imagine better.\n");
        printf("\n\n   Don't ever let somebody to tell you ... you can't do something.    \n   You got a dream. You gotta protect it. People   don't try to do something\n   new by themselves and they do not encourage you to do so. If you want something,\n   go get it.\n\n\n");
    }
    printf("\n\n\n   Do you want to try it again or go to Funny menu?\n");
jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"t")==0||strncmp(e,"try again",3)==0)
    {
        system("cls");
        mood();
    }
    else if(strncmp(e,"nop",3)==0||strncmp(e,"funny",3)==0||strcmp(e,"f")==0||strncmp(e,"nop",1)==0)
    {
        system("cls");
        funny();
    }
    else
    {
        system("cls");
        puts("\n   Wrong command");
        puts("\n   Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("Enter your command ..");
        goto jump0;
    }

}
void srk()
{
    char n[15];
    float h;
    printf("\n\n\t Do you know SRK ??    (if know, enter \"y\" if not enter \"n\")\n");
jump:
    printf("     :  ");
    fflush(stdin);
    gets(n);
    if(strcmp(n,"y")==0)
    {
        printf("\n\t Now answer a few questions.\n\n");
jump1:
        printf("\t  Do you have any backbone problem??                (if have, enter \"y\" if not enter \"n\")\n");
        printf("   :  ");
        fflush(stdin);
        gets(n);
        if(strcmp(n,"y")==0)
        {
            system("cls");
            printf("\n\n\t   This program is not for you. It is harmful for for your body.\n\n");
            fflush(stdin);
            gets(n);
            system("cls");
            funny();
        }
        else if(strcmp(n,"n")==0)
        {
            system("cls");
jump2:
            printf("\n\n\t  Do you have any neck problem??         (if have, enter \"y\" if not enter \"n\")\n");
            printf("   :  ");
            fflush(stdin);
            gets(n);
            if(strcmp(n,"y")==0)
            {
                system("cls");
                printf("\n\n\t    This program is not for you. It is harmful for for your body.\n\n");
                fflush(stdin);
                gets(n);
                system("cls");
                funny();
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
                    printf("      *****************    ********************      \n");
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
                    funny();
                }
                else
                {
                    system("cls");
                    printf("\n  You entered wrong.Suppose if your hight 5 feet and 9 inch, then write \"5.9\".\n");
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
        funny();
    }
    else
    {
        system("cls");
        printf("\n  You entered wrong. Write \"y\" or \"n\".\n");
        goto jump;
    }
    printf("\n   Do you want to try it again or go to Funny menu?\n");
jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"t")==0||strncmp(e,"try again",3)==0)
    {
        system("cls");
        srk();
    }
    else if(strncmp(e,"nop",1)==0||strncmp(e,"funny",3)==0||strcmp(e,"f")==0)
    {
        system("cls");
        funny();
    }
    else
    {D:\
        system("cls");
        puts("\n   Wrong command");
        puts("\n   Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("Enter your command ..");
        goto jump0;
    }
}
void calculator()
{
    char in;
    printf("\n\n         Calculator\n\n");
    printf("          Enter \" + \"  symbol for addition \n");
    printf("          Enter \" - \"  symbol for Subtraction \n");
    printf("          Enter \" * \"  symbol for Multiplication \n");
    printf("          Enter \" / \"  symbol for Division \n");
    printf("          Enter \" %% \"  symbol for Modulus \n");
    printf("          Enter \" ^ \"  symbol for Power \n");
    printf("          Enter \" ! \"  symbol for Factorial\n");
    puts("\tTo return utility menu press \"#\" ");
    printf("\n   Enter here :   ");
    scanf("%c",&in);
    switch(in)
    {
    case '#':
    {
        system("cls");
        utility();
        break;
    }
    case '+':
    {
        system("cls");
        int n,i;
        float t=0,s;
        printf("\n\n   Enter how many numbers Do you want to add: ");
        scanf("%d",&n);
        printf("   Enter Numbers one by one :\n\n");
        for(i=0; i<n; i++)
        {
            printf("\t\t\t");
            scanf("%f",&s);
            t+=s;
        }
        printf("---------------------------------");
        printf("\n  Sum of %d numbers   =  %.2f\n",n,t);
        break;

    }
    case '-':
    {
        system("cls");
        int s, t;
        printf("\n\n   Enter first number: ");
        scanf("%d",&s);
        printf("\tEnter second number: ");
        scanf("%d",&t);
        if(s>t)
        {
            printf("\t  Subtraction    : %d\n",s-t);
        }
        else
        {
            printf("\n\tThe second value is greater then first!\n");
            printf("\t  Subtraction    : %d\n",s-t);
        }
        break;

    }
    case '*':
    {
        system("cls");
        int s, t;
        printf("\n\n    Enter first number: ");
        scanf("%d",&s);
        printf("\n   Enter second number: ");
        scanf("%d",&t);
        printf("\t  Multiplication : %d\n",s*t);
        break;

    }
    case '/':
    {
        system("cls");
        int s, t;
jump1:
        printf("\n\n    Enter dividend: ");
        scanf("%d",&s);
        printf("\n    Enter divisor: ");
        scanf("%d",&t);
        if(s>=t)
        {
            printf("\n   Quotient of %d by %d is : %d\n",s,t,s/t);
            break;
        }
        else
        {
            printf("\n     The second value is greater then first!\n");
            printf("\n   Enter Again \n");
            goto jump1;
        }
        break;
    }
    case '%':
    {
        system("cls");
        int s, t;
jump2:
        printf("\n\n    Enter dividend: ");
        scanf("%d",&s);
        printf("\n   Enter divisor: ");
        scanf("%d",&t);
        if(s>t)
        {
            printf("\n\t Modulus   : %d\n",s%t);
        }
        else
        {
            printf("\n\t  The second value is greater then first!\n");
            printf("\n    Enter Again ");
            goto jump2;
        }
        break;
    }
    case '^':
    {
        system("cls");
        double n,p;
        printf("\n\n    Enter Number: ");
        scanf("%lf",&n);
        printf("\n    Enter power: ");
        scanf("%lf",&p);
        printf("\n  %lf to the power %lf is %lf",n,p,pow(n,p));
        break;
    }
    case '!':
    {
        system("cls");
        int i;
jump3:
        printf("\n  Enter number for factorial: ");
        scanf("%d",&i);
        if(i<1)
        {
            printf("\n  You entered a negative number, Enter positive.");
            goto jump3;
        }
        printf("Factorial of %d = %d", i, factorial(i));
        break;
    }
    default:
    {
        system("cls");
        printf("\n\n   You entered wrong !!! ");
        calculator();
    }
    }
    printf("\n\n\n   Do you want to try it again or go to utility menu?\n");
jump0:
    printf("   : ");
    fflush(stdin);
    gets(e);
    command1(e);
    if(strcmp(e,"yes")==0||strcmp(e,"yap")==0||strcmp(e,"y")==0||strcmp(e,"again")==0||strcmp(e,"a")==0||strcmp(e,"t")==0||strncmp(e,"try again",3)==0)
    {
        system("cls");
        calculator();
    }
    else if(strncmp(e,"nop",1)==0||strncmp(e,"utility",3)==0||strcmp(e,"u")==0)
    {
        system("cls");
        utility();
    }
    else
    {
        system("cls");
        puts("\n   Wrong command");
        puts("\n   Suppose for try again write \"yes\" \"yap\" \"again\" \"try again\" or key character of command.");
        puts("Enter your command ..");
        goto jump0;
    }
}
int factorial(int n)
{
    int ans;
    if(n == 0)
        ans = 1;
    else
        ans = n * factorial (n-1);
    return ans;
}
int lcm(int a, int b)
{
    static int r = 0;

    r += b;
    if((r % a == 0) && (r % b == 0))
    {
        return r;
    }
    else
    {
        return lcm(a, b);
    }
}

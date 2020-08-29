#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

int review()
{
    printf("review");
}
void NSU()
{
    system("cls");
    printf("\n\n \t\t*      ***     * * * * * *     ***         *** \n");
    printf("  \t\t**      *      *         *      *           *  \n");
    printf("  \t\t* *     *      *                *           *  \n");
    printf("  \t\t*  *    *      *                *           *  \n");
    printf("  \t\t*   *   *      * * * * * *      *           *  \n");
    printf("  \t\t*    *  *                *      *           *  \n");
    printf("  \t\t*     * *                *       *         *   \n");
    printf("  \t\t*      **      *         *        *       *    \n");
    printf("\t       ***      *      * * * * * *          * * *      \n");

    printf("\n\n");
    printf("....................................................................\n\n");

}


int subview()
{
    char sub[10],nsub[15],ssub[15],roll[12],name[50];
    int vsub;
    printf("Enter Subject name : ");
    scanf("%s",sub);
    strcpy(nsub,sub);
    strcpy(ssub,sub);
    strcat(nsub,"name.txt");
    strcat(ssub,".txt");

    FILE *tt;
    int x,len;
    tt = fopen(ssub,"r");
    fscanf(tt,"%d",&vsub);
    printf("Available seat in %s are %d\n",sub,vsub);
    fclose(tt);
    tt= fopen(nsub,"r");
    printf("student roll     name\n");
    while(1)
    {

        fscanf(tt,"%s",roll);
        fscanf(tt,"%s",name);
        len=strlen(name);
        for(x=0; x<len; x++)
        {
            if(name[x]==',')
            {
                name[x]=' ';
            }
        }

        printf("%s %s\n",roll,name);


        if(feof(tt))
        {
            break;
        }

    }
    printf("press any key to continue...");
    fclose(tt);
    getch();



}
int creat()
{
    char roll[11],pass[10],name[50],fr[19];

    printf("Enter new student roll (10 digit) : ");
    scanf("%s",roll);
    strcpy(fr,roll);
    strcat(fr,".txt");
    printf("Enter student name : ");
    fflush(stdin);
    gets(name);
    // scanf("[^\n]",name);
    printf("Enter student pass : ");
    fflush(stdin);
    char ch;
    int x;
    for(x=0; x<8; x++)
    {
        ch=getch();
        printf("*");
        pass[x]=ch;
    }
    pass[x]='\0';
    int len;
    len=strlen(name);
    for(x=0; x<len; x++)
    {
        if(name[x]==' ')
        {
            name[x]=',';
        }
    }
    FILE *nw;
    nw = fopen("sid.txt","a");
    fprintf(nw,"\n%s",roll);
    fclose(nw);
    nw = fopen(fr,"w");
    fprintf(nw,"%s",name);
    fprintf(nw,"\n%s",pass);
    fclose(nw);

    printf("Account create successfully\n");
    printf("Entering advising mode...");
    Sleep(2000);
    advising(roll,fr,name);




}
int advising(char id[],char oid[],char pname[])
{
    FILE *fl;
    char sub[9],q1,fsub[15],nsub[15],q2;

    int num;
topad:
    NSU();
    strcpy(oid,id);
    strcat(oid,".txt");
    printf("Enter subject name <in small letter without space> : ");
    fflush(stdin);
    scanf("%s",sub);
    strcpy(fsub,sub);
    strcpy(nsub,sub);
    strcat(fsub,".txt");
    FILE *su;
    su=fopen(fsub,"a");
    fprintf(su," 40");
    fclose(su);
    su=fopen(fsub,"r");
    fscanf(su,"%d",&num);
    if(num==0)
    {
        printf("Sorry all the seats are booked, try another subject\n");
        Sleep(1000);
        goto topad;
    }
wrongchoice:
    printf("\nRemaining seats in %s are %d\n",sub,num);
    printf("\nDo you want to add this subject:\n");
    printf("1 for yes\n2 for cancel\nEnter your choice: ");
    fflush(stdin);
    scanf("%c",&q2);
    if(q2=='1')
    {
        fl=fopen(oid,"a");

        fprintf(fl,"\n%s",sub);
        fclose(fl);


        FILE *na;
        strcat(nsub,"name.txt");
        na=fopen(nsub,"a");
        fprintf(na,"\n%s",id);
        fprintf(na," %s",pname);
        fclose(na);
        printf("%S added successfully\n",sub);

        Sleep(500);
        su=fopen(fsub,"w");
        fprintf(su,"%d",num-1);
        fclose(su);
    }
    else if(q2=='2')
    {
        return 0;
    }
    else
    {
        printf("\nEnter wrong option !!!");
        Sleep(1000);
        NSU();
        goto wrongchoice;

    }
    NSU();
    printf("Do you want to add more subject?\n1 : yes \n2 : no\nEnter your choice: ");
    fflush(stdin);
    scanf("%c",&q1);
    if(q1=='1')
    {
        goto topad;
    }
}

int admin()
{

    int user,code,x;
    char e;
    NSU();
    printf("Enter Your Activation Key = " );
    scanf("%d",&user);
    FILE *fl;
    fl=fopen("D:\\_log.xtl","r");
    fscanf(fl,"%d",&code);
    fclose(fl);
    code=code+9876;

    for(x=1; x<=3; x++)
    {

        NSU();
        printf("Loging in.");
        Sleep(100);
        NSU();
        printf("Loging in..");
        Sleep(100);
        NSU();
        printf("Loging in...\n");
        Sleep(100);
        NSU();
    }



    if(code==user && code!=0)
    {
        fl=fopen("D:\\_log.xtl","w");
        fprintf(fl,"0");

        char q1,id[11];

        printf("Welcome Login successful \n");
tpanel:
        printf("1 for new id\n2 for advising\n3 for subject view\n4 for logout\n");
        printf("Enter your choice : ");
        fflush(stdin);
        scanf("%c",&q1);
        if(q1=='1')
        {
            creat();
        }
        else if(q1=='2')
        {
            char r[11],fr[11],oid[15];
            printf("Enter student roll : ");
            fflush(stdin);
            scanf("%s",&r);
            FILE *fl;
            fl=fopen("sid.txt","a+");
            fclose(fl);
            fl=fopen("sid.txt","r");
            int count=0,x,fn=0;
            while(1)
            {
                fscanf(fl,"%s",&fr);
                count=0;
                for(x=0; x<=9; x++)
                {
                    if(fr[x]!=r[x])
                    {
                        count++;
                        break;
                    }
                }
                if(count==0)
                {
                    fn=1;
                    break;
                }
                if(feof(fl))
                {
                    break;
                }


            }
            fclose(fl);


            if(fn==1)
            {
                NSU();
                printf("Account found\n");
                strcpy(oid,r);
                strcat(oid,".txt");

                fl=fopen(oid,"r");
                char name[50],pname[50],subs[10];
                fscanf(fl,"%s",&name);
                strcpy(pname,name);
                int len,x,fpass,pass;
                len=strlen(name);
                for(x=0; x<len; x++)
                {
                    if(name[x]==',')
                    {
                        name[x]=' ';
                    }
                }
                printf("name %s\n",name);
                printf("pass : ");
                fscanf(fl,"%s",&subs);
                printf("%s\n",subs);

                printf("subjects:\n");
                while(1)
                {

                    fscanf(fl,"%s",&subs);
                    printf("%s\n",subs);


                    if(feof(fl))
                    {
                        break;
                    }

                }
                printf("1 for continue\n2 for cancel\nEnter your choice:");
                char q2;
                fflush(stdin);
                scanf("%c",&q2);
                if(q2=='1')
                {
                    advising(r,oid,pname);
                    NSU();
                    goto tpanel;
                }
                else if(q2=='2')
                {
                    NSU();
                    goto tpanel;

                }
                else
                {

                    printf("wrong action!!!");
                    Sleep(1000);
                    NSU();
                    goto tpanel;
                }



            }
            else
            {

                printf("ID not found!!!");
                Sleep(1000);
            }

        }
        else if(q1=='3')
        {
            subview();
        }
        else if(q1=='4')
        {
            return 0;
        }

        NSU();
        goto tpanel;



    }
    else
    {
        printf("wrong keyword.");
        Sleep(1000);
    }

}

int student()
{
stu:
    NSU();
    int count=0,x,fn=0;
    char r[11],fr[11],oid[15];
    printf("Enter student roll : ");
    scanf("%s",&r);
    FILE *fl;
    fl=fopen("sid.txt","a+");
    fclose(fl);
    fl=fopen("sid.txt","r");
    while(1)
    {
        fscanf(fl,"%s",&fr);
        count=0;
        for(x=0; x<=9; x++)
        {
            if(fr[x]!=r[x])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            fn=1;
            break;
        }
        if(feof(fl))
        {
            break;
        }


    }
    fclose(fl);

    if(fn==1)
    {
        NSU();
        printf("Account found\n");
        strcpy(oid,r);
        strcat(oid,".txt");

        fl=fopen(oid,"r");
        char name[50],pname[50];
        fscanf(fl,"%s",&name);
        strcpy(pname,name);
        int len,x;
        char fpass[8],pass[9];
        len=strlen(name);
        for(x=0; x<len; x++)
        {
            if(name[x]==',')
            {
                name[x]=' ';
            }
        }
        printf("Welcome %s\n",name);
        printf("Enter pass : ");
        // scanf("%d",&pass);
        char ch;
        for(x=0; x<8; x++)
        {
            ch=getch();
            printf("*");
            pass[x]=ch;
        }
        pass[x]='\0';
        fscanf(fl,"%s",&fpass);
        for(x=1; x<=3; x++)
        {
            NSU();
            printf("Loging in");
            Sleep(100);
            NSU();
            printf("Loging in.");
            Sleep(100);
            NSU();
            printf("Loging in..");
            Sleep(100);
            NSU();
            printf("Loging in...\n");
            Sleep(100);
        }
        char s1;

        if(strcmp(pass,fpass)==0)
        {

stpanel:
            NSU();

            printf("Login Successful\n");
            printf("1 for subject review\n2 for advising\n3 for view your subjects\n4 for logout\nEnter your choice: ");
            fflush(stdin);
            scanf("%c",&s1);
            if(s1=='1')
            {
                review();
            }
            else if(s1=='2')
            {
                fclose(fl);
                advising(r,oid,pname);
            }
            else if(s1=='3')
            {
                char subs[10];
                // fscanf(fl,"%s",&subs);
                while(1)
                {

                    fscanf(fl,"%s",&subs);
                    printf("%s\n",subs);


                    if(feof(fl))
                    {
                        break;
                    }

                }
                printf("press any key to continue...");
                getch();
                goto stpanel;

            }
            else if(s1=='4')
            {
                printf("LOGING OUT...");
                Sleep(1000);
                system("cls");
                return 1;
            }
            else
            {


                printf("wrong keyword!!!");
                Sleep(1000);


            }
            NSU();
            goto stpanel;
        }

        else
        {
            printf("wrong pass");
            Sleep(1000);
            goto stu;
        }
    }


    else
    {

        printf("sorry id not found!!!");
        Sleep(1000);

    }
}
void loading()
{
    // NSU();

    int i;
    system("color f3");
    printf("\n\n\n\n\t\t\t\t");
    Sleep(120);
    printf("L ");
    Sleep(120);
    printf("O ");
    Sleep(120);
    printf("A ");
    Sleep(120);
    printf("D ");
    Sleep(120);
    printf("I ");
    Sleep(120);
    printf("N ");
    Sleep(120);
    printf("G ");
    for(i=1; i<=5; i++)
    {
        Sleep(200);
        printf(".");
    }
    printf("\n\n");
    //system("cls");

    //printf("\n\nPress any key move forword...");
    //getch();
}
int main()
{
    system("color f3");
    loading();
    char choiceas;
top:
    NSU();
    int n;
    printf("1 for Admin\n2 for student\n3 for exit\nEnter your choice:");
    scanf("%c",&choiceas);

    if(choiceas=='1')
    {
        system("cls");
        admin();
    }
    else if(choiceas=='2')
    {
        student();

    }
    else if(choiceas=='3')
    {
        printf("Thank you");
        //exit("true");
    }
    else
    {
        printf("\nWrong keyword.\n try again");
        Sleep(500);
        system("cls");
        goto top;

    }
    goto top;
    return 0;
}

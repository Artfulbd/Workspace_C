
#include <stdio.h>
typedef struct customer
{
    char name[30];
    char phone[11];
    char Address [30];
} s;
int main ()

{
    s a;
    char file[100];
    printf("WELCOME TO ONLINE WEDDING SYSTEM!\n");
    main:
    printf("1.WEDDING \n\n2.DECORETOR\n\n3.Exit\n\n");
    printf("Chose your option: ");
    int j,dd,mm,yy, c,t,p,s, tp=3000;
    scanf("%d",&j);
    if(j==2)
    {
        system("cls");
        printf("Which Date you Want to book:\n");
        FILE *fn=fopen("date.txt","r");
        int m,date,year;
date:
ndate:
        printf("DATE: ");
        scanf("%d",&date);
        if(date>31 || date<0 )
        {
            system("cls");
            printf("Date is wrong!\n Enter again.\n");
            goto date;
        }
        else
        {
            printf("MONTH: ");
month:
            scanf("%d",&m);
            if(m>12 || m<1)
            {
                system("cls");
                printf("Month is wrong!\n Enter again.\n");
                goto month;
            }
            else
            {

                printf("YEAR: ");
                scanf("%d",&year);
            }

        }
        while(1)
        {
            if(feof(fn))
            {
                break;
            }
            fscanf(fn,"%d",&dd);
            fscanf(fn,"%d",&mm);
            fscanf(fn,"%d",&yy);
            fscanf(fn,"%d ",&c);
            fscanf(fn,"%d ",&t);
            fscanf(fn,"%d ",&p);
            fscanf(fn,"%d\n",&s);
            fflush(stdin);
            fscanf(fn,"%s\n",a.name);
            fflush(stdin);
            fscanf(fn,"%s\n",a.phone);
            fflush(stdin);
            fscanf(fn,"%s\n\n",a.Address);
            if(dd==date && mm==m && yy==year)
            {
                system("cls");
                printf("Sorry sir,this day had been booked!\n");
                printf("Please enter another date\n");
                goto ndate;
            }
        }
        fclose(fn);
        system("cls");
        printf("ITEMS            PRICE (Taka)\n");
        printf("Booking           3000 \n");
        printf("Chair              150\n");
        printf("Table              250\n");
        printf("Plate               50\n");
        printf("Spoon               20\n");
        printf("\nHow many chair do you want: ");
        scanf("%d",&c);
        c*=150;
        printf("\nHow many table do you want: ");
        scanf("%d",&t);
        t*=250;
        printf("\nHow many plate do you want: ");
        scanf("%d",&p);
        p*=50;
        printf("\nHow many spoon do you want: ");
        scanf("%d",&s);
        s*=20;
        tp=c+t+p+s;
cho:
        printf("\n Including booking charge, your cost is: %d",tp);
        printf("\n Do you want to save or exit? ..        (For exit press 0, for save press 1)\n");
        printf(" ");
        dd=0;
        scanf("%d",&dd);
        if(dd==0)
        {
            system("cls");
            goto main;
        }
        else if(dd==1)
        {
            system("cls");
            printf("\n  Your total cost is: %d",tp);
            printf("\nEnter name: ");
            fflush(stdin);
            gets(a.name);
            printf("Enter phone number: ");
            fflush(stdin);
            gets(a.phone);
            printf("Enter address: ");
            fflush(stdin);
            gets(a.Address);
            if((fn=fopen("date.txt","a+"))!=NULL)
            {
                fprintf(fn,"%d ",date);                    ///m,date,year
                fprintf(fn,"%d ",m);
                fprintf(fn,"%d\n",year);
                fprintf(fn,"%d ",c);
                fprintf(fn,"%d ",t);
                fprintf(fn,"%d ",p);
                fprintf(fn,"%d\n",s);
                fprintf(fn,"%s\n",a.name);
                fprintf(fn,"%s\n",a.phone);
                fprintf(fn,"%s\n\n",a.Address);
                fclose(fn);
                system("cls");
                printf("\n Reservation confirmed. Thanks for using ..\n");
                goto main;

            }
        }
        else
        {
            printf("You Entered wrong, Please enter write choice\n");
            goto cho;
        }
    }
    else if(j==1)
    {
        printf("Welcome to wedding system.\n");
        printf("1.Male\n2.Female\n");
        int h;
        scanf("%d",&h);
        FILE*f;
        char nlist[30];
        if(h==1)
        {
            f=fopen("male.txt","r");
            while(1)
            {
                if(feof(f))
                {
                    break;
                }
                fflush(stdin);
                fgets(nlist,30,f);
                puts(nlist);
            }
            fclose(f);
            FILE *nde;
            int maa;
            scanf("%d",&maa);
            char det[100];
            if(maa==1)
            {
                nde=fopen("hosne.txt","a+");
            }
            else if(maa=2)
            {
                nde=fopen("jafar.txt","a+");
            }
            else if(maa=3)
            {
                nde=fopen("anisul.txt","a+");
            }
            while(1)
            {
                if(feof(nde))
                {
                    break;
                }
                fgets(det,100,nde);
                puts(det);
            }


        }
        else
        {
            char fmale[30];
            f=fopen("female.txt","r");
            while(1)
            {
                if(feof(f))
                {
                    break;
                }
                fflush(stdin);
                fgets(fmale,30,f);
                puts(fmale);
            }
            fclose(f);
            FILE *fml;
            int fm;
            scanf("%d",&fm);
            char de[100];
            if(fm==1)
            {
                fml=fopen("Jarin.txt","a+");
            }
            else if(fm==2)
            {
                fml=fopen("prova.txt","a+");
            }
            while(1)
            {
                if(feof(fml))
                {
                    break;
                }
                fflush(stdin);
                fgets(de,100,fml);
                puts(de);
            }
        }
    }
    else if(j==3)
    {
        system("cls");
        printf("\n\t  ----# Thanks for using #----\n");
        return 0;
    }
    else
    {
        system("cls");
        printf("You entered a wrong key");
        goto main;
    }
    return 0;
}

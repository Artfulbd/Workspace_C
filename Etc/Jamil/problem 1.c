#include <stdio.h>
struct customer
{
    char name[30];
    char phone[11];
    char Address [30];
};
int main ()

{


    static int rr[2];

    char file[100];
    printf("WELCOME TO ONLINE WEDDING SYSTEM!\n");
    printf("1.WEDDING \n\n2.DECORETOR\n\n");
    printf("Chose your option: ");




    int j;
    int tprice=0;
    scanf("%d",&j);
    if(j==2)
    {
        printf("Which Date you Want to book:\n");
        FILE*fk=fopen("date.txt","a+");
        int m;
        int date;
        int year;
        printf("DATE:\n");
        scanf("%d",&date);
        if(date>31 || date<0 )
        {
            printf("Date is wrong!");
            return 0;
        }
        else
        {
            printf("MONTH:\n");
            scanf("%d",&m);
            if(m>12 || m<1)
            {
                printf("month is wrong!");
                return 0;
            }
            else
            {

                printf("YEAR:\n");
                scanf("%d",&year);
            }

        }




        FILE*fn;
        fn=fopen("date.txt","r");
        int dd;
        int mm;
        int yy;
        int fl=0;
        while(1)
        {
            if(feof(fn))
            {
                break;
            }
            fscanf(fn,"%d",&dd);
            fscanf(fn,"%d",&mm);
            fscanf(fn,"%d",&yy);
            //printf("hello");
            // printf("%d\n",dd);
            if(dd==date && mm==m && yy==year)
            {
                printf("Sorry sir,this day had been booked!");
                fl=1;
            }



        }


        fclose(fn);

        if(fl!=1)
        {

            FILE*fp=fopen("dec.txt","r");

            printf("ITEMS           PRICE\n");
            while (1)
            {
                if (feof(fp))
                {
                    break;
                }
                fgets(file,100,fp);
                puts(file);
            }
            FILE *ftr=fopen("price.txt","r");
            static int pr[10];
            int i=0;

            while(1)
            {
                if(feof(ftr))
                {
                    break;
                }
                fscanf(ftr,"%d",&pr[i]);

                i++;
            }
            //fclose(ftr);
            while(1)
            {
                int k;
                printf("1st Choose these item\n");
                scanf("%d",&k);
                // printf("%d\n",pr[k-1]);
                int q;
                printf("Quantity:");
                scanf("%d",&q);

                tprice+=q*pr[k-1];

                printf("1.MORE\n\n2.END\n");
                int y;
                scanf("%d",&y);
                if(y==2)
                {
                    break;
                }
                else continue;


            }


            printf("Total price %d\n",tprice);
            fprintf(fk,"%d\n",date);
            fprintf(fk,"%d\n",m);
            fprintf(fk,"%d\n",year);
            fclose(fk);
            //fclose(ftr);





            struct customer n;
            FILE *fna=fopen("custom.txt","a+");
            printf("Enter your name:");
            fflush(stdin);


            gets(n.name);
            printf("Enter phone number\n");
            gets(n.phone);
            fprintf(fna,"%s\n",n.name);
            fprintf(fna,"%s\n",n.phone);

            // fprintf(fk,"%d\n",date);
            // fprintf(fk,"%d\n",m);
            //  fprintf(fk,"%d\n",year);

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
                fgets(de,100,fml);
                puts(de);
            }
        }
    }

    else
    {
        printf("You enterd a wrong key");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
struct MovieStar
{
    char name [20];
    float rate;
    int fans;
};
main()
{
    struct MovieStar m[5],r,c[5];
    strcpy(m[0].name,"Tango khan");
    strcpy(m[1].name,"Roy kumar");
    strcpy(m[2].name,"Kamina bacchan");
    strcpy(m[3].name,"Gajab hasmi");
    strcpy(m[4].name,"Brown kanth");
    int n,i,j,s[5];
    float t=0.0;
    printf("How many users?..: ");
    scanf("%d",&n);
    for(i=0; i<5; i++)
    {
        m[i].fans=0;
        m[i].rate=0.0;
    }
    for(i=0; i<n; i++)
    {
        printf("..Tango khan, Roy kumar, Kamina bacchan,Gajab hasmi or Brown kanth..\n");
        printf("\tUser no.%d\n  Who is your Favorite movie star?.: ",i+1);
        fflush(stdin);
        gets(r.name);
        printf("How much you will give him on 10(rating): ");
        scanf("%f",&r.rate);
        for(j=0; j<5; j++)
        {
            if(strcmp(m[j].name,r.name)==0)
            {
                m[j].rate+=r.rate;
                m[j].fans++;
                continue;
            }
        }
        puts(" ");
    }
    for(i=0; i<5; i++)
    {
        c[i]=m[i];
        m[i].rate=m[i].rate/(float)m[i].fans;
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1; i<5; j++)
        {
            if(m[i].rate<m[j].rate)
            {
                t=m[i].rate;
                m[i].rate=m[j].rate;
                m[j].rate=t;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(m[i].rate==c[j].rate)
            {
                fflush(stdin);
                printf("  No.%d movie star is: %s",j+1,c[j].name);
                printf("\n  Rating: %f\n  Fans: %d \n\n",c[j].rate,c[j].fans);
                //continue;
            }
        }
    }
    puts(" ");


}

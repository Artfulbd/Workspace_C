#include<stdio.h>
typedef struct stu
{
    char n[25];
    char i[25];
    char c[25];
}s1;
void read(int );
void write(s1 s[], int);
main()
{
    int n, i;
    printf("\n  Enter how many number do you want: ");
    scanf("%d",&n);
    s1 a [n];
    for(i=0;i<n;i++)
    {
        printf("\n\n For number %d",i+1);
        printf("\n Enter name: ");
        fflush(stdin);
        scanf("%[^\n]s",a[i].n);
        printf(" Enter ID: ");
        fflush(stdin);
        scanf("%[^\n]s",a[i].i);
        printf(" Enter CGPA: ");
        fflush(stdin);
        scanf("%[^\n]s",a[i].c);
    }
    write( a , n );
    read( n );
}
void write(s1 s[], int n)
{
    int i;
    FILE *fp;
    if((fp=fopen("test.txt","w"))!=NULL)
    {
        for(i=0;i<n;i++)
        {
            fprintf(fp,"%s\n",s[i].n);
            fprintf(fp,"%s\n",s[i].i);
            fprintf(fp,"%s\n\n",s[i].c);
        }
        fclose(fp);
        puts("\n  All written successfully ");
    }
    else
    {
        printf("\n\n Error int file writing..!!!");
    }
}
void read(int n)
{
    int i;
    FILE *fp;s1 a[n];
    if((fp=fopen("test.txt","r"))!=NULL)
    {
        puts("\n");
        for(i=0;i<n;i++)
        {
            printf("\n For %d",i+1);

            fflush(stdin);
            fscanf(fp,"%[^\n]s\n",a[i].n);
            printf("\n Name is: %s\n",a[i].n);

            fflush(stdin);
            fscanf(fp,"\n%[^\n]s",a[i].i);
            printf(" Id is: %s\n",a[i].i);

            fflush(stdin);
            fscanf(fp,"\n%[^\n]s\n",a[i].c);
            printf(" CGPA is: %s\n",a[i].c);
        }
        fclose(fp);
    }
    else
    {
        printf("\n  Error in reading..!!! ");
    }
}

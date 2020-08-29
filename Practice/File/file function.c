#include<stdio.h>
typedef struct input
{
    char n[20];
    int num;
} in;

void write(in a[],int size);
void read(int size);
main()
{
    in a[3];
    /*int i;
    for(i=0; i<3; i++)
    {
        printf("__No.%d\n",i+1);
        fflush(stdin);
        printf("Enter name: ");
        gets(a[i].n);
        fflush(stdin);
        printf("Enter phone number: ");
        scanf("%d",&a[i].num);
    }*/
    //write(a,3);
    read(3);
}

void write(in a[],int size)
{
    int i;
    FILE *fp;
    if((fp=fopen("Contact.txt","w"))==NULL)
    {
        puts("Error creating file..!!!");
    }
    else
    {
        for(i=0; i<size; i++)
        {
            fputs(a[i].n,fp);
            fprintf(fp,"\n%d\n\n",a[i].num);
        }
        fclose(fp);
    }
}

void read(int s)
{
    int i;
    in q[s];
    FILE *fp;
    if((fp=fopen("Contact.txt","r"))==NULL)
    {
        printf("File does not exist.!!");
    }
    char t[20];
    for(i=0; i<s; i++)
    {
        printf("__No.%d\n",i+1);
        fgets(q[i].n,10,fp);
        //fgets(t,10,fp);
        printf("Name: %s\n",q[i].n);
        //printf("Name2: %s",t);
        fscanf(fp,"%d ",&q[i].num);
        printf("Contact Number: %d\n",q[i].num);
    }
    fclose(fp);
}


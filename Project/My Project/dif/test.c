#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct num
{
    char n[20];
    int id, s;
} c;
main()
{
    int i,j,l,t=3,a=0;
    c ar[t],arr[t];
    for(i=0; i<t; i++)
    {
        fflush(stdin);
        printf("\n Enter name for %d: ",i+1);
        scanf("%[^\n]s",ar[i].n);
        printf(" Enter ID: ");
        scanf("%d",&ar[i].id);
        printf(" Enter Salary: ");
        scanf("%d",&ar[i].s);
    }
    system("cls");
    for(i=0; i<t; i++)
    {
        strcpy(arr[i].n,ar[i].n);
        arr[i].id=ar[i].id;
        arr[i].s=ar[i].s;
    }
    printf("\n\tPrinting\n");
    for(i=0; i<t; i++)
    {
        printf("\n\n Name of %d is %s",i+1,arr[i].n);
        printf("\n ID: %d",arr[i].id);
        printf("\n Salary: %d",arr[i].s);
    }
    for(i=0; i<t; i++)
    {
        for(j=i+1; j<t; j++)
        {
            if(arr[i].s<arr[j].s)
            {
                a=arr[i].s;
                arr[i].s=arr[j].s;
                arr[j].s=a;
            }
        }
    }
    printf("\n\t Top salary is %d ",arr[0].s);
    for(i=0; i<t; i++)
    {
        if(arr[0].s==ar[i].s)
        {
            l=i;
            break;
        }
    }
    printf("\n\n  Highest salary holder is %s",ar[l].n);
    printf("\n  His ID: %d",ar[l].id);
    printf("\n  SALARY: %d",ar[l].s);
    FILE *fp;
    if((fp=fopen("new.txt","w"))==NULL)
    {
        printf("\n Error in writing..!!!");
    }
    else
    {
        fprintf(fp,"%s\n",ar[l].n);
        fprintf(fp,"%d\n",ar[l].id);
        fprintf(fp,"%d\n\n",ar[l].s);
        printf("\n  File successfully written.!");
        fclose(fp);
    }
    char na[20];
    int id1,s2;
    if((fp=fopen("new.txt","r"))==NULL)
    {
        printf("\n Error in writing..!!!");
    }
    else
    {
        printf("\n\n Printing from file.");
        fscanf(fp,"%s\n",na);
        printf("\n\n  Highest salary holder is %s",na);
        fscanf(fp,"%d\n",&id1);
        printf("\n  His ID: %d",id1);
        fscanf(fp,"%d\n\n",&s2);
        printf("\n  SALARY: %d",s2);
        fclose(fp);
    }
}

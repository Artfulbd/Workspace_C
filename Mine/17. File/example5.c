#include<stdio.h>
struct person
{
    char name[50];
    int height;
};

void writeInFile(struct person p[],int size);
void readFromFile();
int main()
{
    struct person a[2];
    int i;

    for(i=0; i<2; i++)
    {
        printf("Enter name: ");
        gets(a[i].name);
        fflush(stdin);
        printf("Enter height:");
        scanf("%d",&a[i].height);
        fflush(stdin);

    }
    writeInFile(a,2);

    readFromFile();
}

void writeInFile(struct person p[],int size)
{
    FILE *fp;
    int i;
    fp= fopen("person.txt","w");
    if(fp!=NULL)
    {

        for(i=0; i<size; i++)
        {
         fprintf(fp,"%s\n ",p[i].name);
         fprintf(fp,"%d\n ",p[i].height);
         //fwrite(&p[i],sizeof(p[i]),1,fp);

        }
        printf("Successfully added........................\n");
        fclose(fp);

    }
    else
    {
        printf("Cant open file! \n");
    }
}

void readFromFile( )
{
    struct person q[2];
    int j;
    FILE *fp=fopen("person.txt","r");
    if(fp!=NULL)
    {
        for(j=0; j<2; j++)
        {
            fscanf(fp,"%[^\n]s ",q[j].name); //put a space after %s
            //fgets (q[j].name, 100, fp);
            printf("Student %d name: %s\n",j+1,q[j].name);
            fscanf(fp,"%d ",&q[j].height); //put a space after %d
            printf("Student %d height: %d\n",j+1,q[j].height);
        }


        fclose(fp);
    }
    else{

        printf("Cannot open file!!\n");
    }
}

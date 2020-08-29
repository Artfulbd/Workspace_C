#include <Stdio.h>
#include<string.h>
main()
//solve it
{
    FILE *fp;
    char n1[20], n2[20];
    int i1,i2;
    float c1,c2;
    if((fp=fopen("file.txt","w"))==NULL)
    {
        printf("\n Error..! File file does not exists .");
    }
    puts("Enter your name: ");
    gets(n1);
    fprintf(fp,"%s\n",n1);
    printf("enter your ID:\n");
    scanf("%d",&i1);
    fprintf(fp,"%d\n",i1);
    printf("enter CGPA: ");
    scanf("%f",&c1);
    fprintf(fp,"%f\n",c1);
    fclose(fp);


    if((fp=fopen("file.txt","r"))==NULL)
    {
        printf("Error..!!! file not found.");
    }
    fgets(n2,sizeof(n1),fp);
    //fscanf (fp, "%[^\n]s", n2);
    fscanf(fp, "%d ",&i2);
    fscanf(fp,"%f ",&c2);
    printf("Your name is :%s\n ID: %d\n CGPA:%.2f\n\n",n2,i2,c2);
    fclose(fp);
}


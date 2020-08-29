#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
main()
{

    system("color f3");
    int gb;
    FILE *z;
    z=fopen("sup.txt","a");
    fprintf(z," 10");
    fclose(z);
    z=fopen("sup.txt","r");
    fscanf(z,"%d",&gb);
    fclose(z);
    int active,u,p,pass,x,tm=0;

    printf("\n\n\n\n\t\t\t\tEnter pass: ");
    scanf("%d",&pass);

    if(pass == 45)
    {

        printf("\n\n\t\t\t\tPassword Match\n");
        for(x=1;x<=gb-1;x++)
        active=rand();


        gb=gb+20;
        z=fopen("sup.txt","w");
        fprintf(z,"%d",gb);
        fclose(z);



        printf("\n\n\t\t\tyour activition key: %d",active);

        z=fopen("D:\\_log.xtl","w");
        active=active-9876;
        fprintf(z,"%d",active);
        fclose(z);
    }

    else
    {

        printf("Password not match\nSorry try again");
    }

    getch();
}


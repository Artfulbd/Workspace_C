//array of structure
#include <stdio.h>
struct NSU
{
    char name[30];
    int ID;
    char dept[10];
    float CGPA;
};

main()
{

    struct NSU s[3];
    int i;
    for(i=0;i<3;i++)
    {
        fflush(stdin);
        printf("Enter name, id, dep,CGPA for \"%d\" -\n",i+1);
        scanf("%s%d%s%f",s[i].name,&s[i].ID,s[i].dept,&s[i].CGPA);
    }


    printf("\n--------- Student Details ------------\n");

    for(i=0; i<3; i++)
    {
        printf("\nName of the student: %s",s[i].name);
        printf("\nStudent ID: %d",s[i].ID);
        printf("\nName of the Department: %s",s[i].dept);
        printf("\nCGPA: %.2f",s[i].CGPA);
        printf ("\n \n");
    }
}

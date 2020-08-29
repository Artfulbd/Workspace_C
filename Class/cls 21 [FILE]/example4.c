#include <stdio.h>
void main()
{
    FILE *new;
    char name[20];
    char name1[20];
    int ID;
    int ID1;
    float CGPA;
    float CGPA1;

    /*  open for writing */
    new = fopen("student.txt", "w");

    if (new == NULL)
    {
        printf("File does not exists \n");
    }
    printf("Enter the name \n");
    gets (name);
    //scanf("%[^\n]s", name);
    fprintf(new, "%s\n", name);
    printf("Enter the ID\n");
    scanf("%d", &ID);
    fprintf(new, "%d\n", ID);
    printf("Enter the CGPA\n");
    scanf("%f", &CGPA);
    fprintf(new, "%.2f\n", CGPA);
    fclose(new);

    new = fopen ("student.txt","r");
    if (new == NULL)
    {
        printf ("\nError. No file found.");
    }

    fscanf (new, "%[^\n]s", name1);
    fscanf (new, "%d ", &ID1);
    fscanf (new, "%f ", &CGPA1);
    printf ("Name:%s ID:%d CGPA:%.2f",name1,ID1,CGPA1);
    fclose(new);
}

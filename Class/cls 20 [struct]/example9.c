//structure pointer
#include <stdio.h>
int main()
{
    struct NSU
    {
        char name[20];
        int ID;
        char dept[20];
        float CGPA;
    };
    struct NSU student, *ptr;
    ptr = &student;
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("\nEnter id: ");
    scanf("%d", &ptr->ID);
    printf("\nEnter Department: ");
    scanf("%s", &(*ptr).dept); //alternate representation of (->)
    printf("\nEnter CGPA: ");
    scanf("%f", &(*ptr).CGPA); //alternate representation of (->)
    printf("\n");


    printf("\n--------- Student Details ------------\n");

    printf("\nName of the student: %s",ptr->name);
    printf("\nStudent ID: %d",ptr->ID);
    printf("\nName of the Department: %s",ptr->dept);
    printf("\nCGPA: %.2f",(*ptr).CGPA);//alternate representation of (->)
    printf ("\n \n");

    return 0;
}

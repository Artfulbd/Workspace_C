//call by reference
#include <stdio.h>
struct NSU
{
    char *name;
    int ID;
    char *dept;
    float CGPA;
} student;
void info (struct NSU *st);
int main()
{
    int x = 101;
    float y = 4.00;
    student.name = "nil shagor";
    student.ID = x;
    student.dept = "CSC";
    student.CGPA = y;
    info (&student);
    printf("\nInside main\nStudent ID: %d",student.ID);
    return 0;
}

void info (struct NSU *st)
{

    printf("\n--------- Student Details ------------\n");

    printf("\nName of the student: %s",st->name);
    printf("\nStudent ID: %d",st->ID);
    printf("\nName of the Department: %s",st->dept);
    printf("\nCGPA: %.2f",(*st).CGPA);
    printf ("\n \n");
    st->ID = 202; //changing the ID using pointer
}


//call by value, passing a member only
#include <stdio.h>
struct NSU
{
    char *name;
    int ID;
    char *dept;
    float CGPA;
} student;
void info (int st);
int main()
{
    int x = 101;
    float y = 4.00;
    student.name = "nil shagor";
    student.ID = x;
    student.dept = "CSC";
    student.CGPA = y;
    info (student.ID);
    return 0;
}

void info (int st)
{
    printf("\n--------- Student Details ------------\n");
    printf("\nStudent ID: %d",st);
    printf ("\n \n");
}

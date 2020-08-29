//nested structure
#include <stdio.h>
int main ()
{
    struct student
    {
        char *name;
        int ID;
        char *dept;
    };
    struct term
    {
        char *semester;
        int credit;
        struct student st1;
        float CGPA;
    };
    struct term t1;

    t1.semester = "summer";
    t1.credit = 12;
    t1.st1.name= "nil shagor";
    t1.st1.ID =1234;
    t1.st1.dept = "csc",
    t1.CGPA = 4.00;
    printf ("\nYou have entered: %s %d %s %d %s %.2f\n", t1.semester, t1.credit,t1.st1.name,t1.st1.ID,t1.st1.dept,t1.CGPA);
    return 0;
}

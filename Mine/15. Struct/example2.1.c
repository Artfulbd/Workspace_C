#include <stdio.h>
#include <string.h>
//structure outside main (like global variable)
struct student
{
    char name[30];
//char *name;
    int ID;
    char *dept;
    float CGPA;
};
int main ()
{
    struct student st1;
    strcpy (st1.name, "nil sagor");
//st1.name = "nil sagor";
    st1.ID = 1234;
    st1.dept = "CSE";
    st1.CGPA = 4.00;
    printf ("\n %s %d %s %.2f\n", st1.name,st1.ID,st1.dept,st1.CGPA);
    return 0;
}

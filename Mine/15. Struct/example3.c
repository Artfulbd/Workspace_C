//structure inside main
#include <stdio.h>
int main ()
{

    struct student
    {
        char *name;
        int ID;
        char *dept;
        float CGPA;
    } st1 = {"nil shagor", 1234, "CSE", 4.00};
    printf ("\nYou have entered: %s %d %s %.2f\n", st1.name,st1.ID,st1.dept,st1.CGPA);
    return 0;
}

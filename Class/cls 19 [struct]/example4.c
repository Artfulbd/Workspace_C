//copying the value of two struct
#include <stdio.h>
int main ()
{
    struct student
    {
        char *name;
        int ID;
        char *dept;
        float CGPA;
    } st1 = {"nil shagor", 1234, "CSE", 4.00}, st2;
    st2 = st1;
    printf ("\nYou have entered: %s %d %s %.2f\n", st2.name,st2.ID,st2.dept,st2.CGPA);
    return 0;
}

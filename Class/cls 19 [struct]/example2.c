#include <stdio.h>
//structure outside main (like global variable)
struct student
{
    //shchar name [10];
char *name;
    int ID;
    char dept[10];
    float CGPA;
};

int main ()
{
//struct student st1 = {"nil shagor", 1234, "CSE", 4.00};
    struct student st1;
    printf ("\nEnter name, id, department and cgpa: \n");
    scanf ("%s %d %s %f", st1.name, &st1.ID, st1.dept,&st1.CGPA);
    printf ("You have entered: %s %d %s %.2f\n", st1.name,st1.ID,st1.dept,st1.CGPA);
    return 0;
}


//array of structure
#include <stdio.h>
struct NSU
{
    char *name;
    int ID;
    char *dept;
    float CGPA;
};

int main()
{
//struct NSU student [3] = {"Nil Shagor", 101, "CSC", 4.00, "zeba", 102, "CSC", 5.00, "toxis mun", 103, "CSC", 6.00};
    struct NSU student [3] = {{"Nil Shagor", 101, "CSC", 4.00}, {"zeba", 102, "CSC", 5.00}, {"toxis mun", 103, "CSC", 6.00}};
    int i;
    printf("\n--------- Student Details ------------\n");

    for(i=0; i<3; i++)
    {
        printf("\nName of the student: %s",student[i].name);
        printf("\nStudent ID: %d",student[i].ID);
        printf("\nName of the Department: %s",student[i].dept);
        printf("\nCGPA: %.2f",student[i].CGPA);
        printf ("\n \n");
    }
    return 0;
}

//by using typedef
#include <stdio.h>
typedef struct student
{
    char name [10];
    int ID;
    char dept [10];
    float CGPA;
} p;
int main ()
{
    p nilshagor;
    printf ("\nThe size of the structure is: %d %d %d %d %d\n", sizeof(nilshagor.name), sizeof (nilshagor.ID), sizeof (nilshagor.dept), sizeof (nilshagor.CGPA), sizeof (nilshagor));
    return 0;
}

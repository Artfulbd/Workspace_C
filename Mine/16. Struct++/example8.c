//array of structure
#include <stdio.h>
int main(){
struct NSU{
      char name[20];
      int ID;
      char dept[20];
      float CGPA;
      int phonenumber [3];
}student [3];
int i;
for(i=0;i<3;++i)
    {
        printf("Enter name: ");
        gets (student[i].name);
        //scanf("%s", &student[i].name); //doesnt matter whether we use & or not
        fflush(stdin);
        printf("\nEnter id: ");
        scanf("%d", &student[i].ID);
        fflush(stdin);
        printf("\nEnter Department: ");
        scanf("%[^\n]s", &student[i].dept); //overcome the scanf () problem
        fflush(stdin);
        printf("\nEnter CGPA: ");
        scanf("%f", &student[i].CGPA);
        fflush(stdin);
        printf("\nEnter no reason: ");
        scanf("%d", &student[i].phonenumber[i]);
        fflush(stdin);
        printf("\n");
    }
printf("\n--------- Student Details ------------\n");

for(i=0;i<3;i++)
    {
    printf("\nName of the student: %s",student[i].name);
    printf("\nStudent ID: %d",student[i].ID);
    printf("\nName of the Department: %s",student[i].dept);
    printf("\nCGPA: %.2f",student[i].CGPA);
    printf("\nno reason: %d",student[i].phonenumber[i]);
    printf ("\n \n");
    }
return 0;
}

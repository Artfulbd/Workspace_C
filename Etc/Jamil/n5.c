#include<stdio.h>
struct BarcelonaPlayer
{
    char name[20];
    int age;
    char country[20];
    char position[10];
    double salary;
    double rating;
};
void highestPaidPlayer(struct BarcelonaPlayer *p1,int size);
main()
{
    int n,i;
    printf("Enter how many players data do you want to input: ");
    scanf("%d",&n);
    struct BarcelonaPlayer p1[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name of player (no. %d): ",i+1);
        fflush(stdin);
        gets(p1[i].name);
        printf("Enter age: ");
        scanf("%d",&p1[i].age);
        printf("Enter Country: ");
        fflush(stdin);
        gets(p1[i].country);
        printf("Enter position: ");
        fflush(stdin);
        gets(p1[i].position);
        printf("Enter salary: ");
        scanf("%lf",&p1[i].salary);
        printf("Enter rating: ");
        scanf("%lf",&p1[i].rating);
        puts(" ");
    }
    highestPaidPlayer(p1,n);
}
void highestPaidPlayer(struct BarcelonaPlayer *p1,int size)
{
    int i,j;
    float h=0;
    struct BarcelonaPlayer p2[size];
    for(i=0;i<size;i++)
    {
        p2[i]=p1[i];
    }


    for(i=0;i<size;i++)
    {
        for(j=i+1;i<size;i++)
        {
            if(p1[i].salary<p1[j].salary)
            {
                h=p1[i].salary;
                p1[i].salary=p1[j].salary;
                p1[j].salary=h;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        if(p2[i].salary==p1[0].salary)
        {
        printf("Name: %s\n",p2[i].name);
        printf("Age: %d\n",p2[i].age);
        printf("Country: %s\n",p2[i].country);
        printf("Position: %s\n",p2[i].position);
        printf("Salary: %.2lf\n",p2[i].salary);
        printf("Rating: %.2lf\n\n",p2[i].rating);
        break;
        }
    }
}


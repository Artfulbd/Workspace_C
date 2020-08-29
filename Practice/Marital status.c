#include<stdio.h>
void main()
{
    char status;
    char gender;
    int age;
    printf("Enter your Marital status and gender: \n");
    scanf("%c %c",&status,&gender);
    printf("Enter your age: ");
    scanf("%d",&age);
    if(status=='S')
    {
        if(gender=='M')
        {
            if(age>=18&&age<26)
            {
                printf("All criteria are mate!\n");
            }
            else{printf("Sight age don't match.");}
        }
        else{printf("Gender don't match!");}
    }
    else
    {
        if(gender!='M')
        {
            printf("Sight! She is not single.\n");
        }
        else
        {
            printf("Sight! He is not single.\n");
        }
    }
}

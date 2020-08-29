#include <stdio.h>
void main()
{
    int a;
    printf("Enter your number : ");
    scanf("%d",&a);
    if(a>=90){
        printf("Your grade is A");}
        else if (a>=80&&a<90)
            {printf("Your grade is B!");}
        else if(a>=70&&a<80)
            {printf("Your grade is C!");}
        else if(a>=60 && a<70)
        {
            printf("Your grade is D!");
        }
        else{printf("Fail");}


}

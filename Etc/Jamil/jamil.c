#include<stdio.h>
void triangle(void);
void rectangle(void);
void inverted(void);
void face(void);
void rocket(void);
void male(void);
void female(void);
int i,j;
main()
{
    printf("\n");
    rocket();
    printf(" Rocket\n\n\n");
    male();
    printf("\n  Male\n\n\n");
    female();
    printf("\n Female\n\n");
}
void triangle()
{
    for(i=1;i<=4;i++)
     {
         for(j=1;j<=8;j++)
         {
             if((j==4&&i==1)||(i!=1&&j==4+i)||(i==2&&j==3)||(i==3&&j==2)||i==4)printf("*");

            else printf(" ");

         }
         printf("\n");
     }
}
void rectangle()
{
    for(i=0;i<5;i++)
     {
         for(j=0;j<6;j++)
         {
             if(j==0||(j==0&&i==0))
             {
               printf(" *");
             }
            else if(i==0||i==4||j==5) printf("*");
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
     }
}
void inverted()
{
    for(i=1;i<=4;i++)
     {
         for(j=1;j<=8;j++)
         {
             if((j==4&&i==1)||(i!=1&&j==4+i)||(i==2&&j==3)||(i==3&&j==2)||(i==4&&j==1))printf("*");

            else printf(" ");

         }
         printf("\n");
     }
}
void face()
{
    for(i=1;i<=4;i++)
     {
         for(j=1;j<=6;j++)
         {
             if((i==1||i==4)&&j==1)printf("  ");
             else if((i==1||i==4)&&(j==3||j==4))printf("*");
             else if((i==2||i==3)&&j==1)printf(" *");
             else if((i==2||i==3)&&j==6)printf("*");
             else printf(" ");
         }
         printf("\n");
     }
}
void rocket()
{
    triangle();
    rectangle();
    inverted();
}
void male()
{
    face();
    rectangle();
    inverted();
}
void female()
{
    face();
    triangle();
    inverted();
}


#include<stdio.h>
main()
{
 char name[20];
    printf("Enter name: ");
    int i;
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]<91 && name[i]>64)
        {
            name[i]=name[i]+32;
        }
    }
    printf("\n%s",name);
}

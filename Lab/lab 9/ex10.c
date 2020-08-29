#include<stdio.h>
void copy(char [], char [], int);
main()
{
    char str1[20],str2[20];
    printf("\nEnter a String: ");
    gets(str1);
    copy(str1,str2,0);
    printf("The second string is: %s\n",str2);
}
void copy(char str1 [], char str2 [], int i)
{
    str2[i]=str1[i];
    if(str1[i]=='\0')
    {
        return;
    }
    else
    {
        copy(str1,str2,i+1);
    }
}

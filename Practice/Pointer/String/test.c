#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10],str3[20];
    int len;

    printf("Enter String 1:");
    gets(str1);
    printf("Enter String 2:");
    gets(str2);

    len=strlen(str1);
    printf("The length of the string 1 is: %d\n", len);

    strcat(str1,str2);
    printf("%s\n",str1);

    strcpy(str3,str1);
    printf("%s",str3);

    return 0;
}

#include<stdio.h>
void Replace( char arr[], char oldChar, char newChar);
main()
{
    char arr[20],o,n;
    printf("Enter string: ");
    gets(arr);
    printf("Old char: ");
    o=getchar();
    printf("New char: ");
    fflush(stdin);
    n=getchar();
    Replace(arr,o,n);
}
void Replace( char arr[], char oldChar, char newChar)
{
    int i;
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==oldChar)
        {
            arr[i]=newChar;
        }
    }
    printf("Modified string: ");
    puts(arr);
}

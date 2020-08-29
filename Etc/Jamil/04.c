///String reverse without lib. function
#include<stdio.h>
void reverse(char arr[]);
main()
{
    char arr[20];
    printf("Enter string: ");
    gets(arr);
    reverse(arr);
}
void reverse(char arr[])
{
    char h;
    int c,i,j;
    for(c=0;arr[c]!='\0';c++);
    for(i=0,j=c-1;i<c/2;j--,i++)
    {
        h=arr[i];
        arr[i]=arr[j];
        arr[j]=h;
    }
    printf("Reverse order: ");
    puts(arr);
}

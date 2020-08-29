#include<stdio.h>
void reverse(char ar []);
main()
{
    char a[15];
    printf("Enter string: ");
    gets(a);
    reverse(a);
}
void reverse(char a [])
{
    int i,j,c;
    char h;
    for(c=0;a[c]!='\0';c++);
    for(i=0,j=c-1;i<c/2;j--,i++)
    {
        h=a[i];
        a[i]=a[j];
        a[j]=h;
    }
    printf("Reverse order: ");
    puts(a);
}

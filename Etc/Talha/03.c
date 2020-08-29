#include <stdio.h>
void search(char arr[],char key);
main()
{
    char s[30],c;

    printf(" Enter string: ");
    gets(s);
    printf("SEarch Key: ");
    scanf("%c",&c);
    search(s,c);

}
void search(char arr[],char key)
{
    int i,j=0;
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==key)
        {
            j=1;
            break;
        }

    }
    if(j==1)printf("\n  Found\n");

    else printf("\n  Not found\n");

}


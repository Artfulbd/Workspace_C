#include <stdio.h>
void print_r_array(char a[],int s);
main()
{
    int i,j,s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    char a[s],r[s];
    for(i=0;i<s;i++)
    {
        fflush(stdin);
        printf("Enter character at a[%d]: ",i);
        scanf("%c",&a[i]);
    }
    for(i=0,j=s-1;i<s;i++,j--)
    {
        r[j]=a[i];
    }
    print_r_array(r,s);
}
void print_r_array(char d[],int s)
{
    int i;
    printf("\n Reversed array: ");
    for(i=0;i<s;i++)
    {
        printf("%c  ",d[i]);
    }
}

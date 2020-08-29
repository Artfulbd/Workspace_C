#include <stdio.h>
#include <conio.h>
int search(int a[],int,int);
main()
{
    int s,i,f;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        printf("Enter elements at[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter a number to find: ");
    scanf("%d",&f);
    if(search(a,s,f)==1)
    {
        printf("Not found");
    }
    else{printf("Index number is: %d",search(a,s,f));}
}

int search(int a[],int s,int t)
{
    int i=0,f=0,w;
    system("cls");
    while(!f && i<s)
    {
        if(a[i]==t)
        {
            f=1;
        }
        else{i++;}
    }
    if(f)
    {
        w=i;
    }
    else{w=1;}
    return w;
}

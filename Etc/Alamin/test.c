#include<stdio.h>
#include<math.h>
#define pi 3.1416
main()
{
    char i;
    printf(" Enter a Character: ");
    scanf("%c",&i);
    int j=(int)i;
    if((j>=65&&j<=90)||(j>=97&&j<=122)) printf(" It is character.");
    else printf(" Wrong.!");


}

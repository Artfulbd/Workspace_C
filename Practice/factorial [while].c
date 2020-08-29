#include <stdio.h>
main()
{
   int s;
   long long int f=1;
   printf("Enter a number to factorial: ");
   scanf("%d",&s);
   while(s>1)
   {
       f*=s;
       s--;
   }
   printf("Factorial is: %lld",f);
}

#include <stdio.h>
int main(){
//one way
//*
    //char name[5] = {'a','b','x','e'} ;
      //char name[] = "abxe" ;
    char *name1 = "nil shagor"; //pointer notation
   printf("Your name is %s.",name1);
   putchar(name1[2]);


//another way

   char name [100];
   printf("\nEnter string: ");
   //scanf("%s",name); // space count
   //scanf("%[^\n]s",name); // space wont count
   gets(name);
   //printf("Your name is %s.", name);
   puts ("your name is");
   puts ("\n");
   puts (name);



//by pointer
/*
char name [100];
   printf("Enter string: ");
   gets(name);
char *p;
p= name;
puts (p);
*/
    return 0;
}

#include <stdio.h>
//binary file
int main()
{
   FILE *fp;
   char str[60];
   char str1[60];
   /* opening file for reading */
   fp = fopen("file.bin" , "wb");
   if(fp == NULL)
   {
      printf("Error opening file");
      return(-1);
   }
   fputs ("Hello World, hello hello world", fp);
    fclose(fp);

   fp = fopen("file.bin" , "rb");
   if(fp == NULL)
   {
      perror("Error opening file");
      return(-1);
   }
   if( fgets (str1,100, fp)!=NULL )
   {
      /* writing content to stdout */
      puts(str1);
   }
   fclose(fp);

   return(0);
}

#include <stdio.h>
#include <string.h>

main ()
{
   int ret;
   FILE *fp;
   char filename[] = "file.txt";

   fp = fopen(filename, "w");

   fprintf(fp, "%s", "This is tutorialspoint.com");
   fclose(fp);

    ret = remove(filename);

   if(ret == 0)
   {
      printf("File deleted successfully");
   }
   else
   {
      printf("Error: unable to delete the file");
   }

}

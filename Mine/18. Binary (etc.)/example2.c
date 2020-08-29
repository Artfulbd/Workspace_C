//writing structure in the file
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct info
{
  char name[20];
  int id;
  float cgpa;
};

int main()
{
   FILE *fp;
   //char* data;
   struct info s;


   if((fp= fopen("tceg.txt", "w")) == NULL) /* open file TEST.$$$ */
   {
      printf("Cannot open output file.\n");

   }
  strcpy (s.name,"nil sagor");
   s.id = 1234;
   s.cgpa = 4.00;
    fprintf(fp,"%s \n",s.name);
      fprintf(fp,"%d\n",s.id);
         fprintf(fp,"%f\n",s.cgpa);
   fclose(fp); /* close file */
FILE *new;
      new=fopen("tceg.txt","r");
      if (new == NULL){
    printf ("\nError. No file found.");
    }

      struct info s1;
      //fgets (s1.name,10,new);
      fscanf (new, "%[^\n]s",s1.name);
      fscanf (new, "%d ",&s1.id);
      fscanf (new, "%f ",&s1.cgpa);

  printf("\nThe data read from the file is :%s %d %f", s1.name, s1.id,s1.cgpa);
   fclose(fp);
   return 0;
}

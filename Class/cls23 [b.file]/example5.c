#include <stdio.h>
void main(){
   FILE *fp;
   int i = 0;
   fp = fopen("seek.txt","r");
  for (i=1;i<=10;i++){
       printf("%c : %d\n",fgetc(fp),ftell(fp));
       if (i == 5)
      rewind(fp);
   }
   fclose(fp);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
   FILE *fp;
   char line1[100];
   char line2[100];

   if (argc < 2) 
      fp = stdin;
   else  fp = fopen(argv[1],"rt");

   fgets(line1,15, fp);
   printf("%s\n", line1);

   fgets(line2,30, fp);
   printf("%s\n", line2);

   fclose(fp);
   return 0;
}

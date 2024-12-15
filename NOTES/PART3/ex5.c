/*Source cio.c
  Purpose: write a string to file myfile1
*/
#include <stdio.h>
#include <stdlib.h>
#define GOOD 0
#define BAD 1

int main(void) {
   char str[40] = "String to write onto disk";
   FILE *fp;
   char ch, *p;
   if ((fp = fopen("myfile1","w"))==NULL) {
      fprintf(stderr,"fopen: Cannot open file\n");
      //perror("fopen");
      exit( BAD);
   }
   p=str;
   while (*p)
     if (fputc(*p++,fp)==EOF) {
        fprintf(stderr,"Error writing file\n");
        //perror("fputc");
        fclose(fp);
        exit(BAD);
      }
   fputc('\n',fp);
   printf("file myfile1 now contains string: %s\n",str);
   fclose(fp); /*good form*/
   exit(GOOD);
}
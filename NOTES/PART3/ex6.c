/*Source: cio2.c
  Purpose: display contents of myfile on stdout
*/
#include <stdio.h>
#include <stdlib.h>
#define GOOD 0
#define BAD 1
int main(void) {
  FILE *fp;
  int ch;

  if ((fp=fopen("myfile", "r"))==NULL) {
     fprintf(stderr,"fopen: Cannot open file\n");
     exit(BAD);
  }
  while (( ch = fgetc(fp)) != EOF)
        fputc(ch,stdout);
  fclose(fp);
  exit(GOOD);
}

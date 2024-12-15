
/*Source:  copy.c
  Purpose: copy file f1 to file f2
  Usage:   copy f1 f2
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define GOOD 0
#define BAD 1

int main (int argc, char *argv[]) {
 FILE *f1, *f2;
 int ch;

 if (argc != 3) {
    fprintf(stderr, "Usage: %s <source> <destination>\n",argv[0]);
    exit(BAD);
 }
 if ((f1=fopen(argv[1],"r"))==NULL) {
    fprintf(stderr, "Cannot open %s\n",argv[1]);
    exit(BAD);
 }
 if ((f2=fopen(argv[2],"w"))==NULL) {
    fprintf(stderr, "Cannot open %s\n",argv[2]);
    exit(BAD);
 }
 while ((ch=fgetc(f1)) != EOF)
        fputc(ch,f2);

 fclose(f1); fclose(f2);
 exit(GOOD);
}

/*
4.  Use fscanf and fprintf to read a file with 2 columns of
integers, such as:
 2  4
 7  9
10  6
and write the sum of each line to another file, e.g,
6
16
16
The file names are given on the command line
*/

#include <stdio.h>
#include <stdlib.h>
#define BAD 1
#define GOOD 0

int main (int argc, char *argv[]) {
  int i1, i2;
  char c;
  FILE *fp1, *fp2;

  if ( argc != 3 ) {
     fprintf(stderr,"usage: %s [clb] file\n",argv[0]);
     exit(BAD);
  }

  if ((fp1=fopen(argv[1], "r"))==NULL) {
     fprintf(stderr,"fopen: Cannot open file %s\n",argv[1]);
     exit(BAD);
  }

  if ((fp2=fopen(argv[2], "w"))==NULL) {
     fprintf(stderr,"fopen: Cannot open file %s\n",argv[2]);
     exit(BAD);
  }

  while ( fscanf(fp1,"%d %d\n",&i1,&i2) != EOF ) {
     fprintf (fp2,"%d\n",i1+i2);
  }
  exit(GOOD);
}
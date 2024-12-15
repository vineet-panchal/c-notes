/*
1. Write a program named prt.c that reads text from
stdin until EOF and prints the number of lines and/or
characters that were read in. The program takes
one command line argument, which is l or c or b.
If the argument is l, the program prints the
number of lines, if c, the number of characters,
and if b, it prints the number of both lines and chars.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  int lines=0, chars=0;
  char c;

  if ( argc != 2 ) {
     fprintf(stderr,"usage: %s [clb]\n",argv[0]);
     exit(1);
  }

  while ( (c=fgetc(stdin)) != EOF ) {
   if ( c == '\n' ) lines++;
   chars++;
  }
  if ( argv[1][0] == 'c' || argv[1][0] == 'b' ) printf("%d chars\n",chars);
  if ( argv[1][0] == 'l' || argv[1][0] == 'b' ) printf("%d lines\n",lines);
  exit(0);
}

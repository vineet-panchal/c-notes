// Write a program named ans4.c that takes 1 command line argument,
// expected to be the name of a readable file, F.
// Your program prints F in reverse order like the linux tac command.
// e.g.,
// > ./a.out f4
// line 3
// line 2
// line 1
// > tac f4
// line 3
// line 2
// line 1
// >

// Your program (main function) must use this algorithm:
// 1. call function fileSize to obtain, for F:
//      -the length of the longest line in F, and
//      -the number of lines in F.
//    fileSize must open F, and close it before returning.
//    fileSize's prototype is:
//    void fileSize (char *fname, int *longestLine, int *numLines ) ;

// 2. allocate an array large enough so that array row i can hold
//    line i of F.

// 3. open F, read lines into the array, close F.

// 4. print array rows in reverse order, so that the program prints
//    the lines of F in reverse order, like Linux tac.

// 5. assume all lines of F end with \n
#include <stdio.h>
#include <stdlib.h>

void fileSize (char *fname, int *longestLine, int *numLines ) {
  FILE *fp=fopen(fname,"r");
  char c;
  *numLines=0; *longestLine=0;
  int curLineLength=0;
  while ((c=fgetc(fp))!=EOF) {
    curLineLength++;
    if (c=='\n') {
      (*numLines)++;
      if (curLineLength > *longestLine) *longestLine=curLineLength;
      curLineLength=0;
    }
  }
  fclose(fp);
}

int main (int argc, char *argv[]) {

   int longestLine, numLines, i=0;
   fileSize(argv[1], &longestLine, &numLines);
   if ( numLines != 0) {                     //if the file is not empty
     char Lines[numLines][longestLine+1];    //create array of appropriate size
     FILE *fp=fopen(argv[1],"r");
     while (fgets(Lines[i++],longestLine+1,fp)!=NULL) ; //read file into Lines
     for (i=numLines-1;i>=0;i--)                        //reverse-print Lines array
        printf("%s",Lines[i]);
   }
   exit (0);
}

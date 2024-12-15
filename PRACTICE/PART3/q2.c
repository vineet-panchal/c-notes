// Write a program that takes three command line arguments, expected to be a character (delimiter) and 2 filenames
// ASSUME correct/valid command line arguments (3 arguments always given, last 2 arguments are names of readable files)
// Program prints lines of the 2 files on stdout as follows where <delim> is the first command line argument (delimiter character):
// line 1 of file1<delim>line 1 of file 2
// line 2 of file1<delim>line 2 of file 2
// line 3 of file1<delim>line 3 of file 2
// use getline to read a line from a file (to accomodate lines of any length).
// The getline man page contains an example program showing how to use it.
// If one file has less lines, output the null string for missing lines.
// With valid input, your program produces the same output as the Linux paste command using the given delimiter.
// ==> ./q2 X F1 F2 >q2.out
// paste -d X F1 F2 >paste.out
// diff q2.out paste.out
// 
#include <stdio.h>
#include <string.h>
char * newlineToDelim(char *S, char D) ;

int main (int argc, char *argv[]) {
  FILE *F1, *F2;               //input files
  char D;                      //input delimiter
  char *F1line="", *F2line=""; //line read from file
  size_t n1=0,n2=0;            //length of read-in lines
  ssize_t nreadF1, nreadF2;    //getline return values
  D =argv[1][0];               //set delimiter from CLA
  F1=fopen(argv[2],"r");       //set file pointers from CLAs
  F2=fopen(argv[3],"r");

  nreadF1 = getline(&F1line,&n1,F1);  //read line1 of F1
  nreadF2 = getline(&F2line,&n2,F2);  //read line1 of F2

  //read not end-of-file for one (or both) files
  while ( (nreadF1!=-1) && (nreadF2!=-1)) {
    //print line from F1 (if any) with newline changed to D
    if (nreadF1!=-1) printf("%s",newlineToDelim(F1line,D));
    //print line from F2 (if any)
    if (nreadF2!=-1) printf("%s",F2line);
    //read in the next line from each file
    nreadF1 = getline(&F1line,&n1,F1);
    nreadF2 = getline(&F2line,&n2,F2);
   }

  //if F1 ended, but not F2, output remainder of F2 
  if ((nreadF1==-1) && (nreadF2!=-1)) {
    printf("%c%s",D,F2line);
    while  ((nreadF2 = getline(&F2line,&n2,F2)) != -1)
      printf("%c%s",D,F2line);
  }
  else
  //if F2 ended, but not F1, output remainder of F1 
  if ((nreadF2==-1) && (nreadF1!=-1)) {
    printf("%s\n",newlineToDelim(F1line,D));
    while  ((nreadF1 = getline(&F1line,&n1,F1)) != -1)
      printf("%s\n",newlineToDelim(F1line,D));
  }

}

//changes string's trailing newline to the delimiter character
char * newlineToDelim(char *S, char D) {
  char *p;
  if ((p=strchr(S, '\n')) != NULL) {//if there is a newline
      *p = D;
  }
  return S;
}
~        

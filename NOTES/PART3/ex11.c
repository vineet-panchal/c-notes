/*Source: readOneLine.c              */
/*Input:  a string any length        */
/*Output: the string and its length  */
/*Purpose: example of getline        */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int removeNewline(char *S);

int main(void) {
  char *str = NULL;  //str=NULL and n=0 are both needed to tell
  size_t n=0;        //getline to allocate storage for us
  ssize_t len;       //getline's return value (length of string in str)

  printf("Enter a string: ");
  len = getline(&str,&n,stdin);
  if ( len == -1 ) {
     fprintf(stderr,"error reading input\n");
     exit(1) ;
  }
  printf("string is:%s:\n",str);
  printf("len is:%zu:\n",len);

  len = len - removeNewline(str);
  printf("\nremoved newline and now\n");
  printf("string is:%s:\n",str);
  printf("length is:%zu:\n",len);

  exit(0);
}

//returns 1 if a newline was removed, 0 otherwise
int removeNewline(char *S) {
  char *p;
  if ((p=strchr(S, '\n')) != NULL) {//if there is a newline
      *p = '\0';
      return 1 ;
  }
  return 0;
}
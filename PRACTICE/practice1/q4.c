// In ans7.c, write a function named cloneString which takes a string
// as argument and returns a copy of that string or NULL, depending on
// whether sufficient storage was available. cloneString must have the
// same functionality as strdup from string.h (but must not call it).

// cloneString MUST:
//  -use DMA (malloc or calloc) to obtain storage for the new string.
//  -have prototype: char *cloneString(const char *S);
//  -work with given main function ans7M.c
//  -NOT call strdup or any similar functions (strndup, strdupa, strndupa)
/*main function to call cloneString found in ans7.c
  compile with -lreadline
*/
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
char *cloneString (const char *S) ;

int main (void) {
  char *S=readline("   Enter string: ");
  char *N=cloneString(S);
  printf("Original String: %s\n",S);
  if (N) {
     printf("  Cloned String: %s\n",N);
     exit(0);
  }
  printf("insufficient memory\n");
  exit(1);
}



#include <stdlib.h>
#include <string.h>

char *cloneString(const char *S) {
  char *N=malloc(sizeof(char)*strlen(S)+1);   //+1 for '\0'
  if (N==NULL) return (NULL);
  strcpy(N,S);
  return (N);
}


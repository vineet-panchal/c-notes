/*Source:  encode.c
  Purpose: encode a string by alternately taking chars
           off each end (starting with left side) and
          stopping when middle of string reached
          e.g., "Hi there" would become "Heir eth"
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char str[80];
  int i,j;
  printf("Enter string to be encoded: ");
  gets(str);
  /*encode it*/
  i=0;
  j=strlen(str)-1;
  while (i <=j) {
    if (i<j) printf("%c%c",str[i],str[j]);
    else printf("%c", str[i]); /*i==j*/
    i++; j--;
  }
  printf("\n");
  return 0;
}

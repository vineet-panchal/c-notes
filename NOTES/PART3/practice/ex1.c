/* 1. Write a function with prototype: void swap_string1(char *A, char *B);
The function swaps the strings in A and B. It does this by looping
through the string(s) and swapping individual characters. If your
function needs to know the length of a string, it can use strlen
from string.h, or it can just look for the '\0' at the string end.
Write a main program to test swap_string1. Your main must allocate
all the storage required for the strings.
*/

#include <stdio.h>
#define MAX 100
void swap_string1(char *A, char *B);

int main (void) {
  char S1[MAX]="ABC";   //tried these with different
  char S2[MAX]="defgh"; //strings for S1 and S2
  printf("S1: %s\nS2: %s\n",S1,S2);
  swap_string1(S1,S2);
  printf("S1: %s\nS2: %s\n",S1,S2);
  swap_string1(S1,S2);
  printf("S1: %s\nS2: %s\n",S1,S2);

  return 0;
}
void swap_string1(char *A, char *B) {
  char temp, *tempP;
  while ( *A != '\0' && *B != '\0' ) {
    temp = *A;
    *A = *B;
    *B = temp;
    A++ ; B++ ;
  }
  //strings unequal lengths, so finish-off the tail end
  if ( *A == '\0' && *B !='\0' ) {
     tempP=B;
     while ( *B ) *A++=*B++;
     *A='\0' ; *tempP='\0' ;
  }
  else if ( *A != '\0' && *B =='\0' ) {
     tempP=A;
     while ( *A ) *B++=*A++;
     *B='\0' ; *tempP='\0' ;
  }
}

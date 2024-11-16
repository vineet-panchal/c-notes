/* Implements mystrcmp function using array reference notation.
   Note that an alternate implementation, using pointers, is given
   as function mystrcmpP
   mystrcmp is called by main function given in ans3M.c
*/
#include <stdio.h>

int mystrcmpP(char *S1, char *S2) {
  //using pointers 
  //destroying local copy of S1 and S2, but it doesn't affect main's strings
  while ( *S1 && *S2 ) {
    if      ( *S1 < *S2 ) return(-1);
    else if ( *S1 > *S2 ) return (1);
    S1++ ; S2++ ;
  }
  //check if one string was longer
  if ( *S1 )      return (1);
  else if ( *S2 ) return (-1);
  else            return (0);
}

int mystrcmp (char *S1, char *S2) {
  //using array references 
  int i=0;
  while ( S1[i] && S2[i] ) {
    if      ( S1[i] < S2[i] ) return(-1);
    else if ( S1[i] > S2[i] ) return (1);
    i++ ;
  }
  //check if one string was longer
  if ( S1[i] )      return (1);
  else if ( S2[i] ) return (-1);
  else              return (0);
}
~                                   


/*Source: dimcheck.c
  Purpose: compute the floor space of a room
  Input: int length, width (length & width of room)
  Output: the square footage (integer) of room
  Exit:   0 if good dimensions; 1 otherwise
*/
#include <stdio.h>
#include <stdlib.h>
int GetDim(void);
int main(void) {
  int dim1,       /*one dimension of room */
      dim2,       /*another dim of room */
      ExitCode;   /*code to exit with 0=good*/

  /*initialize ExitCode to good value*/
  ExitCode=0;

  /*read in dimensions*/
  dim1 = GetDim();
  dim2 = GetDim();

  /*check for valid input*/
  if ((dim1 <= 0) || (dim2 <= 0) ) { /*invalid dims*/
     fprintf(stderr,"Input error. Expected 2 positive integers.\n");
     ExitCode=1;
  }
  else
     printf("Floor Space is %d\n",dim1*dim2);
  exit(ExitCode);
}

int GetDim(void) {
   int dim;  /*dimension */
   int sret; //scanf return value
   printf("Enter a dimension (pos. int.): ");
   sret=scanf ("%d",&dim);
   if (sret != 1) return(-1);
   else return (dim);
}
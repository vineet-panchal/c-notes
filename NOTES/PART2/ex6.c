/*Source highest.c*/
#define ELTS 5
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int i, *high, *p;
  int array[ELTS]={200,34,78,600,45};
  high=array;
  p=array;
  for ( i=1; i< ELTS; i++ ) {
      p++;
      if (*p > *high)  high = p;
  }
  printf("the highest number is %d \n", *high);
  printf("at address %p \n", high);
  printf("at index %ld of array \n", high-array);

  exit(0);
}
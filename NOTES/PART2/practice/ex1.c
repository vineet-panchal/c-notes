/* Write a program that declares a float array of 100 items and uses
scanf to read values from stdin into the array. The array might
not get filled; only read in values that are positive, and stop
filling the array once a value of zero (or a negative) is entered.
Store that non-positive value in your array to indicate this is
the end of positive values.
Main then passes the array to function sumArray which returns
the sum of the array items before the non-positive entry. Main
prints the sum.  Assume user only enters floats or ints.

e.g.,
  > a.out
  1 2 3.3 4 5.2 -9
  15.50000
  >

*/
#include <stdio.h>

float sumArray(float A[100]){
  int j=0;
  float f, sum=0;
  f=A[0];
  while ( f > 0 ) {
    sum+=f;
    f=A[++j];
  }
  return(sum);
}

int main (void) {
  float f, F[100];
  int i;
  scanf("%f",&f);
  F[0]=f;
  i=1;
  while (f > 0 ) {
    scanf("%f",&f);
    F[i++]=f;
  }
  printf("sum=%f\n",sumArray(F));
}

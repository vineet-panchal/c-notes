
//Source: swap_string1.c
//Source: swap_string1.c
#include <stdio.h>
#include <string.h>

void swap_string1( char **A, char **B) {
 char *Z;
 Z=*A;
 *A=*B;
 *B=Z;
}

int main (void) {
 char *X="abc", *Y="def"; //why not char X[4]="abc", Y[4]="def" ?
 printf("X: %s  ", X); printf("Y: %s\n", Y);
 swap_string1(&X, &Y);
 printf("X: %s  ", X); printf("Y: %s\n", Y);

}


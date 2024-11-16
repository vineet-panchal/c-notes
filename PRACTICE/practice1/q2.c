// In q2.c, implement a function named mystrcmp, which works like the strcmp function from string.h
// Your function should work with this main file.

#include <stdio.h>
#include "q2F.h"
#include <stdlib.h>

int main(void) {
	char S1[52], S2[52];
  	printf("Enter string1 (max: 50 characters): "); fgets(S1,52,stdin);
  	printf("Enter string2 (max: 50 characters): "); fgets(S2,52,stdin);
  	int c=mystrcmp (S1,S2);
  	if (c<0)      printf("S1<S2\n");
  	else if (c>0) printf("S1>S2\n");
  	else          printf("S1=S2\n");
  	exit(1);
}	

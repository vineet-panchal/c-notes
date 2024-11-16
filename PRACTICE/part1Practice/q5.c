// Create a file that reads two integers from stdin.
// Then prints the sum of the sequence between the two ints (inclusive). 
// The Main call must call function seqSum to obtain the sum.
// Function seqSum must be defined in file q5F.c with prototype q5F.h
// The formula to calculate sum between F and L inclusive: (L-F+1)*(F+L)/2
// Assume user enters integers where F<=L. Ex:
// ==> gcc q5.c q5F.c
// ==> ./a.out
// 2 4
// 9

#include <stdio.h>
#include "q5F.h"
int main(void) {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d\n", seqSum(num1, num2));
	return 0;
}


// Write a program with a main, and a function named readInput.
// The main function: 
// 	- declares char c, int i, double d
// 	- prints the current values of c, i and d
// 	- passes ADDRESSES of c, i and d to readInput to get the variables populated with values from stdin
// 	- prints the current values of c, i and d (will be values read and assigned by readInput)
// The readInput function:
// 	- prompts the user to enter a char, an int, a double, and reads them
// 	- appropriately assigns to its arguments so that main's c, i, d are updated
// The following lines 1 and 3 are printed by the main function and line 2 is by readInput
// ==> ./q1
// c=K i=22025 d=0.0
// Enter a char, an int, a double: A 42 67.28
// c=A i=42 d=67.3

#include <stdio.h>
#include <string.h>

void readInput(char *c, int *i, double *d);
void readInput(char *c, int *i, double *d) {
	printf("Enter a char, an int, a double: ");
	scanf("%c %i %lf", c, i, d);
}

int main(void) {
	char c;
	int i;
	double d;
	printf("c=%c i=%i d=%.1f\n", c, i, d);
	readInput(&c, &i, &d);
	printf("c=%c i=%d d=%.1f\n", c, i, d);
}

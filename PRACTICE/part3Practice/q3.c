// Write a program that takes an int n, and a string S, as command line arguments.
// Use calloc to allocate memory for a variable newString
// Populate newString with n copies of S
// prints newString with a terminal newline.
// ==> ./q3 4 abc
// newString=abcabcabcabc
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int len = strlen(argv[2]);
	int n = atoi(argv[1]);
	
	char *newString = calloc(1, (n * len) + 1);
	for (int i = 1; i <= n; i++) {
		newString = strcat(newString, argv[2]);
	}
	printf("newString=%s\n", newString);
	return 0;
}

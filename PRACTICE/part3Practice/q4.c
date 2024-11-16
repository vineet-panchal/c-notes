// Write a program that expects 2 integer command line arguments and prints the sum of the sequence between (inclusive).
// The formula is: sum = (last - first + 1) * (first + last) / 2
// ==> ./q5 2 4
// 9

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int first = atoi(argv[1]);
	int last = atoi(argv[2]);
	int sum = (last - first + 1) * (first + last) / 2;
	printf("%d\n", sum);
	return 0;
}


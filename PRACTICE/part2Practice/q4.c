// Write a program that reads two strings and determines which is longer, or if they're the same length.
// ==> gcc c2Labq04.c -lreadline
// ==> ./a.out
// Enter string1: abcd
// Enter string2: abc
// string1
// ==> ./a.out
// Enter string1: abcde
// Enter string2: aXcfe
// same

#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[100], str2[100];
	printf("Enter string1: ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter string2: ");
	fgets(str2, sizeof(str2), stdin);
	int str1len = strlen(str1);
	int str2len = strlen(str2);
	if (str1len < str2len) {
		printf("string2\n");
	} else if (str1len > str2len) {
		printf("string1\n");
	} else {
		printf("same\n");
	}
	return 0;
}	

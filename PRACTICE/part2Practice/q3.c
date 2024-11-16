// Copy c2.c to c3.c and modify the latter so that it reverses the string by sending it to a function named reverseString with prototype: void reverseString(char S[]);. 
// When the function returns the string in S has been reversed.

#include <stdio.h>
#include <readline/readline.h>
#include <string.h>
// Link with readline library: gcc c3.c -lreadline

void reverseString(char S[]);
void reverseString(char S[]) {
	char temp;
	int i, j;
	for (int i = 0, j = strlen(S) - 1; i < strlen(S) / 2; i++, j--) {
		temp = S[i];
		S[i] = S[j];
		S[j] = temp;
	}
}

int main(void) {
	char *S = readline("Enter a string: ");
	printf("Entered string is: %s\n", S);
	reverseString(S);
	printf("Reversed string is: %s\n", S);
	return 0;
} 

// write a program that reads a string, reverses it, and prints it
// The program must reverse the string IN PLACE place by swapping characters of the string. 
// The readline function prompts user, reads input, allocates proper amount of storage for the input, and returns a pointer to that storage. 
// The pointer can be treated as a character array (holding a string), and accessed as usual.
// ==> ./q2
// Enter a string: 12345678
// Entered string is: 12345678
// Reversed string is: 87654321

#include <stdio.h>
#include <readline/readline.h>
#include <string.h>
// Link with readline library: gcc q2.c -lreadline
int main(void) {
	char *S = readline("Enter a string: ");
	printf("Entered string is: %s\n", S);
	
	char temp;
	for (int i=0, j=strlen(S)-1; i<strlen(S)/2; i++, j--) {
		temp = S[i];
		S[i] = S[j];
		S[j] = temp;
	}
	
	printf("Reversed string is: %s\n", S);
	return 0;
}

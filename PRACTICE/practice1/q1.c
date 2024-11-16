// Object code and a header file are given for function getPointer in files
// ans2F.o and ans2F.h. You have no access to the source code.

// Function getPointer creates an array of 6 POINTERS, and returns the address
// of the first entry.  getPointer populates the array as follows:
// 	- each item of the array holds a pointer. The dereferenced value of that pointer 
// 	  is an integer, as follows:
// 	- the dereferenced value of the FIRST  item of the array has the same value
// 	 as the FIRST  ARGUMENT of getPointer
// 	- the dereferenced value of the SECOND item of the array has the same value
// 	  as the SECOND ARGUMENT of getPointer
// 	- etc.

// Write a main function in ans2.c which does the following:
// 	- calls getPointer to obtain a pointer to the start of the allocated memory array
//	  and stores it in A, using this line:
//        int **A = getPointer(2,4,6,1,7,0);
// 	  uses A to access the integers sent to getPointer, and prints this:
// 	  2+4+6+1+7+0=20

// Your program MUST OBTAIN the printed integers using the returned array, A.
// If you change the arguments to getPointer, then your output should change accordingly.
// e.g., if you changed the function call line to: int **A = getPointer(1,2,3,4,5,6); 
// then your program would print: 1+2+3+4+5+6=21

#include <stdio.h>
#include <stdlib.h>
#include "q1F.h"
int main(void) {
	int **A = getPointer(2, 4, 6, 1, 7, 0);
	
	int sum = 0; 	
	for (int i = 0; i < 5; i++) {
		sum = sum + *(A[i]);
		printf("%d+", *(A[i]));
	}
	sum = sum + *(A[-1]);
	printf("%d=%d\n", *(A[i]), sum);
	exit (0); 

}


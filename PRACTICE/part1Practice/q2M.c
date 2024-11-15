// File q2M.c contains a main program that normalizes a tab-delimited csv file of temperatures.
// Output is identical to input except it is printed in Celsius.
// Main calls function tocelsius to convert a Fahrenheit temperature to Celsius.
// File q2F.h contains the prototype for tocelsius
// Implment the function using: gcc -c q2F.c

#include <stdio.h>
#include "q2F.h"

int main(void) {
	char c, scale;
	float temp;
	while ((c = getchar()) != '\n') {
		putchar(c);
	}
	
	while (scanf("%f %c", &temp, &scale) != EOF) {
		if (scale == 'F') {
			temp = tocelsius(temp);
		}
		printf("%.1f\tC\n", temp);
	}
}

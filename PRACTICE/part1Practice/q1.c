// Implement a program which reads a float from stdin (Fahrenheit), converts to Celsius, and prints to stdout.
// The formula is: celsius = (fahrenheit - 32) / 1.8
// ==> gcc q1.c -o q1
// ==> ./q1
// ==> 70.0
// 70.0F = 21.1C

#include <stdio.h>
int main(void) {
	float tempF;
	scanf("%f", &tempF);
	printf("%.1fF = %.1fC\n", tempF, ((tempF - 32) / 1.8));
}

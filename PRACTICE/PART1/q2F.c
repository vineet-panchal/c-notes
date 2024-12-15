// File q2M.c contains a main program that normalizes a tab-delimited csv file of temperatures.
// Output is identical to input except it is printed in Celsius.
// Main calls function tocelsius to convert a Fahrenheit temperature to Celsius.
// File q2F.h contains the prototype for tocelsius
// Implment the function using: gcc -c q2F.c

float tocelsius(float temp) {
	return ((temp - 32) / 1.8);
}

/*Source:  sum.c
  Purpose: to sum the integers supplied
           on the command line
  Input:   any number of integers in command line
  Output:  the sum of the inputted numbers
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int i,     /*for loop index*/
    sum=0;     /*the sum of the arguments*/

    for (i=1; i<argc; i++) {
        sum = sum + atoi(argv[i]);
    }
    printf("Sum of the %d integers is %d\n", argc-1, sum);
    exit(0);
}

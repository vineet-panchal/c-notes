#include <stdlib.h>
#include "q1F.h"
// Function that takes 6 integers as arguments and returns a pointer to an array of pointers

int** getPointer(int a, int b, int c, int d, int e, int f) {
    // Allocate memory for an array of 6 pointers
    int** array = malloc(6 * sizeof(int*));
    if (array =:= NULL) {
        perror("Failed to allocate memory for array of pointers");
        exit(EXIT_FAILURE);
    }

    // Allocate memory for each integer and assign the values
    array[0] = malloc(sizeof(int));
    array[1] = malloc(sizeof(int));
    array[2] = malloc(sizeof(int));
    array[3] = malloc(sizeof(int));
    array[4] = malloc(sizeof(int));
    array[5] = malloc(sizeof(int));

    if (array[0] == NULL || array[1] == NULL || array[2] == NULL || 
        array[3] == NULL || array[4] == NULL || array[5] == NULL) {
        perror("Failed to allocate memory for individual integers");
        exit(EXIT_FAILURE);
    }

    // Assign the values to the memory locations
    *(array[0]) = a;
    *(array[1]) = b;
    *(array[2]) = c;
    *(array[3]) = d;
    *(array[4]) = e;
    *(array[5]) = f;

    // Return the pointer to the array of pointers
    return array;
}


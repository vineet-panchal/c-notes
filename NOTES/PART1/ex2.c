#include <stdio.h>
//Program to print number of bytes of C types
// sizeof returns number of size_t bytes, which uses %zu
//Source: typeSize.c
int main (void) {
  printf("char is %zu bytes\n", sizeof(char));
  printf("int is %zu bytes\n", sizeof(int));
  printf("long int is %zu bytes\n", sizeof(long int));
  printf("short int is %zu bytes\n", sizeof(short int));
  printf("float is %zu bytes\n", sizeof(float));
  printf("double is %zu bytes\n", sizeof(double));
  printf("long double is %zu bytes\n", sizeof(long double));
  printf("unsigned char is %zu bytes\n", sizeof(unsigned char));
  return 0;
}


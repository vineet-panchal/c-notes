/* Write a function called "me" which takes no arguments and
has no return value, but has the side-effect of printing
out your name and address. Test it by calling it in a program.
*/
#include <stdio.h>
void me (void);
int main (void) {
  me();
  return 0;
}
void me (void) {
  printf("My name\nMy Address\n");
}
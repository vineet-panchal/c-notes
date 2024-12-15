/*Source: sample7.c*/
#include <stdio.h>
void out (char c);
void bell(void);
int main(void) {
  out('A');
  bell();
  return 0 ;
}
void out(char c) {
  printf("%c\n",c);
  return;  //optional
}
void bell(void) {
  printf("\a");
}
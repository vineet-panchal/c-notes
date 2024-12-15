/*Source: struct6.c*/
#include <stdio.h>
//declare global type (so in scope ReadComplex too)
struct complex {
                 int r;
                 int i;
       } ;
struct complex ReadComplex(void);

int main(void) {
  struct complex X;
  X=ReadComplex();
  printf("%d + %di\n",X.r, X.i);
  return 0;
}
struct complex ReadComplex(void) {
  struct complex temp;
  scanf("%d %d", &temp.r, &temp.i);
  return(temp);
}
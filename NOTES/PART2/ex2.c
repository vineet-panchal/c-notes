/*Source:tryfgets.c*/
/*Note this program prints one more \n than trygets.c
  this is because fgets stores a \n in str (one \n)
  and puts always prints a \n at the end (second \n)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  int i;               //index
  char str[10];        //string max 9 chars

  printf("Enter a string (max 9 chars):");
  fgets(str,10,stdin); //stores \n before \0 if room
  puts(str);           //outputs a \n at end
  /*these two also output str (but no \n at end)
    printf("%s",str);
    for (i=0; str[i]; i++)
       printf("%c",str[i]);
    putchar('\n');
  */
  exit(0);
}
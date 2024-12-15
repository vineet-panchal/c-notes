
/*Function: MakeInt()
  Source:   MakeInt.c
  Purpose: to convert a sequence of digits to its integer value
  Input: a sequence of digit CHARACTERS, e.g., 325
  Output: the integer 325 (three hundred and twenty five)
*/
#include <stdio.h>
#include <ctype.h>

int MakeInt() {
  int num=0,  /*final integer value  */
      digit;  /*digit that is read in*/
  digit=getchar();
  for( ; isdigit(digit); digit=getchar()) {
     num=num*10;
     num=num+ (digit - '0');
  }
  return (num);
}
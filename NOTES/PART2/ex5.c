
/*Source: sample12d.c                      */
/*Input:  a string max length 39           */
/*Output: the string in upper case         */
/*Purpose: convert string to upper case    */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void) {
  char str[40], *p;

  printf("Enter a string: ");
  (void) gets(str); //if don't want warning see sample12dF.c
  p=&str[0];        //or p=str;
  while ( *p != '\0' ) {
    *p = toupper(*p);
    p++;
  }
  printf("%s\n",str);
  //printf("str=%c str+1=%c str+2=%c\n",*str,*str+1,*str+2);
  exit(0);
}
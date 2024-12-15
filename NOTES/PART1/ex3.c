/*source: sample2.c*/
/*program comments go here*/
#include <stdio.h>
int main(void) {
  char initial1, initial2; /*first initial, last initial*/
  int  year;               /*CS year (1-4)              */
  printf("Input first and last initial and your year (sep. space):");
  scanf("%c %c %d", &initial1, &initial2, &year);
  printf("\nHello %c%c from year %d\n",initial1,initial2,year);
  return 0;
}
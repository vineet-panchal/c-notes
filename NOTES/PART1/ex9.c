/* Source: rand.c
  Purpose: generate MaxNum random integers
  Input:   integer MaxNum (max number of rand nos to generate)
  Output:  MaxNum random integers
  Exit:    0 if successful; 1 if improper user input (not +ve int)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int MaxNum,     /*number of random nos to generate     */
      i,          /*index                                */
      RandNo,     /*a random number                      */
      ExitCode=0; /*value to exit program with           */

  srand(time(NULL));   //seed with fairly unique number
  //srand(12345);      //rand output always the same
  printf("How many rand nos to generate? ");
  if (((scanf("%d",&MaxNum)) != 1) || (MaxNum <0)) ExitCode=1;
  else
    for (i=1; i <= MaxNum; i++) {
      RandNo=rand();
      printf("Random No %d is %d\n",i,RandNo);
      //RandNo=(rand()%6); //for 0 to 5
      //c = (char) (rand() % 128); //for character
    }
  exit(ExitCode);
}

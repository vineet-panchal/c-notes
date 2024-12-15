/*Source:   sample1.c
  Purpose:  to show how printf works
  Input:    None
  Output:   a line stating the lucky number
*/
#include <stdio.h>     //for printf
#include <stdlib.h>    //for exit
int main(void) {
    int lucky=723;
    printf("The %s is %d\n", "lucky number", lucky);
    exit(0) ;         //same as return(0) here
}
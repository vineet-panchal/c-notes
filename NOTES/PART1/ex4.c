/*Purpose: to sum numbers from i to i+3 */
/*Source: sample3.c*/
#include <stdio.h>
int main(void) {
  int i;   /*starting number */
  int sum; /*sum of i to i+3 */
  printf("Enter starting number: ");
  scanf("%d",&i);
  sum=0;
  sum=sum + i++;
  sum=sum + i++;
  sum=sum + i++;
  sum=sum + i;
  printf("Sum from %d to %d is: %d\n", i-3,i,sum);
  return 0 ;
}
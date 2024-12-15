/*Purpose: to compute half of an number
 *Input: an number to half
 *Output: half of the input number
 *sample5.c
*/
#include <stdio.h>
float half(float a);
int main(void) {
  float num,hf;  /*number to half, and its half*/
  printf("Enter number: ");
  scanf("%f", &num);
  hf = half(num);
  printf("Half of %.2f is %.2f\n",num,hf);
  return 0;
}
float half(float a) {
  return (a/2);
}
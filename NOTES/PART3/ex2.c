/*Source: sample14.c*/
void swap(int *arg1, int *arg2);
int main(void) {
 int i=0, j=2;
 printf("i is %d, j is %d \n", i,j);
 swap(&i,&j);
 printf("i is %d, j is %d \n", i,j);
 exit(0);
}

/*Function: swap
  Purpose:  swap values of 2 integers
  Input:    addresses of the 2 integers to swap
  Output:   none
*/
void swap(int *arg1, int *arg2 ) {
  int temp;
  temp = *arg1;
  *arg1=*arg2;
  *arg2=temp;
}
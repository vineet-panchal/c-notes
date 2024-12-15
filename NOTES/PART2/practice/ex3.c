/* Write a program that takes a string as argument and reverses the string.
Write a main to test your function.
*/
#include <stdio.h>
#include <string.h>
void reverse(char *S) {
  char i,j, temp;
  for (i=0,j=strlen(S)-1;i<j;i++,j--) {
     temp=S[i];
     S[i]=S[j];
     S[j]=temp;
  }
}
int main (void) {
  char S[5][10];
  strcpy(S[0],"");
  strcpy(S[1],"a");
  strcpy(S[2],"ab");
  strcpy(S[3],"abc");
  strcpy(S[4],"abcd");
  for (int i=0;i<5;i++) {
    printf("String %s reversed is ",S[i]);
    reverse(S[i]);
    printf("%s\n",S[i]);
  }
}

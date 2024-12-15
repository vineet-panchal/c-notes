/* Write a program that declares an array of strings.
It reads a line of stdin and inserts each word of the
line into into an entry of the array.
It then prints the words in reverse order (last word
first.) Assume words are separated by a single space,
and the input line starts with a non-space.
*/

#include <stdio.h>
int main (void) {
  char words[100][100];
  char c;
  int numWords=0, i=0, j=0,k=0;;
  while ((c=getchar()) != '\n' && (c!=EOF)) {
      words[i][j++]=c;     //add character to current word
      while ((c=getchar())!= ' ' && (c!='\n') && (c!=EOF)) {
        words[i][j++]=c;   //add character to current word
      }
      words[i][++j]='\0'; //end of word
      i++;                //increment word index
      numWords++;
      j=0;                //reset character index
      if ((c=='\n') || (c==EOF)) break;
  }
  for (k=numWords-1;k>=0; k--)
    printf("words[%d]=%s\n",k,words[k]);
  return 0;
}

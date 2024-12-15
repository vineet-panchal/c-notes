/*source: trycalloc.c */
#include <stdio.h>
int main(void) {
int n;         /*num elts of future array*/
int *p, *tmp;  /*pointers to the future array*/
int i;

scanf("%d",&n);

p = (int *) calloc (n, sizeof(int));
if (p == NULL) {
    fprintf(stderr,"calloc failed\n");  //or perror("calloc");
    exit(0);
}
tmp = p;
/*load array with 0,1,2,...(n-1) */
for (i=0; i<n; i++)
    *tmp++ = i;
    //tmp[i]=i;  //same assignment
    //  p[i]=i;  //same assignment

for (i=0; i<n; i++)
    printf("p[%d] is %d\n",i,p[i]);
/* various ways to print items, e.g.,
tmp = p;
for (i=0; i<n; i++)
    printf("p[%d] is %d\n",i,*tmp++);
*/
exit(1);
}
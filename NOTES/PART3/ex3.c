  //Source: cla.c
  int main (int argc, char *argv[]) {
    int i;
    for (i=1; i<argc; i++)
        printf("command line argument %d is: %s\n", i, argv[i]);
    printf("Name of program is: %s\n", argv[0]);
    printf("argv[2][1] is: %c\n", argv[2][1]);
    exit(0);
  }
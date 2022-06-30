#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Author: José Rodolfo (jric2002) */
/* Declaration */
int main() {
  FILE *f;
  char c;
  f = fopen("example.txt", "r");
  while (!feof(f)) {
    c = fgetc(f);
    printf("%c", c);
  }
  fclose(f);
  return 0;
}
/* Definition */
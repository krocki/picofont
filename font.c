#include "fontgb.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

  if (argc < 2) {
    printf("usage: %s [text]\n", argv[0]);
    return -1;
  }

  int len = strlen(argv[1]);
  int fontw = 8;
  int fonth = 8;
  char line;

  for (int i=0; i<fonth; i++) {
    for (int k=0; k<len; k++) {

      line = font[argv[1][k]][i];

      for (int j=0; j<fontw; j++) {
        putchar((line & (1<<j)) ? '#' : '.');
      }
    }
    putchar('\n');
  }

  return 0;
}

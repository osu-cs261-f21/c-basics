#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  char* string = malloc(64 * sizeof(char));
  string[0] = 'c';
  string[1] = 'a';
  string[2] = 't';
  string[3] = '\0';

  return 0;
}

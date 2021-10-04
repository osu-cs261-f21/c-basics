#include <stdlib.h>
#include <stdio.h>

struct student {
  char* name;
  int id;
  float gpa;
};

int main(int argc, char const *argv[]) {

  int* n_ptr = malloc(sizeof(int));
  *n_ptr = 16;
  printf("== *n_ptr: %d\n", *n_ptr);

  float* flarray = malloc(128 * sizeof(float));
  int i;
  for (i = 0; i < 128; i++) {
    flarray[i] = i * 0.25;
  }

  struct student* s = malloc(sizeof(struct student));
  (*s).name = "Luke Skywalker";
  s->name = "Luke Skywalker";

  return 0;
}

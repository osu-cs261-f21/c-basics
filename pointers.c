#include <stdio.h>

void times_2(int* n) {
  *n = *n * 2;
}

int main(int argc, char const *argv[]) {
  int n = 16;
  int* n_ptr = &n;

  printf("== n: %d\n", n);
  printf("== &n: %p\n", &n);
  printf("== n_ptr: %p\n", n_ptr);
  printf("== *n_ptr: %d\n", *n_ptr);
  printf("== &n_ptr: %p\n", &n_ptr);

  *n_ptr = 32;
  printf("\n== n: %d\n", n);
  printf("== &n: %p\n", &n);
  printf("== n_ptr: %p\n", n_ptr);
  printf("== *n_ptr: %d\n", *n_ptr);
  printf("== &n_ptr: %p\n", &n_ptr);

  times_2(&n);
  printf("\n== n: %d\n", n);

  return 0;
}

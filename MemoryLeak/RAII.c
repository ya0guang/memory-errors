/* source: https://en.wikipedia.org/wiki/Memory_leak#RAII */

#include <stdlib.h>

void foo(int *a) {
    ;
}

void f(int n)
{
  int* array = calloc(n, sizeof(int));
  foo(array);
  free(array);
}
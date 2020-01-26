#include <stdlib.h>

void f(int n)
{
  int* array = calloc(n, sizeof(int));
  do_some_work(array);
  free(array);
}
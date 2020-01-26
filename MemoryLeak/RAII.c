/* modified RAII from: https://en.wikipedia.org/wiki/Memory_leak#RAII */

#include <smack.h>
#include <stdlib.h>

void foo(int *a)
{
    ;
}

int main() {
    int n = __VERIFIER_nondet_int();
    int *array = calloc(n, sizeof(int));
    foo(array);
    free(array);
    return 0;
}
#include "smack.h"
#include <stdlib.h>
#include <stdio.h>

int foo(int* a){
    for(int i = 0; i < 20; i += 1){
        printf("%d", i);
    }
    return 1;
}

int main(){

    int a_length = __VERIFIER_nondet_int();
    int a[a_length];

    foo(a);

    return 0;
}
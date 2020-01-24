#include "smack.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    int a_length = 16;
    int a[a_length];

    int i;
    /* Under this assumption, it seems that i is to be overwitten and smack will report an error */
    // assume(i == 5);

    /* only with flag: --loop-limit=18(or > 18), smack can find an error */
    for(i = 0; i < a_length + 1; i += 1){
        /* if assume here, the program will never fall into error */
        // assume(i == 5);

        /* assertion for the array deref is in bound */
        assert(i >= 0 && i < a_length);
        a[i] = i;
    }

    return 0;
}
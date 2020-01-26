#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void foo(char* p) {

    // check if it's a null pointer before using it
    if (p != NULL) strcpy(p, "string");
}

int main() {
    char* ptr = (char*) malloc(sizeof(char) * 10);

    // how free knows the space of this memory block?
    free(ptr);

    // nullify a invalid pointer to avoid using it
    ptr = NULL;

    foo(ptr);
    // strcpy(ptr, "string");

    return 0;
}
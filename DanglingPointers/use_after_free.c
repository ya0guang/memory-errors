#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void foo(char* p) {
    strcpy(p, "string");
}

int main() {
    char* ptr = (char*) malloc(sizeof(char) * 10);

    // how free knows the space of this memory block?
    free(ptr);
    ptr = NULL;

    foo(ptr);
    // strcpy(ptr, "string");

    return 0;
}
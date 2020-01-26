#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char* ptr = (char*) malloc(sizeof(char) * 10);

    // how free knows the space of this memory block?
    free(ptr);

    strcpy(ptr, "string");

    return 0;
}
#include<stdlib.h>
#include<stdio.h>

int main(){
    char *p;
    // char c = 'A';
    // p = &c;
    *p = 'A';

    printf("value of the pointer: %p\n", p);
    printf("the pointer points to: %c\n", *p);
    return 0;
}
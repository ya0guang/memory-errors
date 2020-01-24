#include<stdlib.h>
#include<stdio.h>

static int *p = 0;
static int *q = 0;
// int *r;

// void foo3(){
//     int c = 3;
//     r = &c;
//     // printf("the pointer q in foo2 points to: %d\n", *q);
// }

// void foo2(){
//     int b = 2;
//     q = &b;
//     // printf("the pointer q in foo2 points to: %d\n", *q);
//     foo3();
// }

void foo1(){
    int a = 1;
    p = &a;
    q = &a;
    // printf("the pointer points to: %p\n", p);
  //  printf("the pointer points to: %d\n", *p);
    // foo2();
}

int main(){
    // int o = 0xabcd;


    foo1();

    // printf("value of the pointer r in foo3: %p\n", r);

    // printf("start, and o is %d\n", o);
    printf("the pointer Q in foo1 points to: %d\n", *q);
    printf("the pointer p in foo1 points to: %d\n", *p);
        printf("value of the pointer p in foo1: %p\n", p);

        printf("value of the pointer q in foo2: %p\n", q);

    //printf("the pointer p in foo1 is: %p\n", p);
    //printf("the pointer p in foo1 points to: %d\n", *p);
   //printf("the pointer p in foo1 is: %p\n", p);
   //printf("the pointer p in foo1 points to: %d\n", *p);
    //printf("the pointer Q in foo1 points to: %d\n", *q);

    // printf("variable in main: %x\n", *(p+4));
    // printf("the pointer p in foo1 points to: %x\n", *(p+16));
    // printf("the pointer q in foo2 points to: %x\n", *q);
    // printf("the pointer r in foo3 points to: %x\n", *r);

    return 0;
}

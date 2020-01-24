#include<stdio.h>
#include<string.h>

int * pf1;
int * pf2;

int main(int argc, char const *argv[])
{
    int a = 1;
    pf1 = &a - 8;
    pf2 = &a - 16;
    memset(pf2, 'A', 16);
    printf("%d\n", a);
    printf("%x\n", *pf1);
    printf("%x\n", *pf2);
    return 0;
}

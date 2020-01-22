#include<stdlib.h>
#include<stdio.h>

int main(){
    int *p;
    {
        int a = 1;
        p = &a;
    }
    return 0;
}

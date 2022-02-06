/*
pointer2.c
ポインタの勉強2
*/
#include<stdio.h>

int main(void){
    int n;
    int *p;
    printf("%p\n", &n);     // 0x7ffffe54683c
    printf("%p\n", &p);     // 0x7ffffe54683c + 4
    p = &n;
    printf("%p\n", p);     // 0x7ffffe54683c
    n = 1;
    printf("%d\n", *p);      // 1

    return 0;
}
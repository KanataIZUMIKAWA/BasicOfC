#include<stdio.h>
/*
pointer.c
ポインタの勉強
*/

int main(void){
    int n = 1;
    int *p;
    p = &n;

    printf("%d\n", n);      // 1
    printf("%p\n", &n);     // 0x7fffe88e9b20
    printf("p is %p\n", p); // p is 0x7fffe88e9b20
    printf("%p\n", main);   // 0x7f031ac006aa

    
    int m, *q;
    
    q = p;
    m = *q;
    *q = 2;
    
    printf("%d\n", n);      // 2
    printf("%d\n", m);      // 1

    return 0;
}
#include <stdio.h>
 
/*** 値渡し (call by value)***/
/* main関数の元々のaの値は保持される */
void f(long A) 
{
    A += 100;
    printf("A：%ld\n", A);
}
 
/*** 参照渡し (call by reference)***/
/* main関数の元々のaの値が書き換えられる */
void f2(long *pa) 
{
    *pa += 100;
    printf("pa：%ld\n", *pa);
}
 
int main(void)
{
    long a = 1000;
    f(a);
    printf("a：%ld\n", a);
    f2(&a);
    printf("a：%ld\n", a);
 
    return 0;
}
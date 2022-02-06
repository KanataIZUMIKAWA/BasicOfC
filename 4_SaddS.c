/*SaddS.c*/
#include<stdio.h>
#include<string.h>

int main(void){
    char a[15] = "INIAD";
    char b[5] = "Univ";

    int b_len = sizeof(b);
    a[5] = ' ';
    memcpy(&a[6], b, b_len);

    printf("a: %s\n", a);
    printf("b: %s\n", b);
    printf("b_len: %d\n", b_len);
    return 0;
}
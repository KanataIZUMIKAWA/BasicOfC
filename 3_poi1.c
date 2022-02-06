/* poi1.c */
#include<stdio.h>

int main(void){
    char arr[] = {23, 34, 56};
    char *p;
    p = arr;     /* arrの先頭 */

    printf("*p = %d\n", *p);
    printf("arr = %d\n", *arr);
    printf("arr = %d\n", arr[0]);
    return 0;
}
/*hanyo.c*/
#include<stdio.h>
#include<string.h>

int main(void){
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    
    memcpy(&b[1], a, 3*sizeof(int));
    printf("b = [%d, %d, %d, %d, %d]\n", b[0], b[1], b[2], b[3], b[4]);

    
}
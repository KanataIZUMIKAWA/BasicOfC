/*memcmp.c*/
#include<stdio.h>
#include<string.h>

int main(void){
    int a[] = {1, 2, 3, 4, 5};
    int a2[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};

    if (memcmp(a, a2, sizeof(a)) == 0){
        printf("a and a2 is same list\n");
    } else {
        printf("a and a2 is not same list\n");
    }
    
    if (memcmp(a, b, sizeof(a)) == 0){
        printf("a and b is same list\n");
    } else {
        printf("a and b is not same list\n");
    }
    return 0;    
    
    return 0;
}